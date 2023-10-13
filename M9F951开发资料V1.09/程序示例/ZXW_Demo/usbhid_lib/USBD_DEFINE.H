#ifndef _USBD_DEFINE_H
#define _USBD_DEFINE_H

//UTF-8 Encoding
//---------------------------------------------------------------------------
//USB Configuration File
//USB配置文件
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//User Config
//用户自选配置
//---------------------------------------------------------------------------

//DEBUG(UART0)
//#define USBD_DEBUG
#define	USBD_UART0_BAUD	115200 //波特率

#define USB_BuildMessage	//编译时输出USB配置信息

#define _Fcpu 6000000		//内联库使用,填入当前cpu速度

//USB Interrupt priority
#define USB_INT_HIGH 2 		//0=关闭中断 1=高优先级中断 2=低优先级中断
//USB Speed
#define	USB_FS				//FullSpeed

//USB EndPoint IN/OUT Enabled
#define EP1_IN_EN
//#define EP1_OUT_EN
#define EP2_IN_EN
//#define EP2_OUT_EN
//#define EP3_IN_EN
//#define EP3_OUT_EN
//#define EP4_IN_EN
//#define EP4_OUT_EN
//#define EP5_IN_EN
//#define EP5_OUT_EN

//USB EndPoint Size Config
#ifdef  USB_FS //FullSpeed

#define MAX_EP0_SIZE 32
#define MAX_EP1_SIZE 32
#define MAX_EP2_SIZE 32
#define MAX_EP3_SIZE 16
#define MAX_EP4_SIZE 64
#define MAX_EP5_SIZE 64
#else //LowSpeed

#define MAX_EP0_SIZE 8
#define MAX_EP1_SIZE 8
#define MAX_EP2_SIZE 8
#endif

//VID、PID
#define USBD_VID	0X246D
#define USBD_PID	0XDCFB

//Device release number
#define USBD_DEVICE_RELEASE 0x0100

//Dp\Dn Power
#define USBD_CURRENT 3 //范围0~3,数字越大电流能力越小


//---------------------------------------------------------------------------
//Register Config(User can ignore this part)
//---------------------------------------------------------------------------
#define	BIT_UE		0X01

#define BIT_USHC	0X08 //0X00

#ifdef USB_FS
#define BIT_UFS		0X04
#else
#define BIT_UFS		0X00
#endif

#define BIT_INTBUS	0X01
#define	BIT_INTEP0	0X02
#if	defined(EP1_IN_EN)||defined(EP1_OUT_EN)
#define	BIT_INTEP1	0X04
#define EP1SIZE MAX_EP1_SIZE
#else
#define BIT_INTEP1	0X00
#define EP1SIZE 0
#endif
#if	defined(EP2_IN_EN)||defined(EP2_OUT_EN)
#define	BIT_INTEP2	0X08
#define EP2SIZE MAX_EP2_SIZE
#else
#define BIT_INTEP2	0X00
#define EP2SIZE 0
#endif
#if	defined(EP3_IN_EN)||defined(EP3_OUT_EN)
#define	BIT_INTEP3	0X10
#define EP3SIZE MAX_EP3_SIZE
#else
#define BIT_INTEP3	0X00
#define EP3SIZE 0
#endif
#if	defined(EP4_IN_EN)||defined(EP4_OUT_EN)
#define	BIT_INTEP4	0X20
#define EP4SIZE MAX_EP4_SIZE
#else
#define BIT_INTEP4	0X00
#define EP4SIZE 0
#endif
#if	defined(EP5_IN_EN)||defined(EP5_OUT_EN)
#define	BIT_INTEP5	0X40
#define EP5SIZE MAX_EP5_SIZE
#else
#define BIT_INTEP5	0X00
#define EP5SIZE 0
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

#if(USBD_CURRENT==0)
#define SetUsbCurrent IOFODS10=0;IOFODS00=0;IOFODS11=0;IOFODS01=0;
#elif(USBD_CURRENT==1)
#define SetUsbCurrent IOFODS10=0;IOFODS00=1;IOFODS11=0;IOFODS01=1;
#elif(USBD_CURRENT==2)
#define SetUsbCurrent IOFODS10=1;IOFODS00=0;IOFODS11=1;IOFODS01=0;
#else
#define SetUsbCurrent IOFODS10=1;IOFODS00=1;IOFODS11=1;IOFODS01=1;
#endif


#define	USBD_USART0_CLK	24000000UL	//串口主频
#define USBD_SPD4_USART0BAUD (USBD_USART0_CLK/4/USBD_UART0_BAUD-1)
#define USBD_SPD16_USART0BAUD (USBD_USART0_CLK/16/USBD_UART0_BAUD-1)
#define USBD_SPD64_USART0BAUD (USBD_USART0_CLK/64/USBD_UART0_BAUD-1)
#define USBD_SPD256_USART0BAUD (USBD_USART0_CLK/256/USBD_UART0_BAUD-1)

#if(USBD_SPD4_USART0BAUD<1024)
#define USBD_USART0_BRGD USBD_SPD4_USART0BAUD
#define USBD_T0SPD 0X00
#elif(USBD_SPD16_USART0BAUD<1024)
#define USBD_USART0_BRGD USBD_SPD16_USART0BAUD
#define USBD_T0SPD 0X02
#elif(USBD_SPD64_USART0BAUD<1024)
#define USBD_USART0_BRGD USBD_SPD64_USART0BAUD
#define USBD_T0SPD 0X04
#elif(USBD_SPD256_USART0BAUD<1024)
#define USBD_USART0_BRGD USBD_SPD256_USART0BAUD
#define USBD_T0SPD 0X06
#else
#error "不支持当前设置的波特率"
#define USBD_USART0_BRGD 0
#define USBD_T0SPD 0X00
#endif

#endif
