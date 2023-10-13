#ifndef _USBD_DESC_H
#define _USBD_DESC_H
#ifdef	_USBD_DESC_C_
#define	_USBD_DESC_E_
#else
#define	_USBD_DESC_E_	extern
#endif

#define	CONFIG_DESC_SIZE 9+9+9+7

extern	const unsigned char KeyboardReportDesc[];
extern	const unsigned char MouseReportDesc[];
extern	const unsigned char JoyStickReportDesc[];
extern  const unsigned char ConsumerReportDesc[];
extern  const unsigned char CustomReportDesc[];


extern	const unsigned char LanguageIDDesc[];
extern	const unsigned char ManuStringDesc[];
extern	const unsigned char ProductStringDesc[];
extern	const unsigned char SerialNumberStringDesc[];
extern	const unsigned char ConfigStringDesc[];
extern	const unsigned char MouseStringDesc[];


extern	const unsigned char DeviceDesc[];
extern	const unsigned char ConfigurationDesc[];

_USBD_DESC_E_	unsigned char	DeviceDescSize;
_USBD_DESC_E_	unsigned char	LanguageIDDescSize;

_USBD_DESC_E_	unsigned char	ManuStringDescSize;
_USBD_DESC_E_	unsigned char	ProductStringDescSize;
_USBD_DESC_E_	unsigned char	SerialNumberStringDescSize;
_USBD_DESC_E_	unsigned char	ConfigStringDescSize;
_USBD_DESC_E_	unsigned char	MouseStringDescSize;

_USBD_DESC_E_	unsigned char	ConfigurationDescSize;
_USBD_DESC_E_	unsigned char	MouseReportDescSize;


#endif /* __USBD_DESC_H */


