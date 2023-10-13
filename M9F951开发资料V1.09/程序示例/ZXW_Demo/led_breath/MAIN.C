#include "DEFINE.H"

void main()
{
	System_Init();
	while(1)
	{
		LEDMgr_Deal();			//灯光处理
	}	
}

void breakpoint_protect()
{
	
}

u8 FSR0H_back;
u8 FSR0L_back;
u8 FSR1H_back;
u8 FSR1L_back;
u8 FSR2H_back;
u8 FSR2L_back;
u8 PRODH_back;
u8 PRODL_back;

void interrupt high_priority Intr(void)
{
	#asm
	call _breakpoint_protect ,f		//高优先级中断务必添加该汇编
	#endasm
	FSR0H_back = FSR0H;	//保护
	FSR0L_back = FSR0L;
	FSR1H_back = FSR1H;
	FSR1L_back = FSR1L;
	FSR2H_back = FSR2H;
	FSR2L_back = FSR2L;
	PRODH_back = PRODH;
	PRODL_back = PRODL;
	Timer_Deal();
	FSR0H = FSR0H_back;	//恢复
	FSR0L = FSR0L_back;
	FSR1H = FSR1H_back;
	FSR1L = FSR1L_back;
	FSR2H = FSR2H_back;
	FSR2L = FSR2L_back;
	PRODH = PRODH_back;
	PRODL = PRODL_back;
}
