#define _AD_MGR_C_
#include"ADMgr.h"

#define _Fcpu 6000000

//ADC初始化,AD时钟不建议高于1MHz,高于1MHz后准确度下降
void ADMgr_Init(void)
{
	ADCON1 = ADCKS_Fcpu_8+VREMS_IN+VHS_4V;	//ADC时钟源Fcpu/8,开启内部参考电压4V
	ADCON0 = ADEN_1+ADFM_1;	//使能ADC,数据格式右对齐
}

/***********************************************************************************************************
*** 函数名称：unsigned int ADMgr_GetValue(unsigned char channel)
*** 功能描述：采集指定通道AD值
*** 参数：channel=通道编号
*** 返回值:AD值
*** 创建者:GJN
*** 创建时间：2020.08.30
*** 最后更新:
*** 说明:采集一次的时间为16个AD时钟
************************************************************************************************************/
unsigned int ADMgr_GetValue(unsigned char channel)
{
	ADCON0 &= 0xe0;
	ADCON0 |= channel;
	__delay_us(50);	//切换通道后需延时一定时间

/*
	//采集一次
	ADS = 1;
	while(ADS!=0){}
	return AD;
*/
	//去最大最小值平均滤波
	unsigned int sum = 0,max = 0,min=0xffff;
	
	for(unsigned char i=0;i<10;i++)
	{
		ADS=1;
		while(ADS!=0){}
		sum+=AD;
		if(AD>max)
			max = AD;
		else if(AD<min)
			min = AD;
	}
	sum = sum - max - min;
	return(sum>>3);
/*	
	//中位滤波
	unsigned int value[5];
	
	for(unsigned char i=0;i<sizeof(value)/2;i++)
	{
		ADS=1;
		while(ADS!=0){}
		value[i] = AD;
	}
	
	for(unsigned char i=0;i<(sizeof(value)/2-1);i++)
	{
		unsigned char flag = 0;
		for (unsigned char j=0;j<(sizeof(value)/2-1-i);j++)
		{
			if(value[j] > value[j+1])
			{
				unsigned int temp = value[j];
				value[j] = value[j+1]; 
				value[j+1] = temp;
				flag = 1;
			}
		}
		if(!flag)
			break;
	}
	return value[(sizeof(value)/2-1)/2];
	*/
}

//AD零点校准
void ADMgr_Calibration(void)
{
	ADCON2 &= 0XF0;
	
	for(unsigned char i=0;i<16;i++)
	{
		if(ADMgr_GetValue(CHS_GND)>0)
			break;
		else
			ADCON2++;
	}

	if(ADCON2&0X0F)
	{
		ADCON2--;
	}
}


