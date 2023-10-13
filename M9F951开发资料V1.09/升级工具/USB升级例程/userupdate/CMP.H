#ifndef _CMP_H
#define _CMP_H
#ifdef	_CMP_C_
#define	_CMP_E_
#else
#define	_CMP_E_	extern
#endif

#define LVD_mv 3800 //VDD掉电电压设定
#define VLVD_Value (LVD_mv/2-1250)/50

_CMP_E_ void CMP_Init(void);
_CMP_E_ void CMP_Istr(void);


#endif

