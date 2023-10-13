#define	_USART2_MGR_C_
#include"TIMERMGR.H"
#include"USART2MGR.H"

//初始化
void Usart2Mgr_Init(void)
{
	ANSE &= ~0XC0;
	TX1CR = (u8)(TX1EN_1+T1SYNC_0+T1L9_0+T1SPD+T1D9_0);//使能串口发送功能、异步模式、8位数据、波特率预分频比为4、不发送第九位数据
	RX1CR = (u8) (RX1EN_1+R1CKPS_0+R19_0+R1D9_0);//使能串口接收功能、上升沿发送数据、8位数据、不接收第9位数据
	BRGD1 = USART2_BRGD;	//波特率
	
	Usart2Mgr_RXD_Reset();
}

//接收参数复位
void Usart2Mgr_RXD_Reset(void)
{
	Usart2Mgr.RXDLen = 0;
	Usart2Mgr.RXDState = InValid;
	Usart2Mgr.RXDEnd = InValid;
	Usart2Mgr.RXDAnomalous = InValid;
}

/*--------------------------------------------------
***函数名称:u8 Usart2Mgr_BeginTx(u8 len)
***功能描述:串口2启动发送
***参数:len:传输长度
***返回值:1=操作成功 0=操作失败,串口正忙或长度错误
***创建者:GJN
***创建时间:2022.6.9
***最后更新:
---------------------------------------------------*/
u8 Usart2Mgr_BeginTx(u8 len)
{
	if(TX1IE)
		return 0;
	if(len>USART2_MGR_MAX_LENGTH)
		return 0;
	Usart2Mgr.TXDLen = 0;
	Usart2Mgr.TXDLenBack = len;
	TX1IE = 1;
	return 1;
}

void Usart2Mgr_OverTime(void)
{
	static u16 delay;

	if(Usart2Mgr.RXDState)
	{
		if(++Usart2Mgr.RXDOverTime>=USART2_MGR_OVER_TIME)
		{
			Usart2Mgr.RXDEnd = Valid;
			Usart2Mgr.RXDState = InValid;
		}
	}
}

void Usart2Mgr_Int(void)
{
	if(TX1IE&&TX1IF)
	{
		if(Usart2Mgr.TXDLen >= Usart2Mgr.TXDLenBack)
		{
			TX1IE = 0;
		}
		else
		{
			TX1REG = Usart2Mgr.TXDBuf[Usart2Mgr.TXDLen++];
		}
	}
	if(RX1IE&&RX1IF)
	{
		if(!FR1ER)
		{
			if(Usart2Mgr.RXDEnd == InValid)
			{		
				Usart2Mgr.RXDOverTime = 0;
				if(Usart2Mgr.RXDLen >= USART2_MGR_MAX_LENGTH)
				{
					Usart2Mgr.RXDAnomalous = Valid;
					Usart2Mgr.RXDLen = 0;
					Usart2Mgr.RXDState = InValid;
				}
				else
				{
					Usart2Mgr.RXDState = Valid;
					Usart2Mgr.RXDBuf[Usart2Mgr.RXDLen++] = RX1REG;
				}
			}
		}
		else
			Usart2Mgr.RXDAnomalous = Valid;
	}	
}

