#ifndef _USBD_CORE_H
#define _USBD_CORE_H
#ifdef	_USBD_CORE_C_
#define	_USBD_CORE_E_
#else
#define	_USBD_CORE_E_	extern
#endif

//bmRequesetType
#define Direction	0X80		//D7,传输方向
#define Re_Type		0X60		//D6-D5请求类型
#define Recipient	0X1F		//D4-D0 接收对象

typedef enum
{
	Dir_HostToSlave = 0X00,		//主机到设备
	Dir_SlaveToHost = 0X80,		//设备到主机
}DIRECTION_ENUM;

typedef enum
{
	ReType_Standard=0X00,		//标准请求
	ReType_Class=0X20,			//类请求
	ReType_Vendor=0X40,  //厂商请求
}RETYPE_ENUM;

typedef enum
{
	Rec_Device=0,		//设备
	Rec_Interface=1,	//接口
	Rec_EndPoint=2,		//端点
	Rec_Other = 3,		//其它
}RECIPIENT_ENUM;

typedef enum
{
	GET_STATUS=0,
	CLEAR_FEATURE=1,
	SET_FEATURE=3,
	SET_ADDRESS=5,
	GET_DESCRIPTOR=6,
	SET_DESCRIPTOR=7,
	GET_CONFIGURATION=8,
	SET_CONFIGURATION=9,
	GET_INTERFACE=10,
	SET_INTERFACE=11,
	SYNCH_FRAME=12,
}STANDARD_REQUEST;

typedef enum
{
	GET_REPORT=0x01,
	GET_IDLE=0x02,
	GET_PROTOCOL=0x03,
	SET_REPORT=0x09,
	SET_IDLE=0x0A,
	SET_PROTOCOL=0x0B,
}CLASS_REQUEST;


typedef enum
{
	GET_DEV_DES=0x01,
	GET_CONFIG_DES=0x02,
	GET_STR_DES=0x03,
	GET_INTERFACE_DES=0X04,
	GET_ENDPOINT_DES=0X05,
	GET_DEVICE_QUALIFIER_DES=0X06,
	GET_OTHER_SPEED_CONFIG_DES=0X07,
	GET_INTERFACE_POWER_DES=0X08,
	GET_BOS_DES=0X0F,
	GET_CLASS_HID_DES=0x21,
	GET_CLASS_HID_REPORT=0x22,
}DESCRIPTOR_REQUEST;

typedef enum
{
	USBE_Default,
	USBE_Address,
	USBE_Configured,
}USBENUM_STATE;

_USBD_CORE_E_ USBENUM_STATE USBEnumState;



#define	EP0BUFF_ADDR (unsigned char*)0X800
#define	EP1BUFF_ADDR (unsigned char*)0X822
#define	EP2BUFF_ADDR (unsigned char*)0X844
#define	EP3BUFF_ADDR (unsigned char*)0X866
#define	EP4BUFF_ADDR (unsigned char*)0X878
#define	EP5BUFF_ADDR (unsigned char*)0X8BA

#define EP0IOPS_ADDR (unsigned char*)0XF76
#define EP1IOPS_ADDR (unsigned char*)0XF74
#define EP2IOPS_ADDR (unsigned char*)0XF72
#define EP3IOPS_ADDR (unsigned char*)0XF70
#define EP4IOPS_ADDR (unsigned char*)0XF6E
#define EP5IOPS_ADDR (unsigned char*)0XF6C

_USBD_CORE_E_ unsigned char UsbEp0Buffer[MAX_EP0_SIZE+2] @(0X800);	//端点0缓存起始地址,最后两个字节为CRC校验
#define bmRequestType UsbEp0Buffer[0]
#define bRequest UsbEp0Buffer[1]
#define wValuel UsbEp0Buffer[2]
#define wValueh UsbEp0Buffer[3]
#define wIndexl UsbEp0Buffer[4]
#define wIndexh UsbEp0Buffer[5]
#define wLengthl UsbEp0Buffer[6]
#define wLengthh UsbEp0Buffer[7]

#if	defined(EP1_IN_EN)||defined(EP1_OUT_EN)
_USBD_CORE_E_ unsigned char UsbEp1Buffer[MAX_EP1_SIZE+2] @(0X822);	//端点1缓存起始地址,最后两个字节为CRC校验
#endif
#if	defined(EP2_IN_EN)||defined(EP2_OUT_EN)
_USBD_CORE_E_ unsigned char UsbEp2Buffer[MAX_EP2_SIZE+2] @(0X844);	//端点2缓存起始地址,最后两个字节为CRC校验
#endif
#if	defined(EP3_IN_EN)||defined(EP3_OUT_EN)
_USBD_CORE_E_ unsigned char UsbEp3Buffer[MAX_EP3_SIZE+2] @(0X866);	//端点3缓存起始地址,最后两个字节为CRC校验
#endif
#if	defined(EP4_IN_EN)||defined(EP4_OUT_EN)
_USBD_CORE_E_ unsigned char UsbEp4Buffer[MAX_EP4_SIZE+2] @(0X878);	//端点4缓存起始地址,最后两个字节为CRC校验
#endif
#if	defined(EP5_IN_EN)||defined(EP5_OUT_EN)
_USBD_CORE_E_ unsigned char UsbEp5Buffer[MAX_EP5_SIZE+2] @(0X8BA);	//端点5缓存起始地址,最后两个字节为CRC校验
#endif

typedef enum
{
	EP0,
	EP1,
	EP2,
	EP3,
	EP4,
	EP5,
}EP_ENUM;


typedef enum
{
	OS_Unknown,
	OS_Windows,
	OS_Apple,
	OS_AndroidHarmony,
}OS_TYPE;

typedef union
{
	struct 
	{    
        unsigned char boot : 1; 
        unsigned char remoteSleep : 1; 
        unsigned char suspend : 1; 
        unsigned char setReport : 1;
        unsigned char bootloader:1;
		unsigned char reserve:3;
    };
    unsigned char u8;
}usb_state_t; //可位操作，也可字节操作

_USBD_CORE_E_ usb_state_t UsbState;
_USBD_CORE_E_ OS_TYPE OSType;

_USBD_CORE_E_ void USBD_Init(void);
_USBD_CORE_E_ void USBD_DeInit(void);
_USBD_CORE_E_ void USBD_RemoteWakeup(void);
_USBD_CORE_E_ void USBD_Ep0_Write(unsigned char len);
_USBD_CORE_E_ void USBD_Ep0_WriteTable(const unsigned char* dat, unsigned int len);
_USBD_CORE_E_ void USBD_Ep0_Stall(void);
_USBD_CORE_E_ unsigned char USBD_EP_Write(unsigned char EPNum,unsigned char* dat, unsigned char len);

_USBD_CORE_E_ void USBD_SwBusInit(void);
_USBD_CORE_E_ void USBD_SwBusDeinit(void);
_USBD_CORE_E_ void USBD_SwBusHandler(void);
_USBD_CORE_E_ void USBD_IOHandler(void);

_USBD_CORE_E_ void USBD_Istr(void);


#endif


