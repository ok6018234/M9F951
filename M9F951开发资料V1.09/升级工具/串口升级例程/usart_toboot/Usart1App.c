#define _USART1_APP_C_
#include"TimerMgr.h"
#include"Usart1Mgr.h"
#include"Usart1App.h"
#include<string.h>

void Usart1App_Send(void)
{
	static u16 delay;

	if(TimerMgr_RefTime(&delay, DELAY_500MS))
	{
		Usart1Mgr.TXDBuf[0] = 0X55;
		Usart1Mgr.TXDBuf[1] = 0XAA;
		Usart1Mgr.TXDBuf[2] = 0XFE;
		Usart1Mgr_BeginTx(3);
	}
}

void Usart1App_Receive(void)
{
	Usart1Mgr_OverTime();

	if(Usart1Mgr.RXDAnomalous)	//异常处理
	{
		Usart1Mgr_RXD_Reset();
	}
	else if(Usart1Mgr.RXDEnd)	//接收完毕
	{
	//	memcpy(Usart1Mgr.TXDBuf,Usart1Mgr.RXDBuf,Usart1Mgr.RXDLen);
	//	Usart1Mgr_BeginTx(Usart1Mgr.RXDLen);
		if((Usart1Mgr.RXDBuf[0]==0X55)&&(Usart1Mgr.RXDBuf[1]==0XFF)&&(Usart1Mgr.RXDBuf[2]==0)&&(Usart1Mgr.RXDBuf[3]==0)&&(Usart1Mgr.RXDBuf[4]==0XFF))
		{
			Reset();
		}
	    Usart1Mgr_RXD_Reset();
	}
}




