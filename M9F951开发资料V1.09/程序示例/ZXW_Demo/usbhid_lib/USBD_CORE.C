/******************************************************************************
*  
*  版权所有（c)，2023，ZXW
*  
*******************************************************************************
*  
*  文件名称：USBD_CORE.C
*  版 本 号：V1.0
*  作    者：Gjn
*  生成日期：2023年5月4日
*  
*  功能描述：USB设备端核心函数
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：创建文件
*  
******************************************************************************/
#define _USBD_CORE_C_

/*----------------------------------------------*
 *  标准库头文件                                *
 *----------------------------------------------*/
#include<zc.h>
#include<stdio.h>
#include<string.h>


/*----------------------------------------------*
 *  非标准库头文件                              *
 *----------------------------------------------*/
#include"USBD_HID_LIB.H"


/*----------------------------------------------*
 *  宏定义                                      *
 *----------------------------------------------*/

/*----------------------------------------------*
 *  数据类型定义                                *
 *----------------------------------------------*/
typedef union
{
	unsigned int u16;
	unsigned char u8[2];
}usb_u16_t;

/*----------------------------------------------*
 *  常量定义                                    *
 *----------------------------------------------*/
static const unsigned char MS_OSStringDesc[]=
{
	0x12,	//bLength
	0x03,	//bDescriptorType
	'M',0,	//qwSignature
	'S',0,
	'F',0,
	'T',0,
	'1',0,
	'0',0,
	'0',0,
	0x01,	//bMS_VendorCode
	0x00,	//bPad
};

static const unsigned char MS_ExCompatIDDesc[]=
{
	0x10,0x00,0x00,0x00, //dwLength
	0x00,0x10,	//bcdVersion
	0x04,0x00,	//wIndex
	0x00,		//bCount
	0x00,0x00,0x00,0x00,0x00,0x00,0x00, //RESERVED
};

/*----------------------------------------------*
 *  变量定义                                *
 *----------------------------------------------*/
static usb_u16_t Ep0OutLen;
static unsigned char IdleRate;
static unsigned char SwBusTimer;

/*----------------------------------------------*
 *  函数声明                                    *
 *----------------------------------------------*/
void USBD_CalibrationInit(void);
void USBD_Calibration(void);

/*----------------------------------------------*
 *  函数实现                                    *
 *----------------------------------------------*/

/*******************************************
USBEnumState：枚举阶段。包含地址阶段以及配置阶段
USBState：设备状态，有挂起状态，远程休眠等阶段
*******************************************/

#ifdef USBD_DEBUG
//UART0 Send Byte
void putch(char c)		//重写putch
{
  	while(T0MCLR==0){}
		TX0REG = c;
}

void printf_array(unsigned char *dat,unsigned char len)
{
	while(len--)
	{
		printf("%02X ",*dat);
		dat++;
	}
	printf("\n");
}

#endif



/*****************************************************************************
*  函 数 名：USBD_Init
*  功能描述：USB设备初始化
*  输入参数：void  
*  输出参数：无
*  返 回 值：void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
void USBD_Init(void)
{
#ifdef USBD_DEBUG
	TX0CR = 0XC0+USBD_T0SPD;
	BRGD0 = USBD_USART0_BRGD;
/*
	printf("\r\nCompany:ZXWMicroelectronics\r\n");
	printf("Product:M9F951_USBHID\r\n");
	printf("Version:1.0.0 ");
	printf(__DATE__);
	printf(" ");
	printf(__TIME__);
	printf("\r\n\r\n");
*/
#endif

	ANSF &= ~0X03;	//DP、DN端口设为数字模式
	SetUsbCurrent;
	#if(USB_INT_HIGH==0)
	UINTCR0 = 0;	//关闭USB中断
	#elif(USB_INT_HIGH==1)
	UINTP = 0;
	UINTCR0 = BIT_INTEP5+BIT_INTEP4+BIT_INTEP3+BIT_INTEP2+BIT_INTEP1+BIT_INTEP0+BIT_INTBUS; //中断使能
	GIEH = 1;
	#elif(USB_INT_HIGH==2)
	UINTP = 0XFF;	//配置USB各中断为低优先级
	UINTCR0 = BIT_INTEP5+BIT_INTEP4+BIT_INTEP3+BIT_INTEP2+BIT_INTEP1+BIT_INTEP0+BIT_INTBUS; //中断使能
	GIEL = 1;	//开低优先级中断
	#endif
	
	USBCON  = BIT_UFS+BIT_USHC+BIT_UE;
	USBEnumState = USBE_Default;
	
	UsbState.u8 = 0;
	OSType = OS_Unknown;
	USBD_SwBusInit();
}

/*****************************************************************************
*  函 数 名：USBD_DeInit
*  功能描述：关闭USB设备
*  输入参数：void  
*  输出参数：无
*  返 回 值：void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
void USBD_DeInit(void)
{
	USBCON = 0;
	USBD_SwBusDeinit();
}

/*****************************************************************************
*  函 数 名：USBD_SwBusInit
*  功能描述：USB设备总线检测初始化
*  输入参数：void  
*  输出参数：无
*  返 回 值：void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
void USBD_SwBusInit(void)
{
	#if(USB_INT_HIGH==0)
	IOFCHIP = 0;
	#elif(USB_INT_HIGH==1)
	IOFCHIP = 0;
	#elif(USB_INT_HIGH==2)
	IOFCHIP = 1;
	#endif
	
	IOFICR |= 0X03;
	IOFCHIE = 1;
	IOFCHIF = 0;
	SwBusTimer = 0;
}

/*****************************************************************************
*  函 数 名：USBD_SwBusDeinit
*  功能描述：关闭USB设备总线检测
*  输入参数：void  
*  输出参数：无
*  返 回 值：void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
void USBD_SwBusDeinit(void)
{
	IOFICR &= ~0X03;
	SwBusTimer = 0;
}

/*****************************************************************************
*  函 数 名：USBD_SwBusHandler
*  功能描述：USB设备总线检测处理
*  输入参数：void  
*  输出参数：无
*  返 回 值：void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
void USBD_SwBusHandler(void)
{
	if(++SwBusTimer>=20)	//判定间隔时间
	{
		SwBusTimer = 0;
		if(IOFICR&0X03)	//一定时间后F0、F1电平未翻转认定总线进入挂起状态
		{
			if(USBEnumState==USBE_Configured)
			{
				if(!UsbState.suspend)
				{
					UsbState.suspend = 1;
					#ifdef USB_FS
					if((IOF0==1)&&(IOF1==0)) //全速模式挂起时为J状态
					{
						
						#ifdef USBD_DEBUG
						printf( "USB SWSuspend\n\n" ); 
						#endif
					}
					#else
					if((IOF0==0)&&(IOF1==1)) //低速模式挂起时为K状态
					{
						#ifdef USBD_DEBUG
						printf( "USB SWSuspend\n\n" ); 
						#endif
					}
					#endif
				}
			}
		}
		else
		{
			IOFICR |= 0X03;	//F0、F1中断关闭后一定时间后再开启中断检测电平
			IOFCHIF = 0;
		}
	}
}

/*****************************************************************************
*  函 数 名：USBD_IOHandler
*  功能描述：USB设备IO中断处理
*  输入参数：void  
*  输出参数：无
*  返 回 值：void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
void USBD_IOHandler(void)
{
	if(IOFICR&0X03)
	{
		IOFICR &= ~0X03;	//翻转后关闭F0、F1中断,等待一定时间后再开启,避免频繁进入该中断
		SwBusTimer = 0;		//清除定时器
		UsbState.suspend = 0;
	}
}

/*****************************************************************************
*  函 数 名：USBD_RemoteWakeup
*  功能描述：USB设备唤醒控制
*  输入参数：void  
*  输出参数：无
*  返 回 值：void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
void USBD_RemoteWakeup(void)
{
	#ifdef USB_FS	//全速
	//先将IO寄存器设为输出K状态,然后关闭USB使能,此时由IO寄存器接管IO,即可唤醒主机,延时后再使能USB
	IOF0 = 0;
	IOF1 = 1;
	OEF0 = 1;
	OEF1 = 1; 
	UE = 0; 			//开始远程唤醒
	__delaywdt_ms(10); //协议规定时间应介于1ms-15ms之间
	UE = 1;
	OEF0 = 0;
	OEF1 = 0;
/*
	USRSM = 1;
	__delaywdt_ms(10);
	USRSM = 0;
*/
	#else	//低速
	IOF0 = 1;
	IOF1 = 0;
	OEF0 = 1;
	OEF1 = 1;
	UE = 0;
	__delaywdt_ms(10);
	UE = 1;
	OEF0 = 0;
	OEF1 = 0;
/*	
	UFS = 1;
	__delaywdt_ms(10);
	UFS = 0;
*/
	#endif
}

/*****************************************************************************
*  函 数 名：USBD_Reset
*  功能描述：USB设备复位
*  输入参数：void  
*  输出参数：无
*  返 回 值：static void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
static void USBD_Reset(void)
{
#ifdef USBD_DEBUG
    printf("USB Reset\n\n");
#endif
	if(USBEnumState>=USBE_Configured)
	{
		OSType = OS_Unknown;
	}
	USBEnumState = USBE_Default;
	UsbState.u8 = 0;

	UDADR = 0x00;
	UE0CON = 0x02;
	UE0IOPS = 0x00;
#if defined(EP1_IN_EN)||defined(EP1_OUT_EN)
	UE1CON = UE1CON_RSET;
	UE1IOPS = 0x00;
#endif
#if defined(EP2_IN_EN)||defined(EP2_OUT_EN)
	UE2CON = UE2CON_RSET;
	UE2IOPS = 0x00;
#endif
#if defined(EP3_IN_EN)||defined(EP3_OUT_EN)
	UE3CON = UE3CON_RSET;
	UE3IOPS = 0x00;
#endif
#if defined(EP4_IN_EN)||defined(EP4_OUT_EN)
	UE4CON = UE4CON_RSET;
	UE4IOPS = 0x00;
#endif
#if defined(EP5_IN_EN)||defined(EP5_OUT_EN)
	UE5CON = UE5CON_RSET;
	UE5IOPS = 0x00;
#endif

	USBD_CalibrationInit();

}

/*****************************************************************************
*  函 数 名：USBD_Suspend
*  功能描述：USB设备挂起
*  输入参数：void  
*  输出参数：无
*  返 回 值：static void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
static void USBD_Suspend(void)
{
#ifdef USBD_DEBUG
	printf( "USB Suspend\n\n" ); 
#endif
	if(USBEnumState==USBE_Configured)
	{
		
	}
}

/*****************************************************************************
*  函 数 名：USBD_Resume
*  功能描述：USB设备恢复
*  输入参数：void  
*  输出参数：无
*  返 回 值：static void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
static void USBD_Resume(void)
{
#ifdef USBD_DEBUG
	printf( "USB Resume\n\n" ); 
#endif
	
}

/*****************************************************************************
*  函 数 名：USBD_Ep0_Stall
*  功能描述：USB设备发送Stall包
*  输入参数：void  
*  输出参数：无
*  返 回 值：void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
void USBD_Ep0_Stall(void)
{
#ifdef USBD_DEBUG
	printf( "EP0 STALL\n\n" );
#endif
	UE0CON = 0x1F;

	//当mcu发出stall后,将会一直触发中断,直到手动清除stall或者host发送命令后硬件清除
	//以下代码做了超时等待,如果一定时间后host没有发送指令,则手动清除stall标志
	//时间的设置需要保证MCU能够有足够的时间发送stall
	unsigned char overtime = 120;

	while(UE0STL)
	{
		if(--overtime==0)
			break;
		else
			__delay_us(10);
	}
	UE0STL = 0;	
}

/*****************************************************************************
*  函 数 名：USBD_Ep0_StatusIn
*  功能描述：USB设备发送StatusIn包
*  输入参数：void  
*  输出参数：无
*  返 回 值：static void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
static void USBD_Ep0_StatusIn(void)
{
	unsigned char overtime = 120;
	//发送状态过程前先等待其它端点传输完成
	while(UE1INS || UE2INS || UE3INS || UE4INS || UE5INS)	
	{
		if(--overtime==0)
			break;
		else
			__delay_us(10);
		
	}
	UE0IOPS = 0x00;
	UE0CON = 0x06;
	while(UE0SINS) //等待status in结束
	{
	}
}

/*****************************************************************************
*  函 数 名：USBD_Ep0_StatusOut
*  功能描述：USB设备发送StatusOut包
*  输入参数：void  
*  输出参数：无
*  返 回 值：static void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
static void USBD_Ep0_StatusOut(void)
{
	unsigned char overtime = 120;
	//发送状态过程前先等待其它端点传输完成
	while(UE1INS || UE2INS || UE3INS || UE4INS || UE5INS)
	{
		if(--overtime==0)
			break;
		else
			__delay_us(10);
	}
	UE0IOPS = 0x00;
	UE0CON = 0x0A;
	while(UE0SOUTS) //等待status out结束
	{
		
	}
}

/*****************************************************************************
*  函 数 名：USBD_memcpy
*  功能描述：拷贝
*  输入参数：unsigned char* d:目标地址
*            const unsigned char* s:源地址
*            unsigned char size:长度
*  输出参数：无
*  返 回 值：static void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
static void USBD_memcpy(unsigned char* d,const unsigned char* s,unsigned char size)
{ 
	while(size--) 
	{
		*d++ = *s++;
	}
}

/*****************************************************************************
*  函 数 名：USBD_Ep0_Write
*  功能描述：将固定地址的数据通过端点0发送
*  输入参数：unsigned char len  
*  输出参数：无
*  返 回 值：void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
void USBD_Ep0_Write(unsigned char len)
{
	UE0IOPS = len;
	UE0CON = 0x01;   

	while( !UE0SDF )
	{

	}
	USBD_Ep0_StatusOut();
}

/*****************************************************************************
*  函 数 名：USBD_Ep0_WriteTable
*  功能描述：将常量数据通过端点0发送
*  输入参数：const unsigned char* dat  
*            unsigned int len          
*  输出参数：无
*  返 回 值：void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
void USBD_Ep0_WriteTable(const unsigned char* dat, unsigned int len)
{
	usb_u16_t wLength;
	wLength.u8[0] = wLengthl;
	wLength.u8[1] = wLengthh;

	unsigned char ZPacket = 1;

	if(wLength.u16<=len)
	{
		ZPacket = 0;
		len = wLength.u16;
	}

	unsigned char i;
	#ifdef USBD_DEBUG
	printf("Device ep0 >> ");
	#endif
	while(len)
	{
		i = len > MAX_EP0_SIZE ? MAX_EP0_SIZE : len;
		len -= i;

		USBD_memcpy(UsbEp0Buffer,dat,i);
		dat += i;
		#ifdef USBD_DEBUG
		printf_array(UsbEp0Buffer, i);
		#endif

		UE0IOPS = i;
		UE0CON = 0x01;    

		while(!UE0SDF)
		{

		}
		UE0SDF = 0;
	}

	if((i==MAX_EP0_SIZE)&&(ZPacket))	//发送0长度的包
	{
		USBD_Ep0_Write(0);
	}
	else
	{
		USBD_Ep0_StatusOut();
	}
	#ifdef USBD_DEBUG
	printf("\n");
	#endif
}


static void USBD_GetStatus(void)
{
#ifdef USBD_DEBUG
	printf( "Get Status-" );
#endif

	if(USBEnumState==USBE_Default)
	{
		#ifdef USBD_DEBUG
		printf("Stall\n\n");
		#endif
		USBD_Ep0_Stall();
		return;
	}

	unsigned char temp = bmRequestType;

	bmRequestType = 0;
	bRequest = 0;
	switch(temp & Recipient)
	{
		case Rec_Device: /* device status */
    		#ifdef USBD_DEBUG
		    printf( "Device\n\n" );
			#endif
			if(UsbState.remoteSleep)
				bmRequestType = 0x02;    
			USBD_Ep0_Write(2);
		break;
    	case Rec_Interface: /* interface status */
    		#ifdef USBD_DEBUG
		    printf( "Interface\n\n" );
			#endif
			if(USBEnumState == USBE_Address)
			{
				USBD_Ep0_Stall();
			}
			else
			{
				USBD_Ep0_Write(2);
			}
		break;
    	case Rec_EndPoint: /* ep status */
			switch(wIndexl)
			{
				case 0x00:
					#ifdef USBD_DEBUG
		    		printf( "EP0\n\n" );
					#endif
					if(!UE0STL)
						bmRequestType = 1;
					USBD_Ep0_Write(2);
				break;
				#ifdef EP1_OUT_EN
				case 0X01:
					#ifdef USBD_DEBUG
		    		printf( "EP1OUT\n\n" );
					#endif
					if(UE1OUTSTL)
						bmRequestType = 0x01; 
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP2_OUT_EN
				case 0X02:
					#ifdef USBD_DEBUG
		    		printf( "EP2OUT\n\n" );
					#endif
					if(UE2OUTSTL)
						bmRequestType = 0x01;  
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP3_OUT_EN
				case 0X03:
					#ifdef USBD_DEBUG
		    		printf( "EP3OUT\n\n" );
					#endif
					if(UE3OUTSTL)
						bmRequestType = 0x01;  
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP4_OUT_EN
				case 0X04:
					#ifdef USBD_DEBUG
		    		printf( "EP4OUT\n\n" );
					#endif
					if(UE4OUTSTL)
						bmRequestType = 0x01;  
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP5_OUT_EN
				case 0X05:
					#ifdef USBD_DEBUG
		    		printf( "EP5OUT\n\n" );
					#endif
					if(UE5OUTSTL)
						bmRequestType = 0x01; 
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP1_IN_EN
				case 0x81:    /* ep1 state */
					#ifdef USBD_DEBUG
		    		printf("EP1IN\n\n");
					#endif
					if( USBEnumState == USBE_Address)
					{
						USBD_Ep0_Stall();
						break;
					}
					if(UE1INSTL)
						bmRequestType = 0x01;   		
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP2_IN_EN
				case 0x82: /* ep2 state */
					#ifdef USBD_DEBUG
		    		printf("EP2IN\n\n");
					#endif
					if( USBEnumState == USBE_Address)
					{
						USBD_Ep0_Stall();
						break;
					}
					if(UE2INSTL)
						bmRequestType = 0x01;
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP3_IN_EN
				case 0x83: /* ep3 state */
					#ifdef USBD_DEBUG
		    		printf("EP3IN\n\n");
					#endif
					if( USBEnumState == USBE_Address)
					{
						USBD_Ep0_Stall();
						break;
					}
					if(UE3INSTL)
						bmRequestType = 0x01;
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP4_IN_EN
				case 0x84: /* ep4 state */
					#ifdef USBD_DEBUG
		    		printf("EP4IN\n\n");
					#endif
					if( USBEnumState == USBE_Address)
					{
						USBD_Ep0_Stall();
						break;
					}
					if(UE4INSTL)
						bmRequestType = 0x01; 
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP5_IN_EN
				case 0x85: /* ep5 state */
					#ifdef USBD_DEBUG
		    		printf("EP5IN\n\n");
					#endif
					if( USBEnumState == USBE_Address)
					{
						USBD_Ep0_Stall();
						break;
					}
					if(UE5INSTL)
						bmRequestType = 0x01;
					USBD_Ep0_Write(2);
				break;
				#endif
				default:
					#ifdef USBD_DEBUG
		    		printf("(Unkown)\n\n");
					#endif
					USBD_Ep0_Stall();
				break;
			}
		break;
		
    	default:
			USBD_Ep0_Stall();
		break;
    }
}

static void USBD_ClearFeature(void)
{
#ifdef USBD_DEBUG
	printf( "Clear Feature\n\n" );
#endif
	if(USBEnumState!=USBE_Configured)
	{
		USBD_Ep0_Stall();
		return;
	}

	switch(bmRequestType)
	{
		case Rec_Device:
			{
				UsbState.remoteSleep = 0;
				USBD_Ep0_StatusIn();
			}
		break;
		case Rec_EndPoint:
			if( wValuel || wValueh || wLengthh || wLengthl )
			{
				USBD_Ep0_Stall();
				break;
			}
			
	        switch (wIndexl)
	        {
	        	#ifdef EP1_OUT_EN
	        	case 0x01:
	    			UE1OUTSTL = 0;
	    			USBD_Ep0_StatusIn();
	    		break;
	    		#endif
	    		#ifdef EP2_OUT_EN
	        	case 0x02:
	    			UE2OUTSTL = 0;
	    			USBD_Ep0_StatusIn();
	    		break;
	    		#endif
	    		#ifdef EP3_OUT_EN
	    		case 0x03:
	    			UE3OUTSTL = 0;
	    			USBD_Ep0_StatusIn();
	    		break;
	    		#endif
	    		#ifdef EP4_OUT_EN
	    		case 0x04:
	    			UE4OUTSTL = 0;
	    			USBD_Ep0_StatusIn();
	    		break;
	    		#endif
	    		#ifdef EP5_OUT_EN
	    		case 0x05:
	    			UE5OUTSTL = 0;
	    			USBD_Ep0_StatusIn();
	    		break;
	    		#endif
	    		#ifdef EP1_IN_EN
	        	case 0x81:
	    			UE1INSTL = 0;
	    			USBD_Ep0_StatusIn();
	    		break;
	    		#endif
	    		#ifdef EP2_IN_EN
	        	case 0x82:
	    			UE2INSTL = 0;
	    			USBD_Ep0_StatusIn();
	    		break;
	    		#endif
	    		#ifdef EP3_IN_EN
	        	case 0x83:
	    			UE3INSTL = 0;
	    			USBD_Ep0_StatusIn();
	    		break;
	    		#endif
	    		#ifdef EP4_IN_EN
	    		case 0x84:
	    			UE4INSTL = 0;
	    			USBD_Ep0_StatusIn();
	    		break;
				#endif
				#ifdef EP5_IN_EN
	    		case 0x85:
	    			UE5INSTL = 0;
	    			USBD_Ep0_StatusIn();
	    		break;
	    		#endif
	        	default:
	    			USBD_Ep0_Stall();
	    		break;
	        }
		break;
		default:
			USBD_Ep0_Stall();
		break;
	}
}

static void USBD_SetFeature(void)
{
#ifdef	USBD_DEBUG
	printf("Set Feature\n\n" );
#endif
	if( USBEnumState != USBE_Configured)
	{
		USBD_Ep0_Stall();
		return;
	}
	if(bmRequestType==Rec_Device)
	{
		if( ( wValuel | wLengthl | wLengthh | wValueh ) != 0x01 )
		{
			USBD_Ep0_Stall();
			return;
		}
		UsbState.remoteSleep = 1;
		USBD_Ep0_StatusIn();
		return;
	}
	else if(bmRequestType != Rec_EndPoint)
	{
		USBD_Ep0_Stall();
		return;
	}

	if( wValuel || wLengthl || wLengthh || wValueh )
	{
		USBD_Ep0_Stall();
		return;
	}

	switch(wIndexl)
    {
    	
		#ifdef EP1_OUT_EN
    	case 0x01:
			UE1OUTSTL = 1;
			USBD_Ep0_StatusIn();    
		break;
    	#endif
    	#ifdef EP2_OUT_EN
    	case 0x02:
			UE2OUTSTL = 1;
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP3_OUT_EN
    	case 0x03:
			UE3OUTSTL = 1;
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP4_OUT_EN
    	case 0x04:
			UE4OUTSTL = 1;
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP5_OUT_EN
    	case 0x05:
			UE5OUTSTL = 1;
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP1_IN_EN
    	case 0x81:
			UE1INSTL = 1;
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP2_IN_EN
		case 0x82:
			UE2INSTL = 1;
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP3_IN_EN
		case 0x83:
			UE3INSTL = 1;
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP4_IN_EN
		case 0x84:
			UE4INSTL = 1;
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP5_IN_EN
		case 0x85:
			UE5INSTL = 1;
			USBD_Ep0_StatusIn();    
		break;
		#endif
    	default:
			USBD_Ep0_Stall();
		return;
    }
}

//设置地址
static void USBD_SetAddress(void)
{
#ifdef  USBD_DEBUG
	printf( "Set Address\n\n");
#endif
	if( wIndexl || wIndexh || wLengthl || wLengthh || (USBEnumState == USBE_Configured))
	{
		USBD_Ep0_Stall();
		return;
	}
	
	if(wValuel)
		USBEnumState = USBE_Address;
	else
		USBEnumState = USBE_Default;
		
	UDADR = wValuel;
	USBD_Ep0_StatusIn();
}

static void USBD_GetConfig(void)
{
#ifdef USBD_DEBUG
	printf( "Get Config\n\n" );
#endif	
	if( wLengthl != 0x01 || wLengthh || wIndexh || wIndexl || wValueh || wValuel || (USBEnumState == USBE_Default))
	{
		USBD_Ep0_Stall();
		return;
	}
    if( USBEnumState == USBE_Address)
    {
		bmRequestType = 0x00;
    }
    else if(USBEnumState == USBE_Configured)
    {
		bmRequestType = 0x01;
    }
    else
    {
		USBD_Ep0_Stall();
		return;
    }
	USBD_Ep0_Write(1);
}

static void USBD_SetConfig(void)
{
#ifdef USBD_DEBUG
	printf( "Set Config\n\n" );
#endif
	if( wLengthh || wIndexh || wValueh || (USBEnumState == USBE_Default))
	{
    	USBD_Ep0_Stall();
        return;
    }

	if(wValuel==0)
	{
		USBEnumState = USBE_Address;
		USBD_Ep0_StatusIn();
	}
	else if(wValuel==1)
	{
		USBEnumState = USBE_Configured;
		USBD_Ep0_StatusIn();
	}
	else
	{
		USBD_Ep0_Stall();	
	}
}

static void USBD_GetInterface(void)
{
#ifdef USBD_DEBUG
	printf( "Get Interface\n\n" );
#endif
	if( wLengthl != 0x01  || wValuel || wValueh || wLengthh )
	{
		USBD_Ep0_Stall();
		return;
	}
	
    if( USBEnumState != USBE_Configured)
    {
		USBD_Ep0_Stall();
		return;
	}

	bmRequestType = 0X00;
	USBD_Ep0_Write(1);
}

static void USBD_SetInterface(void)
{
#ifdef USBD_DEBUG
	printf( "Set Interface\n\n" );
#endif

	if( wLengthl || wLengthh || wValuel || wValueh || wIndexh )
	{
		USBD_Ep0_Stall();
		return;
	}
	
    if(USBEnumState != USBE_Configured)
    {
		USBD_Ep0_Stall();
		return;
	}
		
    USBD_Ep0_StatusIn();
}

static void USBD_ClassGetIdle(void)
{
#ifdef USBD_DEBUG
	printf( "Get Idle\n\n" );
#endif
	bmRequestType = IdleRate;
    USBD_Ep0_Write(1);
}

static void USBD_ClassGetProtocol(void)
{
#ifdef USBD_DEBUG
	printf( "Get Protocol\n\n" );
#endif
	if( wLengthl != 0x01 )
    {
		USBD_Ep0_Stall();
		return;
    }
	
    if(UsbState.boot)
    {
		bmRequestType = 0x00;
    }
    else
    {
		bmRequestType = 0x01;
    }
    
    USBD_Ep0_Write(1);
}

static void USBD_ClassSetReport(void)
{
#ifdef USBD_DEBUG
	printf( "Set Report:" );
#endif
	Ep0OutLen.u8[0] = wLengthl;
	Ep0OutLen.u8[1] = wLengthh;
	
    if(Ep0OutLen.u16!=0)
    {
    	UsbState.setReport = 1;
    	UE0CON = 0X02;
    }
	else
		USBD_Ep0_StatusIn();
}

static void USBD_ClassSetIdle(void)
{
#ifdef USBD_DEBUG
	printf( "Set Idle\n\n");
#endif
	IdleRate = wValueh;
    USBD_Ep0_StatusIn();
}

static void USBD_ClassSetProtocol(void)
{
#ifdef USBD_DEBUG
	printf( "Set Protocol\n\n");
#endif
	
    if(!wValuel)
		UsbState.boot = 1;
    else
    	UsbState.boot = 0;
    USBD_Ep0_StatusIn();    
}

//获取描述符
static void USBD_GetDescriptor(void)
{
#ifdef USBD_DEBUG
    printf( "Get Desc-" );
#endif

    switch(wValueh)
    {
    	case GET_DEV_DES:	//设备描述符
			#ifdef  USBD_DEBUG
			printf("Device Desc\n\n");
			#endif
			if(wLengthl==0x08)
				OSType = OS_Apple;
			else if(wLengthl==0x40)
				OSType = OS_AndroidHarmony;
			USBD_Ep0_WriteTable(DeviceDesc, DeviceDescSize);
		break;
    	case GET_CONFIG_DES:	//配置描述符
			#ifdef  USBD_DEBUG
			printf("Config Desc\n\n");
			#endif
			USBD_Ep0_WriteTable(ConfigurationDesc, ConfigurationDescSize);
		break;
    	case GET_STR_DES:
    		#ifdef  USBD_DEBUG
			printf("StrDesc-");
			#endif
			if(wValuel==0xee)
			{
				#ifdef  USBD_DEBUG
				printf("(Microsoft OS Desc)\n\n");
				#endif
				USBD_Ep0_WriteTable( MS_OSStringDesc,sizeof(MS_OSStringDesc));
				break;
			}
			USBD_GetDevStrDescriptor();
		break;
    	case GET_CLASS_HID_DES:
    		#ifdef  USBD_DEBUG
			printf("HID Desc\n\n");
			#endif
			USBD_ClassGetHidDes();
		break;
    	case GET_CLASS_HID_REPORT:
    		#ifdef  USBD_DEBUG
			printf("HID ReportDesc\n\n");
			#endif
			USBD_ClassGetHidReport();
			if(!(OSType&0X80))
			{
				#ifdef  USBD_DEBUG
				printf("OSType=%d\n\n",OSType);
				#endif
				OSType |= 0X80;
			}
			
        break;
    	default:
    	#ifdef USBD_DEBUG
    	printf("(Unknown)\n\n");
		#endif
			USBD_Ep0_Stall();
		break;
    }
}

/*****************************************************************************
*  函 数 名：USBD_EP0_Handler
*  功能描述：端点0数据处理
*  输入参数：void  
*  输出参数：无
*  返 回 值：static void
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
static void USBD_EP0_Handler(void)
{
	if(!UE0SDF)
		return;
	USBD_Calibration();
	
	UE0SDF = 0;
	if(UsbState.setReport)
	{
		UsbState.setReport = 0;
		#ifdef USBD_DEBUG
		printf_array(&bmRequestType,Ep0OutLen.u16);
		#endif
		USBD_SetReport(Ep0OutLen.u16);
		USBD_Ep0_StatusIn();
		return;
	}

#ifdef USBD_DEBUG
	printf("Host ep0 >> %02X %02X %02X %02X %02X %02X %02X %02X\n",bmRequestType,bRequest,wValuel,wValueh,wIndexl,wIndexh,wLengthl,wLengthh);
#endif
	if((bmRequestType & Direction)==Dir_SlaveToHost)
	{
		switch(bmRequestType&Re_Type)
		{
			case ReType_Standard:					//标准输入请求
				#ifdef USBD_DEBUG
				printf("Standard In Request:");
				#endif
				switch(bRequest)
				{
					case GET_STATUS:
						USBD_GetStatus();
			        break;

			        case GET_DESCRIPTOR:
						USBD_GetDescriptor();
			        break;

			        case GET_CONFIGURATION:
						USBD_GetConfig();
			        break;
			        
			        case GET_INTERFACE:
						USBD_GetInterface();
			        break;   
			              
			        default:
			        	#ifdef USBD_DEBUG
						printf("(Unknown)\n\n");
						#endif
						USBD_Ep0_Stall();
			        break;
				}
			break;

			case ReType_Class:						//类输入请求
				#ifdef USBD_DEBUG
		      	printf("Class In Request:");
		     	#endif
		     	switch(bRequest)
		     	{
		     		case GET_REPORT:
		     		{
		     			#ifdef USBD_DEBUG
						printf( "Get Report\n\n" );
						#endif
						USBD_GetReport();
					}
					 break;

					 case GET_IDLE:
						 USBD_ClassGetIdle();
					 break;

					 case GET_PROTOCOL:
						 USBD_ClassGetProtocol();
					 break;
					 default:
					 	#ifdef USBD_DEBUG
						printf("(Unknown)\n\n");
						#endif
						USBD_Ep0_Stall();
					 break;
		     	}
		     break;

		     case ReType_Vendor:			//厂商输入请求
		     	#ifdef USBD_DEBUG
		      	printf("Vendor In Request:");
		     	#endif
		     	if((bRequest==0x01)&&(wIndexl==0x04))
		     	{
					#ifdef USBD_DEBUG
					printf("Get Microsoft ExCompatID\n\n");
					#endif
		     		USBD_Ep0_WriteTable(MS_ExCompatIDDesc, sizeof(MS_ExCompatIDDesc));
		     		OSType = OS_Windows;
		     	}
		     	else
		     		USBD_Ep0_Stall();
		     break;
		     
		     default:
		     	#ifdef USBD_DEBUG
				printf("(Unknown)\n\n");
				#endif
		     	USBD_Ep0_Stall();
		     break;
		}
	}
	else
	{
		switch(bmRequestType&Re_Type)
		{
			case ReType_Standard:  //标准输出请求
   			{
   				#ifdef USBD_DEBUG
      			printf("Standard Out Request:");
     			#endif
     			switch(bRequest)
		        {
		        	case CLEAR_FEATURE:
						USBD_ClearFeature();
			        break;
		        	case SET_FEATURE:
						USBD_SetFeature();
			        break;
			        case SET_ADDRESS:
						USBD_SetAddress();
			        break;
			        case SET_DESCRIPTOR:
						#ifdef USBD_DEBUG
						printf( "Set Desc\n\n" );
						#endif
						USBD_Ep0_StatusIn();
			        break;
			        case SET_CONFIGURATION:
						USBD_SetConfig();
			        break;
			        case SET_INTERFACE:
						USBD_SetInterface();
			        break;

		        	default:
		        		#ifdef USBD_DEBUG
						printf("(Unknown)\n\n");
						#endif
						USBD_Ep0_Stall();
		            break;
		        }
   			}
   			break;
   			
   			case ReType_Class:  //类输出请求
   			{
			     #ifdef USBD_DEBUG
			      printf("Class Out Request:");
			     #endif
			     switch(bRequest)
			     {
					 case SET_REPORT:
						USBD_ClassSetReport();
		             break;

			         case SET_IDLE:
						USBD_ClassSetIdle();
		             break;

			         case SET_PROTOCOL:
						USBD_ClassSetProtocol();
		             break;
					 default:
					 	#ifdef USBD_DEBUG
						printf("(Unknown)\n\n");
						#endif
						USBD_Ep0_Stall();
		             break;
			     }
			}
			break;
			    
			case ReType_Vendor:  //厂商输出请求
			     #ifdef USBD_DEBUG
			      printf("Vendor Out Request\n");
			     #endif
			     USBD_Ep0_Stall();
			break;
			    
			default: //未定义的请求。这里只显示一个报错信息。
			     #ifdef USBD_DEBUG
			      printf("(Unknown)\n\n");
			     #endif
			     USBD_Ep0_Stall();
			break;
   		}
	}
}

//USB总线中断处理函数
static void USBD_Bus_Handler(void)
{
	if(UBRST)
	{
		UBRST = 0;
		
		USBD_Reset();
	}
	if(UBSPD)
	{
		UBSPD = 0;
		
		USBD_Suspend();
	}
	if(UBRSM)
	{
		UBRSM = 0;

		USBD_Resume();
	}
}

//EP1中断处理函数
#if defined(EP1_IN_EN)||defined(EP1_OUT_EN)
static void USBD_EP1_Handler(void)
{
#ifdef EP1_OUT_EN
	if(UE1OUTF)	
	{
		#ifdef USBD_DEBUG
		printf("EP1Out:");
		printf_array(EP1BUFF_ADDR,UE1IOPS);
		#endif
		UE1OUTF = 0;
		/*User Handle*/
		
		UE1OUTS = 1;
	}
#endif
#ifdef EP1_IN_EN
	if(UE1INF)
	{
		#ifdef USBD_DEBUG
		printf("EP1In:");
		printf_array(EP1BUFF_ADDR,MAX_EP1_SIZE);
		#endif
		UE1INF = 0;
		UE1IOPS = 0;
		/*User Handle*/

	}
#endif
}
#endif

//EP2中断处理函数
#if defined(EP2_IN_EN)||defined(EP2_OUT_EN)
static void USBD_EP2_Handler(void)
{
#ifdef EP2_OUT_EN
	if(UE2OUTF)
	{
		#ifdef USBD_DEBUG
		printf("EP2Out:");
		printf_array(EP2BUFF_ADDR,UE2IOPS);
		#endif
		UE2OUTF = 0;
		/*User Handle*/
		
		UE2OUTS = 1;
	}
#endif
#ifdef EP2_IN_EN
	if(UE2INF)
	{
		#ifdef USBD_DEBUG
		printf("EP2In:");
		printf_array(EP2BUFF_ADDR,MAX_EP2_SIZE);
		#endif
		UE2INF = 0;
		UE2IOPS = 0;
		/*User Handle*/
		
	}
#endif
}
#endif

//EP3中断处理函数
#if defined(EP3_IN_EN)||defined(EP3_OUT_EN)
static void USBD_EP3_Handler(void)
{
#ifdef EP3_OUT_EN
	if(UE3OUTF)
	{
		#ifdef USBD_DEBUG
		printf("EP3Out:");
		printf_array(EP3BUFF_ADDR,UE3IOPS);
		#endif
		UE3OUTF = 0;
		/*User Handle*/
		
		UE3OUTS = 1;
	}
#endif
#ifdef EP3_IN_EN
	if(UE3INF)
	{
		#ifdef USBD_DEBUG
		printf("EP3In:");
		printf_array(EP3BUFF_ADDR,MAX_EP3_SIZE);
		#endif
		UE3INF = 0;
		UE3IOPS = 0;
		/*User Handle*/
		
	}
#endif
}
#endif

//EP4中断处理函数
#if defined(EP4_IN_EN)||defined(EP4_OUT_EN)
static void USBD_EP4_Handler(void)
{
#ifdef EP4_OUT_EN
	if(UE4OUTF)
	{
		#ifdef USBD_DEBUG
		printf("EP4Out:");
		printf_array(EP4BUFF_ADDR,UE4IOPS);
		#endif
		UE4OUTF = 0;
		/*User Handle*/
		
		UE4OUTS = 1;
	}
#endif
#ifdef EP4_IN_EN
	if(UE4INF)
	{
		#ifdef USBD_DEBUG
		printf("EP4In:");
		printf_array(EP4BUFF_ADDR,MAX_EP4_SIZE);
		#endif
		UE4INF = 0;
		UE4IOPS = 0;
		/*User Handle*/
		
	}
#endif
}
#endif

//EP5中断处理函数
#if defined(EP5_IN_EN)||defined(EP5_OUT_EN)
static void USBD_EP5_Handler(void)
{
#ifdef EP5_OUT_EN
	if(UE5OUTF)
	{
		#ifdef USBD_DEBUG
		printf("EP5Out:");
		printf_array(EP5BUFF_ADDR,UE5IOPS);
		#endif
		UE5OUTF = 0;
		/*User Handle*/
		UE5OUTS = 1;
	}
#endif
#ifdef EP5_IN_EN	
	if(UE5INF)
	{
		#ifdef USBD_DEBUG
		printf("EP5In:");
		printf_array(EP5BUFF_ADDR,MAX_EP5_SIZE);
		#endif
		UE5INF = 0;
		UE5IOPS = 0;
		/*User Handle*/

	}
#endif
}
#endif

void USBD_Istr(void)
{
	USBD_Bus_Handler();
	USBD_EP0_Handler();
#if defined(EP1_IN_EN)||defined(EP1_OUT_EN)
	USBD_EP1_Handler();
#endif
#if defined(EP2_IN_EN)||defined(EP2_OUT_EN)
	USBD_EP2_Handler();
#endif
#if defined(EP3_IN_EN)||defined(EP3_OUT_EN)
	USBD_EP3_Handler();
#endif
#if defined(EP4_IN_EN)||defined(EP4_OUT_EN)
	USBD_EP4_Handler();
#endif
#if defined(EP5_IN_EN)||defined(EP5_OUT_EN)
	USBD_EP5_Handler();
#endif
}


/*****************************************************************************
*  函 数 名：USBD_EP_Write
*  功能描述：将数据通过端点X发送
*  输入参数：unsigned char EPNum:端点号,范围1~5
*            unsigned char* dat:数据地址
*            unsigned char len:长度
*  输出参数：无
*  返 回 值：unsigned char:0=发送失败(端点正忙或参数有误) 1=发送成功
*  
*  修改历史：
*         1. 日    期：2023年5月4日
*            作    者：Gjn
*            修改内容：新生成函数
*  
*****************************************************************************/
unsigned char USBD_EP_Write(unsigned char EPNum,unsigned char* dat, unsigned char len)
{
	if(USBEnumState != USBE_Configured)
		return 0;
	unsigned char* pEpBuff;
	unsigned char* pReg;

	switch(EPNum)
	{
#ifdef EP1_IN_EN
		case EP1:
			if(UE1INS)						//端点忙
				return 0;
			pEpBuff = EP1BUFF_ADDR;			//EPx缓存地址
			pReg = EP1IOPS_ADDR;			//EPxIOPS地址
		break;
#endif
#ifdef EP2_IN_EN
		case EP2:
			if(UE2INS)
				return 0;
			pEpBuff = EP2BUFF_ADDR;
			pReg = EP2IOPS_ADDR;
		break;
#endif
#ifdef EP3_IN_EN
		case EP3:
			if(UE3INS)
				return 0;
			pEpBuff = EP3BUFF_ADDR;
			pReg = EP3IOPS_ADDR;
		break;
#endif
#ifdef EP4_IN_EN
		case EP4:
			if(UE4INS)
				return 0;
			pEpBuff = EP4BUFF_ADDR;
			pReg = EP4IOPS_ADDR;
		break;
#endif
#ifdef EP5_IN_EN
		case EP5:
			if(UE5INS)
				return 0;
			pEpBuff = EP5BUFF_ADDR;
			pReg = EP5IOPS_ADDR;
		break;
#endif
		default:
		return 0;
	}

	*pReg++ = len;		//包大小

	while(len--)
	{
		*pEpBuff++ = *dat++;	//数据转移
	}
	*pReg = 1;		//开始传输
	return 1;
}

#ifdef USB_BuildMessage
	#ifdef USBD_DEBUG
	#info USB:开启串口调试功能
	#endif
	#if(USB_INT_HIGH==0)
	#info USB:关闭中断响应
	#elif(USB_INT_HIGH==1)
	#info USB:高优先级中断
	#elif(USB_INT_HIGH==2)
	#info USB:低优先级中断
	#endif
	#ifdef USB_FS
	#info USB:全速模式
	#else
	#info "USB:低速模式"
	#endif
	#ifdef EP1_IN_EN
	#info USB:端点1输入开启
	#endif
	#ifdef EP1_OUT_EN
	#info USB:端点1输出开启
	#endif
	#ifdef EP2_IN_EN
	#info USB:端点2输入开启
	#endif
	#ifdef EP2_OUT_EN
	#info USB:端点2输出开启
	#endif
	#ifdef EP3_IN_EN
	#info USB:端点3输入开启
	#endif
	#ifdef EP3_OUT_EN
	#info USB:端点3输出开启
	#endif
	#ifdef EP4_IN_EN
	#info USB:端点4输入开启
	#endif
	#ifdef EP4_OUT_EN
	#info USB:端点4输出开启
	#endif
	#ifdef EP5_IN_EN
	#info USB:端点5输入开启
	#endif
	#ifdef EP5_OUT_EN
	#info USB:端点5输出开启
	#endif
	#if(USBD_CURRENT==0)
	#info USB D+/D-:灌电流=65mA(5V) 拉电流=40mA(5V)
	#elif(USBD_CURRENT==1)
	#info USB D+/D-:灌电流=55mA(5V) 拉电流=36mA(5V)
	#elif(USBD_CURRENT==2)
	#info USB D+/D-:灌电流=50mA(5V) 拉电流=30mA(5V)
	#else
	#info USB D+/D-:灌电流=35mA(5V) 拉电流=26mA(5V)
	#endif
#endif
#if((MAX_EP0_SIZE+EP1SIZE+EP2SIZE+EP3SIZE+EP4SIZE+EP5SIZE)>256)
#error "所有端点总大小不得超过256字节"
#endif

