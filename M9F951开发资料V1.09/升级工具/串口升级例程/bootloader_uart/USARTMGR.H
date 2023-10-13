#ifndef	_USART_MGR_H_
#define	_USART_MGR_H_
#ifdef	_USART_MGR_C_
#define	_USART_MGR_E_
#else
#define	_USART_MGR_E_	extern
#endif

#include<zc.h>
#include"TYPE_DEFINE.H"
#include"HWCONFIG.H"

#define	USART_MGR_MAX_LENGTH	(128*14+30)	//数据缓存大小

#define CalOverTime(x) (20000000UL/(x*Timer2_us)+2)

#define	USART_BAUD	4800		//波特率
#define	USART_MGR_OVER_TIME	CalOverTime(USART_BAUD) 	//超时时间设置,这里设为10ms
typedef  struct
{
	u16 RXDLen;		//接收长度
	u8 RXDOverTime;	//接收超时计数
	u8 RXDOverTimeSet;
//	u8 RXDBuf[USART_MGR_MAX_LENGTH]; //接收数据缓存
	
	u8 Buffer[USART_MGR_MAX_LENGTH];

}USART_MGR_STRUCT;

_USART_MGR_E_ USART_MGR_STRUCT UsartMgr;

_USART_MGR_E_ void UsartMgr_Init(u8 num);
_USART_MGR_E_ void UsartMgr_RXD_Reset(void);
_USART_MGR_E_ void UsartMgr_OverTime(void);
_USART_MGR_E_ void UsartMgr_BeginTx(u16 len);
_USART_MGR_E_ void UsartMgr_Int(void);

_USART_MGR_E_ unsigned char* pUsartBuf;
/* ;******************************************************************************************************
;/////////////////////TXxCR 发送控制寄存器各位定义//////////////////////////////////////////////////////////
;******************************************************************************************************
; Bit.7 TXxEN: 使能发送
; 1 = 使能USART发送功能
; 0 = 屏蔽USART发送功能
; Bit.6 TxMCLR: 发送寄存器空标志
; 1 = 数据已发送，移位寄存器空
; 0 = 正在发送数据，移位寄存器不空
; Bit.5 TxSYNC: 同步模式
; 1 = 选择同步模式
; 0 = 选择异步模式
; Bit.4 TxL9: 数据长度选择
; 1 = 9位数据
; 0 = 8位数据
; Bit.3 TxSLAVE: 同步发送/接收模式
; 1 = SLAVE
; 0 = Master
; Bit[2:1] TxSPD[1:0]: 发送接收速度选择
; TxSPD[1:0] 波特率分频比(n)
; 11 = 256分频比
; 10 = 64分频比
; 01 = 16分频比
; 00 = 4分频比
; Bit.0 TxD9: 发送数据第9位数据 */
#define				TXEN_0         		Bin(00000000)				//屏蔽USART发送功能
#define        		TXEN_1         		Bin(10000000)       		//使能USART发送功能
#define        	 	TMCLR_0        		Bin(00000000)       		//数据已发送，移位寄存器空
#define         	TMCLR_1        		Bin(01000000)      			//正在发送数据，移位寄存器不空
#define         	TSYNC_0     			Bin(00000000)       		//选择异步模式
#define         	TSYNC_1     			Bin(00100000)      			//选择同步模式
#define         	TL9_0      			Bin(00000000)      			//8位数据
#define         	TL9_1    				Bin(00010000)      			//9位数据
#define         	TSLAVE_0      			Bin(00000000)      			//Master
#define         	TSLAVE_1      			Bin(00001000)       		//SLAVE
#define         	TSPD_4     			Bin(00000000)      			//波特率分频比为4
#define         	TSPD_16      			Bin(00000010)       		//波特率分频比为16
#define         	TSPD_64     			Bin(00000100)      			//波特率分频比为64
#define         	TSPD_256    			Bin(00000110)      			//波特率分频比为256
#define         	TD9_0     				Bin(00000000)       		//不发送数据第9位数据
#define        	 	TD9_1    				Bin(00000001)       		//发送数据第9位数据
/* ;******************************************************************************************************
;///////////////////// RXCR接收控制寄存器各位定义////////////////////////////////////////////////////////
;******************************************************************************************************
; RXEN: 使能发送
; 1 = 使能USART接收功能
; 0 = 屏蔽USART接收功能
; Bit.6 CKPS：同步模式时钟模式选择
; 1 = 下降沿发送数据
; 0 = 上升沿发送数据
; Bit.4 RX9: 数据长度选择
; 1 = 9位数据
; 0 = 8位数据
; Bit.3 SREN: 同步接收开始
; 1 = 开始同步接收，单字节接收模式下接收完一个字节自动清零
; 0 = 停止异步接受
; Bit.2 RXOVF: 接受缓冲区溢出标志
; 1 = 接收缓冲区溢出，读缓冲区自动清零
; 0 = 接收缓冲区未发生溢出
; Bit.1 FRER: 接收数据格式错
; 1 = 当前接收数据格式错（未收到停止位）
; 0 = 当前接收数据未发生格式错
; Bit.0 RXD9: 接收数据第9位数据 */
#define				 RXEN_0				 Bin(00000000)				//;屏蔽USART接收功能
#define				 RXEN_1				 Bin(10000000)				//;使能USART接收功能
#define				 RCKPS_0				 Bin(00000000)				//;上升沿发送数据
#define				 RCKPS_1			     Bin(01000000)				//;下降沿发送数据
#define				 R9_0					 Bin(00000000)				//;8位数据
#define				 R_1					 Bin(00010000)				//;9位数据
#define				 RSREN_0				 Bin(00000000)				//;同步接收开始
#define				 RSREN_1				 Bin(00001000)				//;停止异步接收
#define				 ROVF_0				 Bin(00000000)				//;接收缓冲区未发生溢出
#define				 RCVF_1				 Bin(00000100)				//;接收缓冲区溢出，读缓存区自动清零
#define				 FRER_0				 Bin(00000000)				//;当前接收数据未发生格式错误
#define				 FRER_1				 Bin(00000010)				//;当前接收数据格式错误(收到停止位)
#define				 RD9_0					 Bin(00000000)				//;接收的第九位数据
#define				 RD9_1				 	 Bin(00000001)				//;接收的第九位数据

#define	USART_CLK	24000000	//串口主频
#define SPD4_USART1BAUD (USART_CLK/4/USART_BAUD-1)
#define SPD16_USART1BAUD (USART_CLK/16/USART_BAUD-1)
#define SPD64_USART1BAUD (USART_CLK/64/USART_BAUD-1)
#define SPD256_USART1BAUD (USART_CLK/256/USART_BAUD-1)

#if(SPD4_USART1BAUD<1024)
#define USART_BRGD SPD4_USART1BAUD
#define TSPD TSPD_4
#elif(SPD16_USART1BAUD<1024)
#define USART_BRGD SPD16_USART1BAUD
#define TSPD TSPD_16
#elif(SPD64_USART1BAUD<1024)
#define USART_BRGD SPD64_USART1BAUD
#define TSPD TSPD_64
#elif(SPD256_USART1BAUD<1024)
#define USART_BRGD SPD256_USART1BAUD
#define TSPD TSPD_256
#else
#error "不支持当前设置的波特率"
#define USART_BRGD 0
#define TSPD T0SPD_4
#endif




#endif

