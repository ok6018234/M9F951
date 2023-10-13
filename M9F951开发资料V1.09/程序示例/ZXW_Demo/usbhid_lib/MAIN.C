#include<zc.h>
#include"HWCONFIG.H"
#include"USBD_HID_LIB.H"
#include"CMP.H"
#include"FLASHMGR.H"
/*
USB挂起判断步骤如下:
1、设定一个定时器,例程里设定了1ms的定时器,用于对挂起电平的计时;
2、先打开F0、F1的电平中断,当有IO中断来临,说明总线处于活跃状态,清除计时并且关闭该中断,防止USB正常收发数据时频繁进入IO中断;
3、如果IO中断处于关闭状态,则一定时间后再打开IO中断检测;
4、如果IO中断处于打开状态,则一定时间后检测F0、F1是否符合挂起电平,然后设置挂起标志位;

2022/08/16:添加静态库,函数有USBD_CalibrationInit(),USBD_Calibration()两个函数,关联到芯片内部的校准频率功能,由于校准参数较为专业,随意修改可能造成问题,故不开放两个函数源码。
*/


static void Timer0_Init(void)
{
	TC0IP=1;	//低优先级
	TC0IE=1;
	TC0IF=0;
	TC0CH=0;
	TC0CL=186;			//定时1ms
	T0CR=0b10001111;	//8位模式，时钟源Fosch，128分频
}

static bit Wakesource = 0;

void main()
{
	CMP_Init();
	USBD_Init();
	Timer0_Init();
	ANSA3 = 0;
	OEA3 = 0;
	PUA3 = 1;
	IOACHIP = 1; //低优先级
	IOAICR3 = 1;
	while(1)
	{
		CLRWDT();
		if(USBEnumState == USBE_Configured)
		{
			if(OSType&0X80)
			{
				switch(OSType)	
				{
					case 0X80|OS_Unknown:	//未知系统
					break;
					case 0X80|OS_Windows:	//Windows系统
					break;
					case 0X80|OS_Apple:		//ios/ipadOS/mac系统
					break;
					case 0X80|OS_AndroidHarmony:	//安卓/鸿蒙系统
					break;
					default:break;
				}
			}
			if(UsbState.suspend)
			{
				TC0IE = 0;	//关闭定时器0
				UsbState.suspend = 0;
				
				if(UsbState.remoteSleep)	//允许远程唤醒，打开IO中断
				{
					IOACHIE = 1;
					IOACHIF = 0;
				}
				
				USBD_SwBusDeinit();	//休眠前关闭F0、F1中断
				
				SLEEP();//进入休眠，SLEEP即为STOP=1
				__delaywdt_ms(1); //等待系统及中断稳定
				if(Wakesource)		//IO唤醒
				{
					Wakesource = 0;
					USBD_RemoteWakeup();	//开始远程唤醒
				}
				USBD_SwBusInit(); //打开挂起检测
				TC0IE = 1;	//打开定时器0
			}
			
			if(!IOA3)
			{
				__delaywdt_ms(10);
				unsigned char testbuf[5]={0X02,0,0,0,0};	//模拟鼠标右键按下
				USBD_EP_Write(EP2, testbuf, sizeof(testbuf));
				__delaywdt_ms(500);
				testbuf[0] = 0;		//模拟鼠标右键松开
				USBD_EP_Write(EP2, testbuf, sizeof(testbuf));
			}
		
		/*	if(UsbState.bootloader)	//升级指令
			{
				__delaywdt_ms(1);
				FlashMgr_UnLockCode();
				FlashMgr_OverwriteCode(1, 0X7FFF);
				Reset();	//软复位
			}*/
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
}


void interrupt low_priority LP_Intr(void)	//低优先级中断入口
{
	USBD_Istr();
	if(TC0IE&&TC0IF)
	{
		TC0IF = 0;
		USBD_SwBusHandler();//挂起唤醒判断
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


