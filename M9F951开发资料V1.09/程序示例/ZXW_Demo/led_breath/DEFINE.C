#define _DEFINE_C_
#include "DEFINE.H"

void GIE_Enable(void)
{
	GIEL = 0;
	GIEH = 1;
}

void IO_Init(void)
{
	ANSA = 0;
	IOA = 0XFF;
	OEA = B(11111100);
	IOAODS0 = B(11111100);	//IOA2-IOA7配置为大电流
	IOAODS1 = B(11111100);

	
	ANSB = 0;
	IOB = 0;
	PUB = 0XFF;
	
	ANSC = 0;
	IOC = 0;
	PUC = 0XFF;
	
	ANSD = 0;
	IOD = 0;
	PUD = B(00111111);
}

void System_Init(void)
{
	GIE_Enable();
	IO_Init();
	
	Timer0_Init();
	Timer1_Init();
	LEDMgr_Init();
}


