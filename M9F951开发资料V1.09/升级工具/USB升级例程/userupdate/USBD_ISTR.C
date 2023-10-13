#define _USBD_ISTR_C_
#include"USBD_HID_LIB.H"


//USB总线中断处理函数
void USBD_Bus_Handler(void)
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
void USBD_EP1_Handler(void)
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
		bEp1Busy = 0;
	}
#endif
}
#endif

//EP2中断处理函数
#if defined(EP2_IN_EN)||defined(EP2_OUT_EN)
void USBD_EP2_Handler(void)
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
		bEp2Busy = 0;
	}
#endif
}
#endif

//EP3中断处理函数
#if defined(EP3_IN_EN)||defined(EP3_OUT_EN)
void USBD_EP3_Handler(void)
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
		bEp3Busy = 0;
	}
#endif
}
#endif

//EP4中断处理函数
#if defined(EP4_IN_EN)||defined(EP4_OUT_EN)
void USBD_EP4_Handler(void)
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
		bEp4Busy = 0;
	}
#endif
}
#endif

//EP5中断处理函数
#if defined(EP5_IN_EN)||defined(EP5_OUT_EN)
void USBD_EP5_Handler(void)
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
	/*	UE5IOPS = MAX_EP5_SIZE;
		UE5CON = 1;*/

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
		bEp5Busy = 0;
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

