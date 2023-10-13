#define	_USART2_APP_C_
#include"TimerMgr.h"
#include"Usart2Mgr.h"
#include"Usart2App.h"
#include<string.h>

void Usart2App_Send(void)
{
/*	static u16 delay;
	
	if(TimerMgr_RefTime(&delay, DELAY_300MS))
	{
		Usart2Mgr.TXDBuf[0] = 0X34;
		Usart2Mgr_BeginTx(1);
	}*/
}
void Usart2App_Receive(void)
{
	Usart2Mgr_OverTime();	
	if(Usart2Mgr.RXDAnomalous)	//异常处理
	{
		Usart2Mgr_RXD_Reset();
	}
	else if(Usart2Mgr.RXDEnd)	//接收完毕
	{
		memcpy(Usart2Mgr.TXDBuf,Usart2Mgr.RXDBuf,Usart2Mgr.RXDLen);
		Usart2Mgr_BeginTx(Usart2Mgr.RXDLen);
		Usart2Mgr_RXD_Reset();
	}
}

