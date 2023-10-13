#define	_USBD_DESC_C_
#include "USBD_HID_LIB.H"

unsigned char const DeviceDesc[] = 
{
	18,						//bLength
	0x01,					//bDescriptorType
	0x10,0x01,				//bcdUSB
	0x00,					//bDeviceClass
	0x00,					//bDeviceSubClass
	0x00,					//bDeviceProtocol
	MAX_EP0_SIZE,			//bMaxPacketSize0
	((USBD_VID&0XFF)>>0),((USBD_VID&0XFF00)>>8),        //idVendor
    ((USBD_PID&0XFF)>>0),((USBD_PID&0XFF00)>>8),
	0x00,0x01,				//bcdDevice
	0x01,                   //iManufacturer
	0x02,					//iProduct
	0x03,					//iSerialNumebr
	0x01, 					//bNumConfigurations
};

unsigned char const LanguageIDDesc[] = 
{
	4,
	0x03,
	0x09,
	0x04
};

unsigned char const ManuStringDesc[] =
{
	26,
	0X03,
	'Z',0,'X',0,'W',0,'M',0,'i',0,'c',0,'r',0,'o',0,'C',0,'h',0,'i',0,'p',0
};

unsigned char const ProductStringDesc[] = 
{
    22,  //Length
    0x03,               //type=string
    'B',0,'o',0,'o',0,'t',0,'l',0,'o',0,'a',0,'d',0,'e',0,'r',0,
};


unsigned char const SerialNumberStringDesc[] = 
{
    22,         
	0x03,       
	'2',0,'0',0,'2',0,'1',0,'-',0,'0',0,'1',0,'-',0,'1',0,'5',0,
};


unsigned char const CustomReportDesc[]=
{
	 0x05, 0x01, // USAGE_PAGE (Generic Desktop)
	 0x09, 0x00, // USAGE (0)
	 0xa1, 0x01, // COLLECTION (Application)
	 0x15, 0x00, // 	LOGICAL_MINIMUM (0)
	 0x26, 0xff,0X00, // 	LOGICAL_MAXIMUM (255)
	 0x19, 0x01, // 	USAGE_MINIMUM (1)
	 0x29, 0x08, // 	USAGE_MAXIMUM (8) 
	 0x95, 0x40, // 	REPORT_COUNT (64)
	 0x75, 0x08, // 	REPORT_SIZE (8)
	 0x81, 0x02, // 	INPUT (Data,Var,Abs)
	 0x19, 0x01, // 	USAGE_MINIMUM (1)
	 0x29, 0x08, // 	USAGE_MAXIMUM (8) 
	 0x95, 0x40, // 	REPORT_COUNT (64)
	 0x75, 0x08, // 	REPORT_SIZE (8)
	 0x91, 0x02, //   OUTPUT (Data,Var,Abs)
	 0xc0		 // END_COLLECTION
};

unsigned char const ConfigurationDesc[] = 
{
//bLength
	0x09,
//bDescriptorType
	0x02,
//wTotalLength
	CONFIG_DESC_SIZE&0XFF,
 	(CONFIG_DESC_SIZE&0XFF00)>>8,
//bNumInterfaces
	0x01,
//bConfiguration
	0x01,
//iConfiguration
	0x00,
//bmAttributes
	0x80,                                          //7--bmAtrributes
//bMaxPower
	0x32,

 /*******************Custom Interface*********************/
//bLength
 0x09,
//bDescriptorType
 0x04,
//bInterfaceNumber
 0x00,
//bAlternateSetting
 0x00,
//bNumEndpoints
 0x02,
//bInterfaceClass
 0x03,
//bInterfaceSubClass
 0x00,
//bInterfaceProtocol
 0x00,
//iConfiguration
 0x00,
 
 /******************HID************************/
//bLength
 0x09,
//bDescriptorType
 0x21,
//bcdHID
 0x10,0x01, 
//bCountyCode
 0x21,
//bNumDescriptors
 0x01,
//bDescritporType
 0x22,
//bDescriptorLength
 sizeof(CustomReportDesc)&0XFF,
 (sizeof(CustomReportDesc)&0XFF00)>>8,
 
/**********************Endpoint***********************/
//bLength
 0x07,
//bDescriptorType
 0x05,
//bEndpointAddress
 0x85,
//bmAttributes
 0x03,
//wMaxPacketSize
 MAX_EP5_SIZE,0x00,
//bInterval
 0x01,
/**********************Endpoint***********************/
//bLength
 0x07,
//bDescriptorType
 0x05,
//bEndpointAddress
 0x05,
//bmAttributes
 0x03,
//wMaxPacketSize
 MAX_EP5_SIZE,0x00,
//bInterval
 0x01,
};


unsigned char DeviceDescSize=sizeof(DeviceDesc);
unsigned char LanguageIDDescSize=sizeof(LanguageIDDesc);
unsigned char ManuStringDescSize=sizeof(ManuStringDesc);
unsigned char ProductStringDescSize=sizeof(ProductStringDesc);
unsigned char SerialNumberStringDescSize=sizeof(SerialNumberStringDesc);
unsigned char ConfigurationDescSize=sizeof(ConfigurationDesc);
unsigned char CustomReportDescSize=sizeof(CustomReportDesc);


