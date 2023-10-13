#define	_LED_MGR_C_
#include "DEFINE.H"

vu8 LEDCathodeLine@(0X5F);
static u8 LEDDuty[LED_NUM];		//占空比缓存

static u8 AllBreathDuty;

static u8 BreathMaxDuty;		//亮度(0-100)
static u16 BreathRiseTimeSet;	//计算公式：亮起时间/亮度
static u16 BreathOnTimeSet;		//常亮时间，单位ms
static u16 BreathFallTimeSet;	//熄灭时间，单位ms
static u16 BreathOffTimeSet;	//计算公式：熄灭时间/亮度

void LEDMgr_Init(void)
{
	LEDTimer = 0;
	LEDReverse = InValid;

	LEDCathodeLine = 0;
	AllBreathDuty = 0;

	BreathMaxDuty = Init_BreathMaxDuty;
	BreathRiseTimeSet = Init_BreathRiseTimer;
	BreathOnTimeSet = Init_BreathOnTimeSet;
	BreathFallTimeSet = Init_BreathFallTimer;
	BreathOffTimeSet = Init_BreathOffTimeSet;

	u8 *pCR = PWM1CR_BaseAddr;
	for(u8 i=0;i<PWM1_NUM;i++)
	{			
		*(pCR--) = 0XC0;	//PWM1xxCR配置为高电平有效,使能模块
	}

	for(u8 i=0;i<LED_NUM;i++)
	{
		LEDDuty[i] = 0;
	}
}

//LED扫描
void LEDMgr_Cathode(void)
{
//关闭LED
	IOA = 0XFF;

//PWM所有IO输出无效电平
	TC1EN = 0;	//关闭定时器1的使能，将同时把已使能的PWM1xx模块输出置为无效电平
	TC1CL = 0;	//计数器清零
/*
//关闭PWM1使能，此时IO状态由OEx、IOx、PUx寄存器决定，可进行按键扫描
	u8 *ptr = PWM1CR_BaseAddr;
	for(u8 i=0;i<PWM1_NUM;i++)
	{			
		*ptr-- &= ~0X80;
	}

	if(++LEDCathodeLine==LED_Row)	//切换扫描行
		LEDCathodeLine=0;
*/
	#asm
	incr _LEDCathodeLine,f,c
	movia LED_Row
	jera _LEDCathodeLine,c
	rgoto fsrledduty
	clrr _LEDCathodeLine,c
	fsrledduty:
	ldfsr 1,_LEDDuty
	movia LED_Col
	mular _LEDCathodeLine,c
	movr PRODL,w
	addar FSR1L,f
	movr PRODH,w
	adcar FSR1H,f
	
	ldfsr 0,PWM100DH_Addr
	movia low(PWM100DH_Addr-44)
	updatedutyloop:
	clrr POSTDEC0
	movrr POSTINC1,POSTDEC0
	clrr POSTDEC0
	movrr POSTINC1,POSTDEC0
	jera FSR0L
	rgoto updatedutyloop
	
	#endasm
	/*
	u8 *ptr1 = PWM1DL_BaseAddr;	//指向PWM1占空比寄存器
	u8 *ptr2 = LEDDuty+LEDCathodeLine*LED_Col;	//指向LED占空比缓存
	for(u8 i=0;i<LED_Col;i++)
	{
		*ptr1 = *ptr2++;
		ptr1 -= 2;
	}*/

	IOA = ~(0X04<<LEDCathodeLine);	

/*	
	//打开PWM1使能
	ptr = PWM1CR_BaseAddr;		
	for(u8 i=0;i<PWM1_NUM;i++)
	{
		*ptr-- |= 0X80;
	}	
*/
	TC1EN = 1;
}

void LEDMgr_Breath(void)
{
	if(LEDReverse)	//亮
	{
		if(AllBreathDuty==BreathMaxDuty)	//最大亮度
		{
			if(LEDTimer>=BreathOnTimeSet)
			{
				LEDTimer = 0;
				LEDReverse = InValid;
			}
		}
		else
		{
			if(LEDTimer>=BreathRiseTimeSet)
			{
				LEDTimer = 0;

				AllBreathDuty ++;
				if(AllBreathDuty>=BreathMaxDuty)
					AllBreathDuty = BreathMaxDuty;
			}
		}
	}
	else		//灭
	{
		if(AllBreathDuty==0)
		{
			if(LEDTimer>=BreathOffTimeSet)
			{
				LEDTimer = 0;
				LEDReverse = Valid;
			}
		}
		else
		{
			if(LEDTimer>=BreathFallTimeSet)
			{
				LEDTimer = 0;

				if(AllBreathDuty!=0)
					AllBreathDuty --;
			}
		}
	}
	for(u8 i=0;i<LED_NUM;i++)
	{
		LEDDuty[i] = AllBreathDuty;
	}
}


void LEDMgr_Deal(void)
{
	LEDMgr_Breath();		//呼吸模式
/*	LEDDuty[0] = 50;
	for(u8 i=1;i<LED_NUM;i++)
	{
		LEDDuty[i] = LEDDuty[0];
	}*/
}
	

