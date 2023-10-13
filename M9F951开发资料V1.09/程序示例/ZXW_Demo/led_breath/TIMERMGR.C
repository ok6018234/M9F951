#define _TIMER_MGR_C_
#include "DEFINE.H"


void Timer0_Init(void)
{
	TC0IE=1;
	TC0IF=0;
	T0CR=B(00101111);			//8位模式，时钟源16MHz，128分频
	TC0CH=0;
	TC0CL=T0Value;			//定时1ms
	TC0EN=1;
}

void Timer1_Init(void)
{
	T1CR = B(00001011);	//递增模式，时钟源Fosch，8分频
	TC1PRH = 0;
	TC1PRL = 100;
	TC1EN = 1;
}


void Timer_Deal(void)
{
	if(TC0IF)
	{
		TC0IF = 0;

		LEDTimer++;
		LEDMgr_Cathode();
	}
}



