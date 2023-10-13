#ifndef	_TIMER_MGR_H_
#define	_TIMER_MGR_H_
#ifdef	_TIMER_MGR_C_
#define	_TIMER_MGR_E_
#else
#define	_TIMER_MGR_E_	extern
#endif

#include "DEFINE.H"

#define	Timer0_us	(u32)1000
#define	Timer0_Clk	(u32)16
#define	Timer0_Div	(u32)128
#define	T0Value	Timer0_us*Timer0_Clk/Timer0_Div

#define	Timer1_us	(u32)62
#define	Timer1_Clk	(u32)24
#define	Timer1_Div	(u32)128
#define	T1Value	(u32)65535-Timer1_us*Timer1_Clk/Timer1_Div


_TIMER_MGR_E_ void Timer0_Init(void);
_TIMER_MGR_E_ void Timer1_Init(void);
_TIMER_MGR_E_ void Timer_Deal(void);

#endif


