#define	_USBD_USER_C_
#include"USBD_HID_LIB.H"
#include"USBD_DESC.H"
#include<stdio.h>

//返回字符串描述符
void USBD_GetDevStrDescriptor(void)
{
	switch(wValuel)
	{
		case 0x00: //语言ID
			#ifdef  USBD_DEBUG
			printf("(Language ID)\n\n");
			#endif
//			USBD_Ep0_WriteTable( LanguageIDDesc, LANGUAGEID_DESC_SIZE);
			USBD_Ep0_WriteTable( LanguageIDDesc, LanguageIDDescSize);
		break;
		case 0X01: //厂商
			#ifdef	USBD_DEBUG
			printf("(Manu Des)\n\n");
			#endif
//			USBD_Ep0_WriteTable( ManuStringDesc, MANU_DESC_SIZE);
			USBD_Ep0_WriteTable( ManuStringDesc, ManuStringDescSize);
		break;
		case 0x02: //产品
			#ifdef  USBD_DEBUG
			printf("(Product Des)\n\n");
			#endif
//			USBD_Ep0_WriteTable( ProductStringDesc, PRODUCT_DESC_SIZE);
			USBD_Ep0_WriteTable( ProductStringDesc, ProductStringDescSize);
		break;
		case 0x03: //序列号
			#ifdef  USBD_DEBUG
			printf("(SN Desc)\n\n");
			#endif
//			USBD_Ep0_WriteTable( SerialNumberStringDesc,SN_DESC_SIZE);
			USBD_Ep0_WriteTable( SerialNumberStringDesc,SerialNumberStringDescSize);
		break;
		case 4:
			#ifdef  USBD_DEBUG
			printf("(Config Desc)\n\n");
			#endif
			USBD_Ep0_WriteTable( ConfigStringDesc,ConfigStringDescSize);
		break;
		case 5:
			#ifdef  USBD_DEBUG
			printf("(Keyboard Desc)\n\n");
			#endif
			USBD_Ep0_WriteTable( KeyboardStringDesc,KeyboardStringDescSize);
		break;
		case 6:
			#ifdef  USBD_DEBUG
			printf("(Mouse Desc)\n\n");
			#endif
			USBD_Ep0_WriteTable( MouseStringDesc,MouseStringDescSize);
		break;
		
		default:
			#ifdef  USBD_DEBUG
			printf("(Unknown)\n\n");
			#endif
			USBD_Ep0_Write(0);
		break;
	}
}

//返回HID接口描述符
void USBD_ClassGetHidDes(void)
{
//每多一个HID接口描述符，switch多加一个case进行传输
	switch(wIndexl)
	{
		case 0x00:		//键盘接口
			USBD_Ep0_WriteTable(&ConfigurationDesc[9+9], 9);
		break;
		case 0x01:		//鼠标接口
			USBD_Ep0_WriteTable(&ConfigurationDesc[9+9+9+7+9], 9);
		break;
		default:
			USBD_Ep0_Write(0);
		break;
    }
}

//返回HID报告描述符
void USBD_ClassGetHidReport(void)
{
//每多一个报告描述符，switch多加一个case进行传输
	switch( wIndexl )
	{
		case 0x00: 
//			USBD_Ep0_WriteTable( KeyboardReportDesc, KEY_REPROT_DESC_SIZE);
			USBD_Ep0_WriteTable( KeyboardReportDesc, KeyboardReportDescSize);
		break;
		case 0x01:
//			USBD_Ep0_WriteTable( MouseReportDesc, MOUSE_REPROT_DESC_SIZE);
			USBD_Ep0_WriteTable( MouseReportDesc, MouseReportDescSize);
		break;
		default:
			USBD_Ep0_Stall();
		break;
	}
}

/***********************************************************************************************************
*** 函数名称：void USBD_SetReport(unsigned char len)
*** 功能描述：接收SetReport数据
*** 参数：len:接收到的数据长度
*** 返回值:无返回
*** 创建者:GJN
*** 创建时间：2022.08.12
*** 最后更新:
*** 说明: 数据存放于UsbEp0Buffer中
************************************************************************************************************/
void USBD_SetReport(unsigned char len)
{
	if(len>MAX_EP0_SIZE)
		return;
	if(UsbEp0Buffer[0]==2)
	{
		if((UsbEp0Buffer[1]==0X55)&&(UsbEp0Buffer[2]==0XFF)&&(UsbEp0Buffer[3]==0))
		{
			UsbState.bootloader = 1;
		}
	}
}

//返回GetReport数据
void USBD_GetReport(void)
{

    USBD_Ep0_Write(0);
}

