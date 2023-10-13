#define	_USBD_CORE_C_
#include"USBD_HID_LIB.H"
#include"string.h"
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
	printf("\n\r");
}

#endif

//USB初始化
void USBD_Init(void)
{
	#ifdef USBD_DEBUG
	TX0CR = 0XC0;
	BRGD0L = USBD_UART0_BRGD;
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
/*	GIEH = 1;	//开高优先级中断

	UINTP0 = B(01111111);	//配置USB各中断为低优先级
	GIEL = 1;	//开低优先级中断
*/
	UINTCR0 = BIT_INTEP5+BIT_INTEP4+BIT_INTEP3+BIT_INTEP2+BIT_INTEP1+BIT_INTEP0+BIT_INTBUS; //中断使能
	USBCON  = BIT_UFS+BIT_USHC+BIT_UE;
	USBEnumState = USBE_Default;
	USBState = 0;
	EpState = 0;
	// USBEpBusy = 0;
}

//USB复位
void USBD_Reset(void)
{
#ifdef USBD_DEBUG
    printf("USB Reset\n\r");
#endif
	USBEnumState = USBE_Default;
	USBState = 0;
	EpState = 0;
//	USBEpBusy = 0;
	
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
/*
//USB挂起
void USBD_Suspend(void)
{
#ifdef USBD_DEBUG
	printf( "USB Suspend\n\r" ); 
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
	printf( "USB Resume\n\r" ); 
#endif
	bUSBSuspend = 0;
}
*/
static void USBD_Ep0_Stall(void)
{
#ifdef USBD_DEBUG
	printf( "EP0 STALL\n\r" );
#endif
	UE0CON = 0x1F;
	bEp0Stall = 1;
}

//EP0设为输入状态
static void USBD_Ep0_StatusIn(void)
{
	UE0IOPS = 0x00;
	UE0CON = 0x06;
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
static void USBD_Ep0_Write(unsigned char len)
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
static void USBD_Ep0_WriteTable(const unsigned char* dat, unsigned int len)
{
	USBD_U16 wLength;
	wLength.u8[0] = wLengthl;
	wLength.u8[1] = wLengthh;
	unsigned char ZPacket;

	if(wLength.u16>len)
	{
		ZPacket = 1;
	}
	else
	{
		ZPacket = 0;
		len = wLength.u16;
	}

	unsigned char i;
	
	while(len)
	{
		i = len > MAX_EP0_SIZE ? MAX_EP0_SIZE : len;
		len -= i;

		memcpy(EP0BUFF_ADDR,dat,i);
		dat += i;
		
		UE0IOPS = i;
		UE0CON = 0x01;    
		
		while( !UE0SDF)
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
}

static void USBD_GetStatus(void)
{
#ifdef USBD_DEBUG
	printf( "Get Status-" );
#endif

	if(USBEnumState==USBE_Default)
	{
		#ifdef USBD_DEBUG
		printf("Stall\n\r");
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
		    printf( "Device\n\r" );
			#endif
			if(bUSBRemoteSleep)
				bmRequestType = 0x02;    
			USBD_Ep0_Write(2);
		break;
    	case Rec_Interface: /* interface status */
    		#ifdef USBD_DEBUG
		    printf( "Interface\n\r" );
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
    		if(wIndexl==0)
    		{
    			if(!bEp0Stall)
					bmRequestType = 1;
				USBD_Ep0_Write(2);
    		}
    		else
    		{
    			unsigned int bitpos;
    			if(wIndexl&0X80)
    			{
    				if( USBEnumState == USBE_Address)
					{
						USBD_Ep0_Stall();
						return;
					}

					wIndexl &= ~0X80;

					bitpos = ((unsigned int)1)<<(2*wIndexl-1);	
    			}
    			else
    			{
    				bitpos = ((unsigned int)1)<<(2*wIndexl);
    			}

    			if(EpState&bitpos)
					bmRequestType = 0x01; 
				USBD_Ep0_Write(2);
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
	printf( "Clear Feature\n\r" );
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
    			UE1CON &= 0xDF;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP2_OUT_EN
        	case 0x02:
        		bEp2OutStall = 0;
    			UE2CON &= 0xDF;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP3_OUT_EN
    		case 0x03:
    			bEp3OutStall = 0;
    			UE3CON &= 0xDF;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP4_OUT_EN
    		case 0x04:
    			bEp4OutStall = 0;
    			UE4CON &= 0xDF;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP5_OUT_EN
    		case 0x05:
    			bEp5OutStall = 0;
    			UE5CON &= 0xDF;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP1_IN_EN
        	case 0x81:
        		bEp1InStall = 0;
    			UE1CON &= 0xEF;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP2_IN_EN
        	case 0x82:
    			bEp2InStall = 0;
    			UE2CON &= 0xEF;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP3_IN_EN
        	case 0x83:
    			bEp3InStall = 0;
    			UE3CON &= 0xEF;
    			USBD_Ep0_StatusIn();
    		break;
    		#endif
    		#ifdef EP4_IN_EN
    		case 0x84:
    			bEp4InStall = 0;
    			UE4CON &= 0xEF;
    			USBD_Ep0_StatusIn();
    		break;
			#endif
			#ifdef EP5_IN_EN
    		case 0x85:
    			bEp5InStall = 0;
    			UE5CON &= 0xEF;
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
	printf("Set Feature\n\r" );
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
	printf( "Set Address\n\r");
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

//获取字符串描述符
static void USBD_GetDevStrDescriptor(void)
{
#ifdef  USBD_DEBUG
	printf("String Desc");
#endif

	switch(wValuel)
	{
		case 0x00:
			#ifdef  USBD_DEBUG
			printf("(Language ID)\n\r");
			#endif
//			USBD_Ep0_WriteTable( LanguageIDDesc, LANGUAGEID_DESC_SIZE);
			USBD_Ep0_WriteTable( LanguageIDDesc, LanguageIDDescSize);
		break;
		case 0X01:
			#ifdef	USBD_DEBUG
			printf("(Manu Des)\n\r");
			#endif
//			USBD_Ep0_WriteTable( ManuStringDesc, MANU_DESC_SIZE);
			USBD_Ep0_WriteTable( ManuStringDesc, ManuStringDescSize);
		break;
		case 0x02:
			#ifdef  USBD_DEBUG
			printf("(Product Des)\n\r");
			#endif
//			USBD_Ep0_WriteTable( ProductStringDesc, PRODUCT_DESC_SIZE);
			USBD_Ep0_WriteTable( ProductStringDesc, ProductStringDescSize);
		break;
		case 0x03:
			#ifdef  USBD_DEBUG
			printf("(SN Desc)\n\r");
			#endif
//			USBD_Ep0_WriteTable( SerialNumberStringDesc,SN_DESC_SIZE);
			USBD_Ep0_WriteTable( SerialNumberStringDesc,SerialNumberStringDescSize);
		break;
		default:
			#ifdef  USBD_DEBUG
			printf("(Unkown)\n\r");
			#endif
			USBD_Ep0_Write(0);
		break;
	}
}

//获取HID接口描述符
static void USBD_ClassGetHidDes(void)
{
#ifdef  USBD_DEBUG
	printf( "HID Desc\n\r" );
#endif
//每多一个HID接口描述符，switch多加一个case进行传输
	switch(wIndexl)
	{
		case 0x00:
			USBD_Ep0_WriteTable(&ConfigurationDesc[9+9], 9);
		break;
		default:
			USBD_Ep0_Write(0);
		break;
    }
}

//获取HID报告描述符
static void USBD_ClassGetHidReport(void)
{
#ifdef  USBD_DEBUG
	printf( "Report Desc\n\r" );
#endif
//每多一个报告描述符，switch多加一个case进行传输
	switch( wIndexl )
	{
		case 0x00: 
//			USBD_Ep0_WriteTable( CustomReportDesc, CUSTOM_REPROT_DESC_SIZE);
			USBD_Ep0_WriteTable( CustomReportDesc, CustomReportDescSize);
		break;
		default:
			USBD_Ep0_Stall();
		break;
	}
}

static void USBD_GetConfig(void)
{
#ifdef USBD_DEBUG
	printf( "Get Config\n\r" );
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
	printf( "Set Config\n\r" );
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
	printf( "Get Interface\n\r" );
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
	printf( "Set Interface\n\r" );
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

static void USBD_ClassGetReport(void)
{
#ifdef USBD_DEBUG
	printf( "Get Report\n\r" );
#endif
	
    USBD_Ep0_Write(0);
}

static void USBD_ClassGetIdle(void)
{
#ifdef USBD_DEBUG
	printf( "Get Idle\n\r" );
#endif
	bmRequestType = IdleRate;
    USBD_Ep0_Write(1);
}

static void USBD_ClassGetProtocol(void)
{
#ifdef USBD_DEBUG
	printf( "Get Protocol\n\r" );
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
	unsigned char len = wLengthl;
#endif
    if((wLengthl!=0)||(wLengthh!=0))
    {
    	UE0CON = 0X02;
    	while(!UE0SDF)
    	{
    	}
    	UE0SDF = 0;
#ifdef USBD_DEBUG
		printf_array(&bmRequestType,len);
#endif
		/*User Handle*/
    }
	USBD_Ep0_StatusIn();
#ifdef USBD_DEBUG
	printf("\n\r");
#endif
}

static void USBD_ClassSetIdle(void)
{
#ifdef USBD_DEBUG
	printf( "Set Idle\n\r");
#endif
	IdleRate = wValueh;
    USBD_Ep0_StatusIn();
}

static void USBD_ClassSetProtocol(void)
{
#ifdef USBD_DEBUG
	printf( "Set Protocol\n\r");
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
			printf("Device Desc\n\r");
			#endif
		//	USBD_Ep0_WriteTable(DeviceDesc, DEVICE_DESC_SIZE);
			USBD_Ep0_WriteTable(DeviceDesc, DeviceDescSize);
		break;
    	case GET_CONFIG_DES:	//配置描述符
			#ifdef  USBD_DEBUG
			printf("Config Desc\n\r");
			#endif
		//	USBD_Ep0_WriteTable( ConfigurationDesc, CONFIG_DESC_SIZE);
			USBD_Ep0_WriteTable( ConfigurationDesc, ConfigurationDescSize);
		break;
    	case GET_STR_DES:
    		#ifdef  USBD_DEBUG
			printf("Device StringDesc\n\r");
			#endif
			USBD_GetDevStrDescriptor();
		break;
    	case GET_CLASS_HID_DES:
    		#ifdef  USBD_DEBUG
			printf("HID Desc\n\r");
			#endif
			USBD_ClassGetHidDes();	
		break;
    	case GET_CLASS_HID_REPORT:
    		#ifdef  USBD_DEBUG
			printf("HID ReportDesc\n\r");
			#endif
			USBD_ClassGetHidReport();
        break;
    	default:
    	#ifdef USBD_DEBUG
    	printf("(Unkown)\n\r");
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
		unsigned char t = 250;	//不同运行速度下,可能需要修改t
		while(t--)
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
	printf("EP0 Data>> %02X %02X %02X %02X %02X %02X %02X %02X\n\r",bmRequestType,bRequest,wValuel,wValueh,wIndexl,wIndexh,wLengthl,wLengthh);
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
						printf("(Unkown)\n\r");
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
						printf("(Unkown)\n\r");
						#endif
						USBD_Ep0_Stall();
					 break;
		     	}
		     break;

		     case ReType_Manufacturer:			//厂商输入请求
		     	#ifdef USBD_DEBUG
		      	printf("Manu In Request\n\r");
		     	#endif
		     	USBD_Ep0_Stall();
		     break;
		     
		     default:
		     	#ifdef USBD_DEBUG
				printf("(Unkown)\n\r");
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
						printf( "Set Desc\n\r" );
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
						printf("(Unkown)\n\r");
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
						printf("(Unkown)\n\r");
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
			      printf("(Unkown)\n\r");
			     #endif
			     USBD_Ep0_Stall();
			break;
   		}
	}
}

#ifdef EP1_IN_EN
void USBD_Ep1In_Stall(void)
{
    UE1INSTL = 1;
    bEp1InStall = 1;
}
#endif

#ifdef EP1_OUT_EN
void USBD_Ep1Out_Stall(void)
{
    UE1OUTSTL = 1;
    bEp1OutStall = 1;
}
#endif

#ifdef EP2_IN_EN
void USBD_Ep2In_Stall(void)
{
    UE2INSTL = 1;
    bEp2InStall = 1;
}   
#endif

#ifdef EP2_OUT_EN
void USBD_Ep2Out_Stall(void)
{
    UE2OUTSTL = 1;
    bEp2OutStall = 1;
}
#endif

#ifdef EP3_IN_EN
void USBD_Ep3In_Stall(void)
{
    UE3INSTL = 1;
    bEp3InStall = 1;
}  
#endif

#ifdef EP3_OUT_EN
void USBD_Ep3Out_Stall(void)
{
    UE3OUTSTL = 1;
    bEp3OutStall = 1;
}
#endif

#ifdef EP4_IN_EN
void USBD_Ep4In_Stall(void)
{
    UE4INSTL = 1;
    bEp4InStall = 1;
}  
#endif

#ifdef EP4_OUT_EN
void USBD_Ep4Out_Stall(void)
{
    UE4OUTSTL = 1;
    bEp4OutStall = 1;
}
#endif

#ifdef EP5_IN_EN
void USBD_Ep5In_Stall(void)
{
    UE5INSTL = 1;
    bEp5InStall = 1;
}  
#endif

#ifdef EP5_OUT_EN
void USBD_Ep5Out_Stall(void)
{
    UE5OUTSTL = 1;
    bEp5OutStall = 1;
}
#endif

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
