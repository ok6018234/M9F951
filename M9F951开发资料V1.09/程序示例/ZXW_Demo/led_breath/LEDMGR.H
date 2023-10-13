#ifndef	_LED_MGR_H_
#define	_LED_MGR_H_
#ifdef	_LED_MGR_C_
#define	_LED_MGR_E_
#else
#define	_LED_MGR_E_	extern
#endif	

#include "DEFINE.H"

#define LED_Row	6	//LED行数
#define LED_Col 22	//LED列数
#define LED_NUM	LED_Row*LED_Col	//LED个数
#define PWM1_NUM	LED_Col	//PWM1数量


#define PWM1CR_BaseAddr	(u8*)0XEBF
#define PWM1DL_BaseAddr (u8*)0XEA8
#define PWM1DH_BaseAddr (u8*)0XEA9

#define PWM100CR_Addr 0XEBF
#define PWM100DL_Addr 0XEA8
#define PWM100DH_Addr 0XEA9


_LED_MGR_E_	u16 LEDTimer;
_LED_MGR_E_ u8 LEDReverse;


//LED呼吸模式设置
#define Init_BreathMaxDuty	100		//最大亮度
#define Init_BreathRiseTimeSet	1000	//亮起时间，单位ms
#define Init_BreathOnTimeSet	500	//常亮时间，单位ms
#define Init_BreathFallTimeSet	1000	//熄灭时间，单位ms
#define Init_BreathOffTimeSet	300	//常灭时间，单位ms

#if(Init_BreathMaxDuty==0)
#define Init_BreathRiseTimer	0
#else
#define Init_BreathRiseTimer	Init_BreathRiseTimeSet/Init_BreathMaxDuty	//定时时间
#endif

#if(Init_BreathMaxDuty==0)
#define Init_BreathFallTimer	0
#else
#define Init_BreathFallTimer	Init_BreathFallTimeSet/Init_BreathMaxDuty	//定时时间
#endif



_LED_MGR_E_	void LEDMgr_Init(void);
_LED_MGR_E_	void LEDMgr_Cathode(void);
_LED_MGR_E_	void LEDMgr_Deal(void);

#endif

