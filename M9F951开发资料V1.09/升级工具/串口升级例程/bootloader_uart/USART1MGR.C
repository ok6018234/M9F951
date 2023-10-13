#define	_USART1_MGR_C_
#include"USART1MGR.H"
#include"stdio.h"

//初始化
void Usart1Mgr_Init(void)
{
	ANSF &= ~0X0C;
	TX0CR = (u8)(TX0EN_1+T0SYNC_0+T0L9_0+T0SPD+T0D9_0);//使能串口发送功能、异步模式、8位数据、波特率预分频比为4、不发送第九位数据
	RX0CR = (u8)(RX0EN_1+R0CKPS_0+R09_0+R0D9_0);//使能串口接收功能、上升沿发送数据、8位数据、不接收第9位数据
	BRGD0 = USART1_BRGD;	//波特率
	
	Usart1Mgr_RXD_Reset();
}

//接收参数复位
void Usart1Mgr_RXD_Reset(void)
{
	Usart1Mgr.RXDLen = 0;
	Usart1Mgr.RXDState = InValid;
	Usart1Mgr.RXDEnd = InValid;
	Usart1Mgr.RXDAnomalous = InValid;
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
u8 Usart1Mgr_BeginTx(u8 len)
{
	if(TX0IE)
		return 0;
	if(len>USART1_MGR_MAX_LENGTH)
		return 0;
	Usart1Mgr.TXDLen = 0;
	Usart1Mgr.TXDLenBack = len;
	TX0IE = 1;
	return 1;
}

//超时判断
void Usart1Mgr_OverTime(void)
{
	static u16 delay;

	if(Usart1Mgr.RXDState)	//接收状态
	{
		if(++Usart1Mgr.RXDOverTime>=USART1_MGR_OVER_TIME)
		{
			Usart1Mgr.RXDEnd = Valid;
			Usart1Mgr.RXDState = InValid;
		}
	}
}

//串口1中断
void Usart1Mgr_Int(void)
{
	if(TX0IE&&TX0IF)
	{
		if(Usart1Mgr.TXDLen >= Usart1Mgr.TXDLenBack)	//发送完毕
		{
			TX0IE = 0;
		}
		else
		{
			TX0REG = Usart1Mgr.TXDBuf[Usart1Mgr.TXDLen++];	
		}
	}
	if(RX0IE&&RX0IF)
	{
		if(!Usart1Mgr.RXDEnd)
		{
			Usart1Mgr.RXDOverTime = 0;
			if(Usart1Mgr.RXDLen >= USART1_MGR_MAX_LENGTH)
			{
				Usart1Mgr.RXDAnomalous = Valid;
				Usart1Mgr.RXDLen = 0;
				Usart1Mgr.RXDState = InValid;
			}
			else
			{
				Usart1Mgr.RXDState = Valid;
				Usart1Mgr.RXDBuf[Usart1Mgr.RXDLen++] = RX0REG;
			}
		}
	}	
}

#ifdef _DEBUG
//使用printf需重写putch
void putch(char c)		//重写putch
{
  	while(T0MCLR==0){}
		TX0REG = c;
}


#endif

