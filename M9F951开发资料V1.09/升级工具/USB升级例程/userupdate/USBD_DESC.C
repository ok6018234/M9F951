#define	_USBD_DESC_C_
#include "USBD_HID_LIB.H"

const unsigned char DeviceDesc[] = 
{
	18,						//bLength
	0x01,					//bDescriptorType
	0x00,0x02,				//bcdUSB
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

const unsigned char LanguageIDDesc[] = 
{
	4,
	0x03,
	0x09,
	0x04
};

const unsigned char ManuStringDesc[] =
{
	26,
	0X03,
	'Z',0,'X',0,'W',0,'M',0,'i',0,'c',0,'r',0,'o',0,'C',0,'h',0,'i',0,'p',0
};

const unsigned char ProductStringDesc[] = 
{
    32,  //Length
    0x03,               //type=string
    'Z',0,'X',0,'W',0,'-',0,'M',0,'9',0,'F',0,'9',0,'5',0,'1',0,
    'M',0,'o',0,'u',0,'s',0,'e',0,
};


const unsigned char SerialNumberStringDesc[] = 
{
    22,         
	0x03,       
	'2',0,'0',0,'2',0,'2',0,'-',0,'0',0,'8',0,'-',0,'1',0,'6',0,
};

const unsigned char ConfigStringDesc[] = 
{
    22,         
	0x03, 
	'Z',0,'X',0,'W',0,'M',0,'u',0,'t',0,'i',0,'D',0,'e',0,'v',0,
};

const unsigned char MouseStringDesc[] = 
{
    18,         
	0x03,
	'Z',0,'X',0,'W',0,'M',0,'o',0,'u',0,'s',0,'e',0,
};

const unsigned char MouseReportDesc[]=
{
	0x05, 0x01, // USAGE_PAGE (Generic Desktop)
	0x09, 0x02, // USAGE (Mouse)
	0xa1, 0x01, // COLLECTION (Application)
	0x85,0x01,				//ReportID(2)
	0x09, 0x01, //   USAGE (Pointer)
	0xa1, 0x00, //   COLLECTION (Physical)
	0x05, 0x09, //     USAGE_PAGE (Button)
	0x19, 0x01, //     USAGE_MINIMUM (Button 1)
	0x29, 0x05, //     USAGE_MAXIMUM (Button 5)
	0x15, 0x00, //     LOGICAL_MINIMUM (0)
	0x25, 0x01, //     LOGICAL_MAXIMUM (1)
	0x95, 0x05, //     REPORT_COUNT (5)
	0x75, 0x01, //     REPORT_SIZE (1)
	0x81, 0x02, //     INPUT (Data,Var,Abs)
	0x95, 0x01, //     REPORT_COUNT (1)
	0x75, 0x03, //     REPORT_SIZE (5)
	0x81, 0x03, //     INPUT (Cnst,Var,Abs)
	0x05, 0x01, //     USAGE_PAGE (Generic Desktop)
	0x09, 0x30, //     USAGE (X)
	0x09, 0x31, //     USAGE (Y)
	0x09, 0x38, //     USAGE (Wheel)
	0x15, 0x81, //     LOGICAL_MINIMUM (-127)
	0x25, 0x7f, //     LOGICAL_MAXIMUM (127)
	0x75, 0x08, //     REPORT_SIZE (8)
	0x95, 0x03, //     REPORT_COUNT (3)
	0x81, 0x06, //     INPUT (Data,Var,Rel)
	0X05,0X0C,	// USAGE_PAGE (Consumer Page)
	0X0A,0X38,0X02,	//USAGE(AC Pan)
	0X95,0X01,	//REPORT_COUNT (1)
	0X81,0X06,	// INPUT (Data,Var,Rel)
	0xc0,       //   END_COLLECTION
	0xc0,        // END_COLLECTION
	
	0x06,0x00,0xff,        //厂商自定义
    0x09,0x01,             //USAGE (01)
    0xa1,0x01,            //COLLECTION (Application)
    0x85,0x02,				//ReportID(2)
    0x95,MAX_EP0_SIZE-1,    //REPORT_COUNT (31)
    0x75,0x08,               //     REPORT_SIZE (8)
    0x26,0xff,0x00,          //     LOGICAL_MAXIMUM (255)
    0x15,0x00,				//     LOGICAL_MINIMUM (0)
    0x09,0x01,              //USAGE (01)
    0x81,0x02,				// INPUT (Data,Var,Abs) 
    0x95,MAX_EP0_SIZE-1,    //REPORT_COUNT (31)
    0x75,0x08,               //     REPORT_SIZE (8)     
    0x26,0xff,0x00,          //     LOGICAL_MAXIMUM (255)
    0x15,0x00,				//     LOGICAL_MINIMUM (0)
    0x09,0x01,              //USAGE (01)
    0x91,0x02,				// OUTPUT (Data,Var,Abs)
    0xc0,				// END_COLLECTION
};

const unsigned char ConfigurationDesc[] = 
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
//bConfigurationValue
	0x01,
//iConfiguration
	0x04,
//bmAttributes
	0xA0,                                          //7--bmAtrributes
//bMaxPower
	0x32,

/*******************Mouse Interface*********************/
//bLength
 0x09,
//bDescriptorType
 0x04,
//bInterfaceNumber
 0x00,
//bAlternateSetting
 0x00,
//bNumEndpoints
 0x01,
//bInterfaceClass
 0x03,
//bInterfaceSubClass
 0x01,
//bInterfaceProtocol
 0x02,
//iConfiguration
 0x05,
 
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
 sizeof(MouseReportDesc)&0XFF,
 (sizeof(MouseReportDesc)&0XFF00)>>8,
 
/**********************Endpoint***********************/
//bLength
 0x07,
//bDescriptorType
 0x05,
//bEndpointAddress
 0x81,
//bmAttributes
 0x03,
//wMaxPacketSize
 MAX_EP1_SIZE,0x00,
//bInterval
 0x0A,
};


unsigned char DeviceDescSize=sizeof(DeviceDesc);
unsigned char LanguageIDDescSize=sizeof(LanguageIDDesc);

unsigned char ManuStringDescSize=sizeof(ManuStringDesc);
unsigned char ProductStringDescSize=sizeof(ProductStringDesc);
unsigned char SerialNumberStringDescSize=sizeof(SerialNumberStringDesc);
unsigned char ConfigStringDescSize=sizeof(ConfigStringDesc);
unsigned char MouseStringDescSize=sizeof(MouseStringDesc);

unsigned char ConfigurationDescSize=sizeof(ConfigurationDesc);
unsigned char MouseReportDescSize=sizeof(MouseReportDesc);


