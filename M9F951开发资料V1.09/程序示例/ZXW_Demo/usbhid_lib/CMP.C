#define _CMP_C_
#include"CMP.H"
#include"zc.h"

//设置掉电检测
void CMP_Init(void)
{
	CMPC2 = 0X80;
	CMPC1 = VLVD_Value;	
	CMPC0 = 0XB4; //使能比较器,cn输入VLD,cp输入vdd/2,此时相当于VDD在到达设定值时将进入中断
	CMP0IP = 0; //比较器高优先级中断
	CMPIE = 1; //开比较器中断功能
	CMPIF = 0;
	GIEH = 1;
}

//高优先级中断调用
void CMP_Istr(void)
{
	if(CMPIE&&CMPIF)
	{
		CMPIF = 0;
		
		if(CMPOUT)  //VDD高于设定电压
		{
			
		}
		else	//VDD低于设定电压
		{
				//关闭负载等操作
			CLKM = 1; //进入低频运行,等待完全掉电
			while(!CMPOUT)
			{
				
			}
			CLKM = 0; //如果VDD高于设定电压恢复高频运行
		}
	}
}

