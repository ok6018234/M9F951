#ifndef	_USART1_MGR_H_
#define	_USART1_MGR_H_
#ifdef	_USART1_MGR_C_
#define	_USART1_MGR_E_
#else
#define	_USART1_MGR_E_	extern
#endif

#include<zc.h>
#include"TYPE_DEFINE.H"

#define	USART1_BAUD	115200		//波特率
//#define	USART1_BRGD	(USART1_CLK/USART1_SPD/USART1_BAUD-1) //计算公式

#define	USART1_MGR_MAX_LENGTH	256	//数据缓存大小
#define	USART1_MGR_OVER_TIME	3  	//超时时间设置,这里设为6ms

typedef  struct
{
	u8 RXDState;	//接收状态 1=正在接收 0=未接收
	u8 RXDLen;		//接收长度
	u8 RXDEnd;  	//接收完毕 1=接收完毕 0=接收未完成
	u8 RXDOverTime;	//接收超时计数
	u8 RXDAnomalous;//接收异常 1=接收异常 0=接收正常
	u8 RXDBuf[USART1_MGR_MAX_LENGTH]; //接收数据缓存

	u8 TXDLenBack;	//发送长度计数
	u8 TXDLen;		//待发送数据长度
	u8 TXDBuf[USART1_MGR_MAX_LENGTH]; //发送数据缓存

}USART1_MGR_STRUCT;

_USART1_MGR_E_ USART1_MGR_STRUCT Usart1Mgr;

_USART1_MGR_E_ void Usart1Mgr_Init(void);
_USART1_MGR_E_ void Usart1Mgr_RXD_Reset(void);
_USART1_MGR_E_ void Usart1Mgr_OverTime(void);
_USART1_MGR_E_ u8 Usart1Mgr_BeginTx(u8 len);
_USART1_MGR_E_ void Usart1Mgr_Int(void);

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
#define				TX0EN_0         		Bin(00000000)				//屏蔽USART发送功能
#define        		TX0EN_1         		Bin(10000000)       		//使能USART发送功能
#define        	 	T0MCLR_0        		Bin(00000000)       		//数据已发送，移位寄存器空
#define         	T0MCLR_1        		Bin(01000000)      			//正在发送数据，移位寄存器不空
#define         	T0SYNC_0     			Bin(00000000)       		//选择异步模式
#define         	T0SYNC_1     			Bin(00100000)      			//选择同步模式
#define         	T0L9_0      			Bin(00000000)      			//8位数据
#define         	T0L9_1    				Bin(00010000)      			//9位数据
#define         	T0SLAVE_0      			Bin(00000000)      			//Master
#define         	T0SLAVE_1      			Bin(00001000)       		//SLAVE
#define         	T0SPD_4     			Bin(00000000)      			//波特率分频比为4
#define         	T0SPD_16      			Bin(00000010)       		//波特率分频比为16
#define         	T0SPD_64     			Bin(00000100)      			//波特率分频比为64
#define         	T0SPD_256    			Bin(00000110)      			//波特率分频比为256
#define         	T0D9_0     				Bin(00000000)       		//不发送数据第9位数据
#define        	 	T0D9_1    				Bin(00000001)       		//发送数据第9位数据
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
#define				 RX0EN_0				 Bin(00000000)				//;屏蔽USART接收功能
#define				 RX0EN_1				 Bin(10000000)				//;使能USART接收功能
#define				 R0CKPS_0				 Bin(00000000)				//;上升沿发送数据
#define				 R0CKPS_1			     Bin(01000000)				//;下降沿发送数据
#define				 R09_0					 Bin(00000000)				//;8位数据
#define				 R0_1					 Bin(00010000)				//;9位数据
#define				 R0SREN_0				 Bin(00000000)				//;同步接收开始
#define				 R0SREN_1				 Bin(00001000)				//;停止异步接收
#define				 R0OVF_0				 Bin(00000000)				//;接收缓冲区未发生溢出
#define				 R0CVF_1				 Bin(00000100)				//;接收缓冲区溢出，读缓存区自动清零
#define				 F0RER_0				 Bin(00000000)				//;当前接收数据未发生格式错误
#define				 F0RER_1				 Bin(00000010)				//;当前接收数据格式错误(收到停止位)
#define				 R0D9_0					 Bin(00000000)				//;接收的第九位数据
#define				 R0D9_1				 	 Bin(00000001)				//;接收的第九位数据

#define	USART1_CLK	24000000	//串口主频
#define SPD4_USART1BAUD (USART1_CLK/4/USART1_BAUD-1)
#define SPD16_USART1BAUD (USART1_CLK/16/USART1_BAUD-1)
#define SPD64_USART1BAUD (USART1_CLK/64/USART1_BAUD-1)
#define SPD256_USART1BAUD (USART1_CLK/256/USART1_BAUD-1)

#if(SPD4_USART1BAUD<1024)
#define USART1_BRGD SPD4_USART1BAUD
#define T0SPD T0SPD_4
#elif(SPD16_USART1BAUD<1024)
#define USART1_BRGD SPD16_USART1BAUD
#define T0SPD T0SPD_16
#elif(SPD64_USART1BAUD<1024)
#define USART1_BRGD SPD64_USART1BAUD
#define T0SPD T0SPD_64
#elif(SPD256_USART1BAUD<1024)
#define USART1_BRGD SPD256_USART1BAUD
#define T0SPD T0SPD_256
#else
#error "不支持当前设置的波特率"
#define USART1_BRGD 0
#define T0SPD T0SPD_4
#endif




#endif

