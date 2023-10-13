#ifndef _USBD_USER_H
#define _USBD_USER_H
#ifdef	_USBD_USER_C_
#define	_USBD_USER_E_
#else
#define	_USBD_USER_E_	extern
#endif

_USBD_USER_E_ void USBD_GetDevStrDescriptor(void);
_USBD_USER_E_ void USBD_ClassGetHidDes(void);
_USBD_USER_E_ void USBD_ClassGetHidReport(void);
_USBD_USER_E_ void USBD_SetReport(unsigned char len);
_USBD_USER_E_ void USBD_GetReport(void);
#endif