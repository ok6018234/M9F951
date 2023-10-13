#ifndef _USBD_ISTR_H
#define _USBD_ISTR_H
#ifdef	_USBD_ISTR_C_
#define	_USBD_ISTR_E_
#else
#define	_USBD_ISTR_E_	extern
#endif


_USBD_ISTR_E_ void USBD_Istr(void);
_USBD_ISTR_E_ void USBD_Bus_Handler(void);
_USBD_ISTR_E_ void USBD_EP1_Handler(void);
_USBD_ISTR_E_ void USBD_EP2_Handler(void);
_USBD_ISTR_E_ void USBD_EP3_Handler(void);
_USBD_ISTR_E_ void USBD_EP4_Handler(void);
_USBD_ISTR_E_ void USBD_EP5_Handler(void);

#endif

