#define	_USBD_CORE_C_
#include"USBD_HID_LIB.H"


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

static unsigned char SwBusTimer;

//USB初始化
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
	GIEH = 1;	//开高优先级中断
/*
	UINTP = UB(01111111);	//配置USB各中断为低优先级
	GIEL = 1;	//开低优先级中断
*/
	
	UINTCR0 = BIT_INTEP5+BIT_INTEP4+BIT_INTEP3+BIT_INTEP2+BIT_INTEP1+BIT_INTEP0+BIT_INTBUS; //中断使能
	USBCON  = BIT_UFS+BIT_USHC+BIT_UE;
	USBEnumState = USBE_Default;
	
	USBState = 0;
	USBSwState = 0;
	EpState = 0;
	USBEpBusy = 0;
	USBD_SwBusInit();
	
}

void USBD_SwBusInit(void)
{
	IOFICR |= 0X03;
	IOFCHIE = 1;
	IOFCHIF = 0;
	SwBusTimer = 0;
}

void USBD_SwBusDeinit(void)
{
	IOFICR &= ~0X03;
	SwBusTimer = 0;
}

void USBD_SwBusHandler(void)
{
	if(++SwBusTimer>=20)	//判定间隔时间
	{
		SwBusTimer = 0;
		if(IOFICR&0X03)	//一定时间后F0、F1电平未翻转认定总线进入挂起状态
		{
			if(USBEnumState!=USBE_Configured)
				return;
			if(!bUSBSwSuspendBack)
			{
				#ifdef USB_FS
				if((IOF0==1)&&(IOF1==0)) //全速模式挂起时为J状态
				{
					bUSBSwSuspendBack = 1;
					bUSBSwSuspend = 1;
					#ifdef USBD_DEBUG
					printf( "USB SWSuspend\n\n" ); 
					#endif
				}
				#else
				if((IOF0==0)&&(IOF1==1)) //低速模式挂起时为K状态
				{
					bUSBSwSuspendBack = 1;
					bUSBSwSuspend = 1;
					#ifdef USBD_DEBUG
					printf( "USB SWSuspend\n\n" ); 
					#endif
				}
				#endif
			}
		}
		else
		{
			IOFICR |= 0X03;	//F0、F1中断关闭后一定时间后再开启中断检测电平
			IOFCHIF = 0;
		}
	}
}

void USBD_IOHandler(void)
{
	if((IOFICR&0X03)==0)
		return;
	IOFICR &= ~0X03;	//翻转后关闭F0、F1中断,等待一定时间后再开启,避免频繁进入该中断
	SwBusTimer = 0;	//清除定时器
	USBSwState = 0;
/*	if(bUSBSwSuspendBack)
	{
		bUSBSwSuspendBack = 0;
		bUSBSwSuspend = 0;
		#ifdef USBD_DEBUG
		printf( "USB SWResume\n\n" ); 
		#endif
	}*/
}


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

//USB复位
void USBD_Reset(void)
{
#ifdef USBD_DEBUG
    printf("USB Reset\n\n");
#endif
	USBEnumState = USBE_Default;
	USBState = 0;
	USBSwState = 0;
	EpState = 0;
	USBEpBusy = 0;
	
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

//USB挂起
void USBD_Suspend(void)
{
#ifdef USBD_DEBUG
	printf( "USB Suspend\n\n" ); 
#endif
	if(USBEnumState==USBE_Configured)
	{
		bUSBSuspend = 1;
	}
}

//USB恢复
void USBD_Resume(void)
{
#ifdef USBD_DEBUG
	printf( "USB Resume\n\n" ); 
#endif
	bUSBSuspend = 0;
}

void USBD_Ep0_Stall(void)
{
#ifdef USBD_DEBUG
	printf( "EP0 STALL\n\n" );
#endif
	UE0CON = 0x1F;
	bEp0Stall = 1;
}

#ifdef EP1_IN_EN
static void USBD_Ep1In_Stall(void)
{
    UE1INSTL = 1;
    bEp1InStall = 1;
}
#endif

#ifdef EP1_OUT_EN
static void USBD_Ep1Out_Stall(void)
{
    UE1OUTSTL = 1;
    bEp1OutStall = 1;
}
#endif

#ifdef EP2_IN_EN
static void USBD_Ep2In_Stall(void)
{
    UE2INSTL = 1;
    bEp2InStall = 1;
}   
#endif

#ifdef EP2_OUT_EN
static void USBD_Ep2Out_Stall(void)
{
    UE2OUTSTL = 1;
    bEp2OutStall = 1;
}
#endif

#ifdef EP3_IN_EN
static void USBD_Ep3In_Stall(void)
{
    UE3INSTL = 1;
    bEp3InStall = 1;
}  
#endif

#ifdef EP3_OUT_EN
static void USBD_Ep3Out_Stall(void)
{
    UE3OUTSTL = 1;
    bEp3OutStall = 1;
}
#endif

#ifdef EP4_IN_EN
static void USBD_Ep4In_Stall(void)
{
    UE4INSTL = 1;
    bEp4InStall = 1;
}  
#endif

#ifdef EP4_OUT_EN
static void USBD_Ep4Out_Stall(void)
{
    UE4OUTSTL = 1;
    bEp4OutStall = 1;
}
#endif

#ifdef EP5_IN_EN
static void USBD_Ep5In_Stall(void)
{
    UE5INSTL = 1;
    bEp5InStall = 1;
}  
#endif

#ifdef EP5_OUT_EN
static void USBD_Ep5Out_Stall(void)
{
    UE5OUTSTL = 1;
    bEp5OutStall = 1;
}
#endif


//EP0设为输入状态
static void USBD_Ep0_StatusIn(void)
{
	UE0IOPS = 0x00;
	UE0CON = 0x06;
}

static void USBD_memcpy(unsigned char* desc,const unsigned char* src,unsigned char size)
{ 
	while(size--) 
	{
		*desc++ = *src++;
	}
}

/***********************************************************************************************************
*** 函数名称：void USBD_Ep0_Write(unsigned char len)
*** 功能描述：从端点0发送数据
*** 参数：len:发送长度
*** 返回值：无
*** 创建者:GJN
*** 创建时间：2020.08.30
*** 最后更新:
*** 说明: 发送的数据包需放在RAM 0X800为起始的地址中
************************************************************************************************************/
void USBD_Ep0_Write(unsigned char len)
{
	UE0IOPS = len;
	UE0CON = 0x01;   

	while( !UE0SDF )
	{

	}
	UE0IOPS = 0;
	UE0CON = 0x0A;
}

/***********************************************************************************************************
*** 函数名称：void USBD_Ep0_WriteTable(unsigned char* dat, unsigned char len)
*** 功能描述：从端点0发送数据
*** 参数：*dat:数据地址
		  len:数据长度
*** 返回值：无
*** 创建者:GJN
*** 创建时间：2020.08.30
*** 最后更新:
*** 说明: 
************************************************************************************************************/
void USBD_Ep0_WriteTable(const unsigned char* dat, unsigned int len)
{
	unsigned int wLength = (wLengthh<<8)|(wLengthl);
	unsigned char ZPacket;

	if(wLength>len)
	{
		ZPacket = 1;
	}
	else
	{
		ZPacket = 0;
		len = wLength;
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
		UE0IOPS = 0;
		UE0CON = 0x0A;
	}
	printf("\n");
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
			if(bUSBRemoteSleep)
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
					if(!bEp0Stall)
						bmRequestType = 1;
					USBD_Ep0_Write(2);
				break;
				#ifdef EP1_OUT_EN
				case 0X01:
					#ifdef USBD_DEBUG
		    		printf( "EP1OUT\n\n" );
					#endif
					if(bEp1OutStall)
						bmRequestType = 0x01; 
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP2_OUT_EN
				case 0X02:
					#ifdef USBD_DEBUG
		    		printf( "EP2OUT\n\n" );
					#endif
					if(bEp2OutStall)
						bmRequestType = 0x01;  
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP3_OUT_EN
				case 0X03:
					#ifdef USBD_DEBUG
		    		printf( "EP3OUT\n\n" );
					#endif
					if(bEp3OutStall)
						bmRequestType = 0x01;  
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP4_OUT_EN
				case 0X04:
					#ifdef USBD_DEBUG
		    		printf( "EP4OUT\n\n" );
					#endif
					if(bEp4OutStall)
						bmRequestType = 0x01;  
					USBD_Ep0_Write(2);
				break;
				#endif
				#ifdef EP5_OUT_EN
				case 0X05:
					#ifdef USBD_DEBUG
		    		printf( "EP5OUT\n\n" );
					#endif
					if(bEp5OutStall)
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
					if(bEp1InStall)
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
					if(bEp2InStall)
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
					if(bEp3InStall)
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
					if(bEp4InStall)
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
					if(bEp5InStall)
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

	if(bmRequestType == Rec_EndPoint)
    {
		if( wValuel || wValueh || wLengthh || wLengthl )
		{
			USBD_Ep0_Stall();
			return;
		}
		
        switch (wIndexl)
        {
        	#ifdef EP1_OUT_EN
        	case 0x01:
        		bEp1OutStall = 0;
    			UE1OUTSTL = 0;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP2_OUT_EN
        	case 0x02:
        		bEp2OutStall = 0;
    			UE2OUTSTL = 0;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP3_OUT_EN
    		case 0x03:
    			bEp3OutStall = 0;
    			UE3OUTSTL = 0;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP4_OUT_EN
    		case 0x04:
    			bEp4OutStall = 0;
    			UE4OUTSTL = 0;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP5_OUT_EN
    		case 0x05:
    			bEp5OutStall = 0;
    			UE5OUTSTL = 0;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP1_IN_EN
        	case 0x81:
        		bEp1InStall = 0;
    			UE1INSTL = 0;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP2_IN_EN
        	case 0x82:
    			bEp2InStall = 0;
    			UE2INSTL = 0;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP3_IN_EN
        	case 0x83:
    			bEp3InStall = 0;
    			UE3INSTL = 0;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP4_IN_EN
    		case 0x84:
    			bEp4InStall = 0;
    			UE4INSTL = 0;
    			USBD_Ep0_StatusIn();
    		break;
			#endif
			#ifdef EP5_IN_EN
    		case 0x85:
    			bEp5InStall = 0;
    			UE5INSTL = 0;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
        	default:
    			USBD_Ep0_Stall();
    		break;
        }
    }
	else if(bmRequestType==Rec_Device)
	{
		bUSBRemoteSleep = 0;
		USBD_Ep0_StatusIn();
	}
	else
    {
		USBD_Ep0_Stall();
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
		bUSBRemoteSleep = 1;
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
			USBD_Ep1Out_Stall();
			USBD_Ep0_StatusIn();    
		break;
    	#endif
    	#ifdef EP2_OUT_EN
    	case 0x02:
			USBD_Ep2Out_Stall();
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP3_OUT_EN
    	case 0x03:
			USBD_Ep3Out_Stall();
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP4_OUT_EN
    	case 0x04:
			USBD_Ep4Out_Stall();
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP5_OUT_EN
    	case 0x05:
			USBD_Ep5Out_Stall();
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP1_IN_EN
    	case 0x81:
			USBD_Ep1In_Stall();
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP2_IN_EN
		case 0x82:
			USBD_Ep2In_Stall();
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP3_IN_EN
		case 0x83:
			USBD_Ep3In_Stall();
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP4_IN_EN
		case 0x84:
			USBD_Ep4In_Stall();
			USBD_Ep0_StatusIn();    
		break;
		#endif
		#ifdef EP5_IN_EN
		case 0x85:
			USBD_Ep5In_Stall();
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
	
    if(bUSBBoot)
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
	unsigned int len = (wLengthh<<8)|wLengthl;
    if(len!=0)
    {
    	UE0CON = 0X02;

    	while(!UE0SDF)
    	{

    	}
    	UE0SDF = 0;
#ifdef USBD_DEBUG
		printf_array(&bmRequestType,len);
#endif
		USBD_SetReport(len);
    }

	USBD_Ep0_StatusIn();
#ifdef USBD_DEBUG
	printf("\n\n");
#endif
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
	bUSBBoot = 0;
    if( wValuel == 0x00 )
    {
    	bUSBBoot = 1;
    }
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
		//	USBD_Ep0_WriteTable(DeviceDesc, DEVICE_DESC_SIZE);
			USBD_Ep0_WriteTable(DeviceDesc, DeviceDescSize);
		break;
    	case GET_CONFIG_DES:	//配置描述符
			#ifdef  USBD_DEBUG
			printf("Config Desc\n\n");
			#endif
		//	USBD_Ep0_WriteTable( ConfigurationDesc, CONFIG_DESC_SIZE);
			USBD_Ep0_WriteTable( ConfigurationDesc, ConfigurationDescSize);
		break;
    	case GET_STR_DES:
    		#ifdef  USBD_DEBUG
			printf("StrDesc-");
			#endif
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
        break;
    	default:
    	#ifdef USBD_DEBUG
    	printf("(Unkown)\n\n");
		#endif
			USBD_Ep0_Stall();
		break;
    }
}

//EP0中断处理函数
void USBD_EP0_Handler(void)
{
//当mcu发出stall后,将会一直触发中断,直到手动清除stall或者host发送命令后硬件清除
//以下代码做了超时等待,如果一定时间后host没有发送指令,则手动清除stall标志
//时间的设置需要保证MCU能够有足够的时间发送stall
	if(UE0STL)
	{
		unsigned int overtime = 0XFFFF;	//不同运行速度下,可能需要修改t
		while(overtime--)
		{
			if(!UE0STL)
			{
				break;
			}
		}
		UE0STL = 0;	
	}
	if(!UE0SDF)
		return;
	USBD_Calibration();
	UE0SDF = 0;
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
						printf("(Unkown)\n\n");
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
						 USBD_ClassGetReport();
					 break;

					 case GET_IDLE:
						 USBD_ClassGetIdle();
					 break;

					 case GET_PROTOCOL:
						 USBD_ClassGetProtocol();
					 break;
					 default:
					 	#ifdef USBD_DEBUG
						printf("(Unkown)\n\n");
						#endif
						USBD_Ep0_Stall();
					 break;
		     	}
		     break;

		     case ReType_Manufacturer:			//厂商输入请求
		     	#ifdef USBD_DEBUG
		      	printf("Manu In Request\n\n");
		     	#endif
		     	USBD_Ep0_Stall();
		     break;
		     
		     default:
		     	#ifdef USBD_DEBUG
				printf("(Unkown)\n\n");
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
						printf("(Unkown)\n\n");
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
						printf("(Unkown)\n\n");
						#endif
						USBD_Ep0_Stall();
		             break;
			     }
			}
			break;
			    
			case ReType_Manufacturer:  //厂商输出请求
			     #ifdef USBD_DEBUG
			      printf("Manu Out Request\n");
			     #endif
			     USBD_Ep0_Stall();
			break;
			    
			default: //未定义的请求。这里只显示一个报错信息。
			     #ifdef USBD_DEBUG
			      printf("(Unkown)\n\n");
			     #endif
			     USBD_Ep0_Stall();
			break;
   		}
	}
}

/***********************************************************************************************************
*** 函数名称：unsigned char USBD_EP_Write(unsigned char EPNum,unsigned char* dat, unsigned char len)
*** 功能描述：从非0端点发送数据
*** 参数：EPNum:端点号，范围1-5
		  *dat:数据地址
		  len:发送长度
*** 返回值:返回1:发送成功。
		   返回0:发送失败。可能情况：1、传入参数错误 2、端点正忙
*** 创建者:GJN
*** 创建时间：2020.08.30
*** 最后更新:
*** 说明: 发送完成后会触发相应端点中断
************************************************************************************************************/
unsigned char USBD_EP_Write(unsigned char EPNum,unsigned char* dat, unsigned char len)
{
	unsigned char* pEpBuff;
	unsigned char* pReg;

	switch(EPNum)
	{
#ifdef EP1_IN_EN
		case EP1:
			if(bEp1Busy)		//端点忙标志
				return 0;
			else
				bEp1Busy = 1;
			pEpBuff = EP1BUFF_ADDR;			//EPx缓存地址
			pReg = EP1IOPS_ADDR;			//EPxIOPS地址
		break;
#endif
#ifdef EP2_IN_EN
		case EP2:
			if(bEp2Busy)
				return 0;
			else
				bEp2Busy = 1;
			pEpBuff = EP2BUFF_ADDR;
			pReg = EP2IOPS_ADDR;
		break;
#endif
#ifdef EP3_IN_EN
		case EP3:
			if(bEp3Busy)
				return 0;
			else
				bEp3Busy = 1;
			pEpBuff = EP3BUFF_ADDR;
			pReg = EP3IOPS_ADDR;
		break;
#endif
#ifdef EP4_IN_EN
		case EP4:
			if(bEp4Busy)
				return 0;
			else
				bEp4Busy = 1;
			pEpBuff = EP4BUFF_ADDR;
			pReg = EP4IOPS_ADDR;
		break;
#endif
#ifdef EP5_IN_EN
		case EP5:
			if(bEp5Busy)
				return 0;
			else
				bEp5Busy = 1;
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
	#info "USB:开启串口调试功能"
	#endif
	#ifdef USB_FS
	#info "USB:全速模式"
	#else
	#info "USB:低速模式"
	#endif
	#ifdef EP1_IN_EN
	#info "USB:端点1输入开启"
	#endif
	#ifdef EP1_OUT_EN
	#info "USB:端点1输出开启"
	#endif
	#ifdef EP2_IN_EN
	#info "USB:端点2输入开启"
	#endif
	#ifdef EP2_OUT_EN
	#info "USB:端点2输出开启"
	#endif
	#ifdef EP3_IN_EN
	#info "USB:端点3输入开启"
	#endif
	#ifdef EP3_OUT_EN
	#info "USB:端点3输出开启"
	#endif
	#ifdef EP4_IN_EN
	#info "USB:端点4输入开启"
	#endif
	#ifdef EP4_OUT_EN
	#info "USB:端点4输出开启"
	#endif
	#ifdef EP5_IN_EN
	#info "USB:端点5输入开启"
	#endif
	#ifdef EP5_OUT_EN
	#info "USB:端点5输出开启"
	#endif
#endif
#if((MAX_EP0_SIZE+EP1SIZE+EP2SIZE+EP3SIZE+EP4SIZE+EP5SIZE)>256)
#error "所有端点总大小不得超过256字节"
#endif

