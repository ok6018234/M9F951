#ifndef _DELAY_H
#define _DELAY_H
#ifdef	_DELAY_C_
#define	_DELAY_E_
#else
#define	_DELAY_E_	extern
#endif

#include<zc.h>

#define Fcpu_4T
//#define Fcpu_8T


_DELAY_E_ void Delayus(unsigned char t);
_DELAY_E_ void Delayms(unsigned int t);

#endif
