#define	_USART_MGR_C_
#include"USARTMGR.H"


const unsigned char PresetBaud[][3]=
{
	{TSPD_256,77,CalOverTime(1200)}, //1200
	{TSPD_256,38,CalOverTime(2400)}, //2400
	{TSPD_64,77,CalOverTime(4800)},//4800
	{TSPD_64,38,CalOverTime(9600)}, //9600
	{TSPD_64,25,CalOverTime(14400)}, //14400
	{TSPD_16,77,CalOverTime(19200)}, //19200
	{TSPD_16,51,CalOverTime(28800)}, //28800
	{TSPD_16,38,CalOverTime(38400)}, //38400
	{TSPD_16,25,CalOverTime(57600)}, //57600
	{TSPD_16,12,CalOverTime(115200)}, //115200
	{TSPD_4,12,CalOverTime(460800)}, //460800
	{TSPD_4,7,CalOverTime(750000)}, //750000
	{TSPD_4,5,CalOverTime(1000000)}, //1000000
};
//初始化
void UsartMgr_Init(u8 num)
{
	#if(Usart_Num==0)
	ANSF &= ~0X0C;
	PUF2 = 1;
	TX0CR = 0;
	RX0CR = 0;
	TX0CR = (u8)(TXEN_1+TSYNC_0+TL9_0+TD9_0+PresetBaud[num][0]);//使能串口发送功能、异步模式、8位数据、波特率预分频比为4、不发送第九位数据
	RX0CR = (u8)(RXEN_1+RCKPS_0+R9_0+RD9_0);//使能串口接收功能、上升沿发送数据、8位数据、不接收第9位数据
	BRGD0 = PresetBaud[num][1];	//波特率
	#else
	ANSE &= ~0XC0;
	PUE6 = 1;
	TX1CR = 0;
	RX1CR = 0;
	TX1CR = (u8)(TXEN_1+TSYNC_0+TL9_0+TD9_0+PresetBaud[num][0]);//使能串口发送功能、异步模式、8位数据、波特率预分频比为4、不发送第九位数据
	RX1CR = (u8) (RXEN_1+RCKPS_0+R9_0+RD9_0);//使能串口接收功能、上升沿发送数据、8位数据、不接收第9位数据
	BRGD1 = PresetBaud[num][1];	//波特率
	#endif
	UsartMgr.RXDLen = 0;
	UsartMgr.RXDOverTimeSet = PresetBaud[num][2];
	UsartMgr.RXDOverTime = 0;
	pUsartBuf = UsartMgr.Buffer;
}

/*--------------------------------------------------
***函数名称:u8 Usart1Mgr_BeginTx(u8 len)
***功能描述:串口1启动发送
***参数:len:传输长度
***返回值:1=操作成功 0=操作失败,串口正忙或长度错误
***创建者:GJN
***创建时间:2022.6.9
***最后更新:
---------------------------------------------------*/
void UsartMgr_BeginTx(u16 len)
{
	if(len>sizeof(UsartMgr.Buffer))
		return;
	pUsartBuf = UsartMgr.Buffer;
	#if(Usart_Num==0)
	while(len--)
	{
		while(!TX0IF)
		{
			CLRWDT();
		}
		TX0REG = *pUsartBuf++;
	}
	while(!T0MCLR)
	{
		CLRWDT();
	}
	#else
	while(len--)
	{
		while(!TX1IF)
		{
			CLRWDT();
		}
		TX1REG = *pUsartBuf++;
	}
	while(!T1MCLR)
	{
		CLRWDT();
	}
	#endif
	pUsartBuf = UsartMgr.Buffer;
}


//串口中断
void UsartMgr_Int(void)
{
	#if(Usart_Num==0)
	if(RX0IF)
	{
		volatile unsigned char temp = RX0REG;

		UsartMgr.RXDOverTime = 0;
		if(UsartMgr.RXDLen >= sizeof(UsartMgr.Buffer))
		{
			UsartMgr.RXDLen = 0;
			pUsartBuf = UsartMgr.Buffer;
		}
		else
		{
			*pUsartBuf++ = temp;
			UsartMgr.RXDLen++;
		//	UsartMgr.Buffer[UsartMgr.RXDLen++] = temp;
		}
	}
	#else
	if(RX1IF)
	{
		volatile unsigned char temp = RX1REG;
		UsartMgr.RXDOverTime = 0;
		if(UsartMgr.RXDLen >= sizeof(UsartMgr.Buffer))
		{
			UsartMgr.RXDLen = 0;
			pUsartBuf = UsartMgr.Buffer;
		}
		else
		{
			*pUsartBuf++ = temp;
			UsartMgr.RXDLen++;
		//	UsartMgr.Buffer[UsartMgr.RXDLen++] = temp;
		}
	}
	#endif
}

