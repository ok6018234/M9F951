#ifndef	_DEFINE_H_
#define	_DEFINE_H_
#ifdef	_DEFINE_C_
#define	_DEFINE_E_
#else
#define	_DEFINE_E_	extern
#endif

#include<zc.h>
#include"TYPE_DEFINE.H"
#include"TIMERMGR.H"
#include"LEDMGR.H"
#include"USBD_HID_LIB.H"

#define	UART0_SPD	(u32)4
#define	UART0_BAUD	(u32)115200
#define	UART0_BRGD	(u32)24000000/(UART0_SPD*UART0_BAUD)-1

#define PWM1CR_BaseAddr	(u8*)0XEBF
#define PWM1DL_BaseAddr (u8*)0XEA8
#define PWM1DH_BaseAddr (u8*)0XEA9

#define LongToBin(n) \
(                    \
((n >> 21) & 0x80) | \
((n >> 18) & 0x40) | \
((n >> 15) & 0x20) | \
((n >> 12) & 0x10) | \
((n >>  9) & 0x08) | \
((n >>  6) & 0x04) | \
((n >>  3) & 0x02) | \
((n      ) & 0x01)   \
)
#define B(n)   LongToBin(0x##n##l)	//write binary charactor set,exsample : B(11111111) = 0xff

_DEFINE_E_ void System_Init(void);

#endif

