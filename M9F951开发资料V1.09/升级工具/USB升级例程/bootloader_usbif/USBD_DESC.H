#ifndef _USBD_DESC_H
#define _USBD_DESC_H
#ifdef	_USBD_DESC_C_
#define	_USBD_DESC_E_
#else
#define	_USBD_DESC_E_	extern
#endif


#define		CUSTOM_REPROT_DESC_SIZE 32

#define		PRODUCT_DESC_SIZE	22
#define		MANU_DESC_SIZE	26
#define		SN_DESC_SIZE		22
#define		DEVICE_DESC_SIZE	18
#define		CONFIG_DESC_SIZE	9+9+9+7+7
#define		LANGUAGEID_DESC_SIZE  4


extern  unsigned char const CustomReportDesc[];


extern	unsigned char const LanguageIDDesc[];
extern	unsigned char const ManuStringDesc[];
extern	unsigned char const ProductStringDesc[];
extern	unsigned char const SerialNumberStringDesc[];
extern	unsigned char const DeviceDesc[];
extern	unsigned char const ConfigurationDesc[];

_USBD_DESC_E_	unsigned char	DeviceDescSize;
_USBD_DESC_E_	unsigned char	LanguageIDDescSize;
_USBD_DESC_E_	unsigned char	ManuStringDescSize;
_USBD_DESC_E_	unsigned char	ProductStringDescSize;
_USBD_DESC_E_	unsigned char	SerialNumberStringDescSize;
_USBD_DESC_E_	unsigned char	ConfigurationDescSize;
_USBD_DESC_E_	unsigned char	CustomReportDescSize;

#endif /* __USBD_DESC_H */


