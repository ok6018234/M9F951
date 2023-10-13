#include<zc.h>
#include"TimerMgr.h"
#include"Usart1Mgr.h"
#include"Usart1App.h"
#include"Usart2Mgr.h"
#include"Usart2App.h"
#include"stdio.h"

unsigned int delay;

void main()
{
	Timer0_Init();
	Usart1Mgr_Init();
	Usart2Mgr_Init();
	GIEH = 1;
	while(1)
	{
		CLRWDT();	//喂狗
		Usart1App_Send();
		
//		Usart2App_Send();
		if(TimerMgr_RefTime(&delay,DELAY_2MS))
		{
			Usart1App_Receive();
			Usart2App_Receive();
		//	printf("test\r\n");
		}

	}
}


void breakpoint_protect()
{
	
}

void	interrupt high_priority H_Intr(void)
{
	#asm
	call _breakpoint_protect ,f		//高优先级中断务必添加该汇编
	#endasm
	Timer0_Intr();
	Usart1Mgr_Int();
	Usart2Mgr_Int();
}

