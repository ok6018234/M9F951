#define _TIMER_MGR_C_
#include "TimerMgr.h"



//定时器0初始化
void Timer0_Init(void)
{
	TC0CH = 0;			//8位模式TC0CH为计数器
	TC0CL = T0Value;	//8位模式TC0CL为周期寄存器,计数器与周期寄存器相等产生标志,后计数器自动清零
	T0CR = TC0EN_1+TC0MOD_8+TC0CKS_Fosch+TC0CKPS_1_128;	//8位模式，时钟源Fosch，128分频
	TC0IE = 1;	//开定时器0中断
	TC0IF = 0;

/*	
	TC0C = T0Value; //16位模式TC0C为计数器,溢出产生标志,需手动重装载数值
	T0CR = (u8)(TC0EN_1+TC0MOD_16+TC0CKS_Fosch+TC0CKPS_1_128);  //16位模式，时钟源Fosch，128分频
	TC0IE = 1;
	TC0IF = 0;
*/
}

static unsigned int RefCount;
void Timer0_Intr(void)
{
	if(TC0IE && TC0IF)
	{
		TC0IF = 0;
		
		RefCount++;
	}
}

//定时器1初始化
void Timer1_Init(void)
{
	TC1C = 0;			//清空计数器
	TC1PR = T1Value;	//周期寄存器赋值,递增模式计数器与周期寄存器相等产生标志,后计数器自动清零
					//递减模式计数器为0产生标志,后计数器自动装载周期寄存器数值
					//中心对齐模式计数器递增至与周期寄存器相等开始递减,递减至0产生标志,后计数器开始递增。
	T1CR = TC1EN_1+TC1MOD_Inc+TC1CKS_Fosch+TC1CKPS_1_128;			//递增模式，时钟源Fosch，128分频
	TC1IE = 1;	//开定时器1中断
	TC1IF = 0;
}

void Timer1_Intr(void)
{
	if(TC1IE && TC1IF)
	{
		TC1IF = 0;

	}
}


void Timer2_Init(void)
{
	TC2C = 0;			//清空计数器
	TC2PR = T2Value;	//周期寄存器赋值,递增模式计数器与周期寄存器相等产生标志,后计数器自动清零
					//递减模式计数器为0产生标志,后计数器自动装载周期寄存器数值
					//中心对齐模式计数器递增至与周期寄存器相等开始递减,递减至0产生标志,后计数器开始递增。
	T2CR = TC2EN_1+TC2MOD_Inc+TC2CKS_Fosch+TC2CKPS_1_128;			//递增模式，时钟源Fosch，128分频
	TC2IE = 1;
	TC2IF = 0;
}

void Timer2_Intr(void)
{
	if(TC2IE && TC2IF)
	{
		TC2IF = 0;

	}
}

/*--------------------------------------------------
***函数名称:unsigned char TimerMgr_RefTime(unsigned int *timepoint,unsigned int timelen)
***功能描述:定时
***参数:timepoint=定时变量 timelen=定时长度
***返回值:1=到达定时时间 0=未到达定时时间
***创建者:GJN
***创建时间:2022.10.9
***最后更新:
---------------------------------------------------*/
unsigned char TimerMgr_RefTime(unsigned int *timepoint,unsigned int timelen)
{
	if(RefCount >= (*timepoint))				
	{
		if((RefCount-(*timepoint))>=timelen)	
		{	
			*timepoint= RefCount;				
			return	1;							
		}
		else
			return	0;
	}
	else
	{												
		if((0xFFFF-(*timepoint)+RefCount)>=timelen)	
		{
			*timepoint= RefCount;				
			return	1;							
		}
		else
			return	0;		
	}
}


