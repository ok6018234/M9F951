#ifndef _USBD_DEFINE_H
#define _USBD_DEFINE_H

//---------------------------------------------------------------------------
//USB Configuration File
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//User Config
//---------------------------------------------------------------------------

//DEBUG(UART0)
//#define	USBD_DEBUG
#define	USBD_UART0_SPD	4UL
#define	USBD_UART0_BAUD	115200UL
#define	USBD_UART0_BRGD	24000000UL/(USBD_UART0_SPD*USBD_UART0_BAUD)-1

#define USB_BuildMessage	//编译时输出USB配置信息

//USB Speed
#define	USB_FS		//FullSpeed
//#define USB_LS	//LowSpeed

//USB EndPoint IN/OUT Enabled
/* #define EP1_IN_EN
#define EP1_OUT_EN
#define EP2_IN_EN
#define EP2_OUT_EN
#define EP3_IN_EN
#define EP3_OUT_EN
#define EP4_IN_EN
#define EP4_OUT_EN*/
#define EP5_IN_EN 
#define EP5_OUT_EN

//USB EndPoint Size Config
#ifdef  USB_FS
#define MAX_EP0_SIZE 32
#define MAX_EP1_SIZE 32
#define MAX_EP2_SIZE 32
#define MAX_EP3_SIZE 16
#define MAX_EP4_SIZE 64
#define MAX_EP5_SIZE 64
#else
#define MAX_EP0_SIZE 8
#define MAX_EP1_SIZE 8
#define MAX_EP2_SIZE 8
#endif


//VID、PID
#define USBD_VID	0X5566
#define USBD_PID	0X0009


//---------------------------------------------------------------------------
//Register Config(User can ignore this part)
//---------------------------------------------------------------------------
#define	BIT_UE		0X01

#define BIT_USHC	0X08


#ifdef USB_FS
#define BIT_UFS		0X04
#else
#define BIT_UFS		0X00
#endif

#define BIT_INTBUS	0X01
#define	BIT_INTEP0	0X02
#if	defined(EP1_IN_EN)||defined(EP1_OUT_EN)
#define	BIT_INTEP1	0X04
#else
#define BIT_INTEP1	0X00
#endif
#if	defined(EP2_IN_EN)||defined(EP2_OUT_EN)
#define	BIT_INTEP2	0X08
#else
#define BIT_INTEP2	0X00
#endif
#if	defined(EP3_IN_EN)||defined(EP3_OUT_EN)
#define	BIT_INTEP3	0X10
#else
#define BIT_INTEP3	0X00
#endif
#if	defined(EP4_IN_EN)||defined(EP4_OUT_EN)
#define	BIT_INTEP4	0X20
#else
#define BIT_INTEP4	0X00
#endif
#if	defined(EP5_IN_EN)||defined(EP5_OUT_EN)
#define	BIT_INTEP5	0X40
#else
#define BIT_INTEP5	0X00
#endif

#ifdef EP1_OUT_EN
#define UE1CON_RSET	0X0E
#else
#define UE1CON_RSET 0X0C
#endif

#ifdef EP2_OUT_EN
#define UE2CON_RSET	0X0E
#else
#define UE2CON_RSET 0X0C
#endif

#ifdef EP3_OUT_EN
#define UE3CON_RSET	0X0E
#else
#define UE3CON_RSET 0X0C
#endif

#ifdef EP4_OUT_EN
#define UE4CON_RSET	0X0E
#else
#define UE4CON_RSET 0X0C
#endif

#ifdef EP5_OUT_EN
#define UE5CON_RSET	0X0E
#else
#define UE5CON_RSET 0X0C
#endif

#endif
