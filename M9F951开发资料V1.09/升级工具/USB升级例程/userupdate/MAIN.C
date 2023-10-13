#include"USBD_HID_LIB.H"
#include"CMP.H"
#include"FLASHMGR.H"
#include"HWCONFIG.H"
/*
目前在测试中发现USB进行挂起操作时,有概率无法正常产生相应的中断标志位,在库中添加了对D+、D-电平的软件判断
解决思路:检测F0、F1电平状态,当符合挂起电平且维持一定时间未变化,认为总线挂起。

具体步骤如下:
1、设定一个定时器,例程里设定了1ms的定时器,用于对挂起电平的计时;
2、先打开F0、F1的电平中断,当有IO中断来临,说明总线处于活跃状态,清除计时并且关闭该中断,防止USB正常收发数据时频繁进入IO中断;
3、如果IO中断处于关闭状态,则一定时间后再打开IO中断检测;
4、如果IO中断处于打开状态,则一定时间后检测F0、F1是否符合挂起电平,然后设置挂起标志位;
*/

//24M,4T模式，500ms实测499.96ms
void Delayms(unsigned int t)
{
	unsigned char i,j;
	
	while(t--)
	{
		i = 8;
		j = 198;
		do
		{
			CLRWDT();
			while (--j);
		} while (--i);
		
	}
}

static void Timer0_Init(void)
{
	TC0IE=1;
	TC0IF=0;
	TC0CH=0;
	TC0CL=186;			//定时1ms
	T0CR=0X8F;			//8位模式，时钟源Fosch，128分频
}

static unsigned char Wakesource = 0;

void main()
{
	CMP_Init();
	USBD_Init();
	Timer0_Init();
	STPH = 1;	//休眠时关闭高频振荡器
	STPL = 1;	//休眠时关闭低频振荡器
	ANSA3 = 0;
	OEA3 = 0;
	PUA3 = 1;
	IOAICR3 = 1;

	while(1)
	{
		CLRWDT();

		if(USBEnumState == USBE_Configured)
		{
			if(bUSBSwSuspend)
			{
				if(bUSBRemoteSleep)	//允许远程唤醒，打开IO中断
				{
					IOACHIE = 1;
					IOACHIF = 0;
				}
				USBD_SwBusDeinit();	//休眠前关闭F0、F1中断
				TC0IE = 0;	//关闭定时器0
				SLEEP();//进入休眠，SLEEP即为STOP=1
				Delayms(1);
				USBSwState = 0;
				if(Wakesource)		//非USB唤醒
				{
					Wakesource = 0;
					USBD_RemoteWakeup();	//开始远程唤醒
				}				
				USBD_SwBusInit(); //打开F0、F1检测
				TC0IE = 1;	//打开定时器0
			}
			if(IOA3==0)
			{
				Delayms(10);
				if(IOA3==0)
				{
					unsigned char testbuf[6]={0X01,0X02,0,0,0,0};	//模拟鼠标右键按下
					USBD_EP_Write(EP2, testbuf, sizeof(testbuf));
					Delayms(500);
					testbuf[0] = 0;		//模拟鼠标右键松开
					USBD_EP_Write(EP2, testbuf, sizeof(testbuf));
				}
			}
			
			if(UpdateFlag)	//程序升级标志
			{
				Delayms(2);	//延时,等待USB数据发送完成
				FlashMgr_UnLockEE();
				FlashMgr_WriteEE(&UpdateFlag, 0X7FFF, 1);
				Reset();	//软复位
			}
		}
	}
}

void breakpoint_protect()
{
	
}

void interrupt high_priority HP_Intr(void)	//高优先级中断入口
{
	#asm
	call _breakpoint_protect ,f		//高优先级中断务必添加该汇编
	#endasm
	
	CMP_Istr();
	
	USBD_Istr();
	if(TC0IE&&TC0IF)
	{
		TC0IF = 0;
		USBD_SwBusHandler();//软件挂起唤醒判断
	}
	if(IOACHIE&&IOACHIF)
	{
		IOACHIE = 0;
		IOACHIF = 0;
		Wakesource = 1;
	}
	if(IOFCHIE&&IOFCHIF)
	{
		IOFCHIF = 0;
		USBD_IOHandler(); //F0、F1处理
	}
}

/*
void interrupt low_priority LP_Intr(void)	//低优先级中断入口
{

}
*/

