#ifndef	_AD_MGR_H_
#define	_AD_MGR_H_
#ifdef	_AD_MGR_C_
#define	_AD_MGR_E_
#else
#define	_AD_MGR_E_	extern
#endif

#include"zc.h"

#define ADRefVolt_v 5UL
#define ADRefVolt_mv 5000UL
#define ADResolution 4095UL

#define CalAD(mv) (ADResolution*mv/ADRefVolt_mv)

////******************************************************************************************
///////////////////////ADCON0控制寄存器各位定义///////////////////////////////////////////////
////******************************************************************************************
////Bit 7 ADEN: ADC使能控制位。
////1 = 使能ADC
////0 = 关闭ADC
////Bit 6 	ADS: ADC 启动位。
////1 = 开始（每次写入1将重新启动ADC）。
////0 = 停止，转换完成自动清零
////Bit 5  ADFM: 数据格式选择位。
////1 = ADRES = {ADH[3:0]， ADL[7:0]}// ADH[7:4] = 0。
////0 = ADRES = {ADH[7:0]， ADL[7:4]}// ADL[3:0] = 0。
////Bit[4:0] CHS[3:0]: ADC 输入通道选择位。
////[00000] ~ [11001] = AIN0 ~ AIN25
////[11100] =VDD/4
////[11101] =VREF
////[11110] =TEMP
////[11111] = GND
#define				ADEN_1					0b10000000				////使能ADC
#define				ADEN_0					0b00000000				////关闭ADC
#define				ADS_1					0b01000000				////开始（每次写入1将重新启动ADC）。
#define				ADS_0					0b00000000				////停止，转换完成自动清零
#define				ADFM_1					0b00100000				////数据格式ADRES = {ADH[3:0]，ADL[7:0]}//  ADH[7:4] = 0。
#define				ADFM_0					0b00000000				////数据格式ADRES = {ADH[7:0]，ADL[7:4]};  ADL[3:0] = 0。
#define				CHS_VDD_4				0b00011100				////ADC 输入通道选择位为（内部通道）VDD/4
#define				CHS_VREF				0b00011101				////ADC 输入通道选择位为（内部通道）VREF
#define				CHS_TEMP				0b00011110				////ADC 输入通道选择位为（内部通道）TEMP
#define				CHS_GND					0b00011111				////ADC 输入通道选择位为（内部通道）GND
#define				CHS_AIN25				0b00011001				////ADC 输入通道选择位为	AIN25
#define				CHS_AIN24				0b00011000				////ADC 输入通道选择位为	AIN24
#define				CHS_AIN23				0b00010111				////ADC 输入通道选择位为	AIN23
#define				CHS_AIN22				0b00010110				////ADC 输入通道选择位为	AIN22
#define				CHS_AIN21				0b00010101				////ADC 输入通道选择位为	AIN21
#define				CHS_AIN20				0b00010100				////ADC 输入通道选择位为	AIN20
#define				CHS_AIN19				0b00010011				////ADC 输入通道选择位为	AIN19
#define				CHS_AIN18				0b00010010				////ADC 输入通道选择位为	AIN18
#define				CHS_AIN17				0b00010001				////ADC 输入通道选择位为	AIN17
#define				CHS_AIN16				0b00010000				////ADC 输入通道选择位为	AIN16
#define				CHS_AIN15				0b00001111				////ADC 输入通道选择位为	AIN15
#define				CHS_AIN14				0b00001110				////ADC 输入通道选择位为	AIN14
#define				CHS_AIN13				0b00001101				////ADC 输入通道选择位为	AIN13
#define				CHS_AIN12				0b00001100				////ADC 输入通道选择位为	AIN12
#define				CHS_AIN11				0b00001011				////ADC 输入通道选择位为	AIN11
#define				CHS_AIN10				0b00001010				////ADC 输入通道选择位为	AIN10
#define				CHS_AIN9				0b00001001				////ADC 输入通道选择位为	AIN9
#define				CHS_AIN8				0b00001000				////ADC 输入通道选择位为	AIN8
#define				CHS_AIN7				0b00000111				////ADC 输入通道选择位为	AIN7
#define				CHS_AIN6				0b00000110				////ADC 输入通道选择位为	AIN6
#define				CHS_AIN5				0b00000101				////ADC 输入通道选择位为	AIN5
#define				CHS_AIN4				0b00000100				////ADC 输入通道选择位为	AIN4
#define				CHS_AIN3				0b00000011				////ADC 输入通道选择位为	AIN3
#define				CHS_AIN2				0b00000010				////ADC 输入通道选择位为	AIN2
#define				CHS_AIN1				0b00000001				////ADC 输入通道选择位为	AIN1
#define				CHS_AIN0				0b00000000				////ADC 输入通道选择位为	AIN0
////******************************************************************************************
///////////////////////ADCON1控制寄存器各位定义///////////////////////////////////////////////
////******************************************************************************************
////Bit[6:4] ADCKS[2:0]: ADC 时钟源选择位。
////ADCKS[2:0] ADC 时钟源选择
////000 Fcpu
////001 Fcpu/2
////010 Fcpu/4
////011 Fcpu/8
////100 Fcpu/16
////101 Fcpu/32
////110 Fcpu/64
////111 Fcpu/64
////Bit[3:2] VREMS[1:0]: ADC 参考电压模式选择位。
////VREMS[1:0] ADC 参考电压模式
////00 VDD
////01 内部参考电压
////10 外部参考电压
////11 内部参考与外部参考连接
////Bit[7,1:0] VHS[1:0]: ADC 内建基准电平选择位。
////VHS[2:0] 内建 VREF 基准电平
////000 关闭内部参考
////001 2.0V
////010 3.0V
////011 4.0V
#define				ADCKS_Fcpu				0b00000000				////ADC 时钟源选择Fcpu
#define				ADCKS_Fcpu_2			0b00010000				////ADC 时钟源选择Fcpu/2
#define				ADCKS_Fcpu_4			0b00100000				////ADC 时钟源选择Fcpu/4
#define				ADCKS_Fcpu_8			0b00110000				////ADC 时钟源选择Fcpu/8
#define				ADCKS_Fcpu_16			0b01000000				////ADC 时钟源选择Fcpu/16
#define				ADCKS_Fcpu_32			0b01010000				////ADC 时钟源选择Fcpu/32
#define				ADCKS_Fcpu_64			0b01100000				////ADC 时钟源选择Fcpu/64
#define				VREMS_VDD				0b00000000				////ADC参考电压为VDD
#define				VREMS_IN				0b00000100				////ADC参考电压为内部参考电压
#define				VREMS_OUT				0b00001000				////ADC参考电压为外部参考电压
#define				VREMS_INOUT				0b00001100				////ADC参考电压为内部参考与外部参考连接
#define				VHS_OFF					0b00000000				////内建VREF基准电平关闭
#define				VHS_2V					0b00000001				////内建VREF基准电平为2V
#define				VHS_3V					0b00000010				////内建VREF基准电平为3V
#define				VHS_4V					0b00000011				////内建VREF基准电平为4V
////******************************************************************************************
///////////////////////ADCON2控制寄存器各位定义///////////////////////////////////////////////
////******************************************************************************************
////Bit 6 TRGEN: 事件触发AD转换。
////1 = 允许
////0 = 不允许
////Bit 5 VREFO: 内部参考输出
////1 = 参考电压从IOE1输出
////0 = 关闭内部参考输出
////Bit 4 CMPHDEN: AD内部比较电路电流
////1 = 高速大电流
////0 = 低速小电流
////Bit[3:0] ADVOS[3:0]: ADC失调补偿。
////ADVOS[3:0] ADC失调补偿
#define				ADTRGEN_1				0b01000000				////允许事件触发AD转换
#define				ADTRGEN_0				0b00000000				////不允许事件触发AD转换
#define				ADVREFO_1				0b00100000				////参考电压从端口输出
#define				ADVREFO_0				0b00000000				////关闭参考电压从端口输出
#define				ADCMPHDEN_1				0b00010000				////高速大电流
#define				ADCMPHDEN_0				0b00000000				////低速小电流
                                            
                                            
                                            
_AD_MGR_E_ void ADMgr_Init(void);           
_AD_MGR_E_ unsigned int ADMgr_GetValue(unsigned char channel);
_AD_MGR_E_ void ADMgr_Calibration(void);    
#endif


