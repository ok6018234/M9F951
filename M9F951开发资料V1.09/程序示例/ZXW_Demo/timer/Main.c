#include"zc.h"
#include"TimerMgr.h"

unsigned int delay;

void main()
{
	Timer0_Init();
	Timer1_Init();
	Timer2_Init();
	GIEH = 1;
	
	OEA1 = 1;
	while(1)
	{
		if(TimerMgr_RefTime(&delay,DELAY_100MS))	//每100ms翻转IOA1
		{
			IOAOR1 ^= 1;
		}
	}
}

void breakpoint_protect()
{
	
}

void interrupt high_priority H_Intr(void)
{
	#asm
	call _breakpoint_protect ,f		//高优先级中断务必添加该汇编
	#endasm
	Timer0_Intr();
	Timer1_Intr();
	Timer2_Intr();
}
