#include"zc.h"
#include"TYPE_DEFINE.H"

#define LED_NUM 22
#define PWM1_NUM 22

#define PWM1CR_BaseAddr	(u8*)0XEBF
#define PWM1DL_BaseAddr (u8*)0XEA8
#define PWM1DH_BaseAddr (u8*)0XEA9

#define PWM100CR_Addr 0XEBF
#define PWM100DL_Addr 0XEA8
#define PWM100DH_Addr 0XEA9

u8 ledduty[LED_NUM];	//2字节编译是低字节在前,高字节在后

#define	Timer0_us	(u32)1000
#define	Timer0_Clk	(u32)24
#define	Timer0_Div	(u32)128
#define	T0Value	(Timer0_us*Timer0_Clk/Timer0_Div-1)

void main()
{
	ANSB = 0;
	IOB = 0;
	OEB = 0XFF;

	ANSC = 0;
	IOC = 0;
	OEC = 0XFF;
	
	ANSD = 0;
	IOD = 0;
	OED = 0XFF;
	
	for(u8 i=0;i<LED_NUM;i++)
	{
		ledduty[i] = i;
	}
	
	u8 *pCR = PWM1CR_BaseAddr;

	for(u8 i=0;i<PWM1_NUM;i++)
	{
		*pCR-- = Bin(11000000);//Bin(11100000);
	}
	TC1PR = 0XFF;
	T1CR = Bin(10001010);	//递增模式，时钟源Fosch，4分频
		
	TC0IE=1;
	TC0IF=0;
	TC0CH=0;
	TC0CL=T0Value;			//定时1ms
	T0CR=Bin(10001111);			//8位模式，时钟源Fosch，128分频
	GIEH = 1;


	while(1)
	{
		
	}
}

//如果只是需要PWM的IO输出无效电平让灯暂时熄灭,可以直接关闭TC1EN,此时PWM1所有已使能的模块将强制输出无效电平
//如果需要复用检测按键则需要将使能关闭,IO将由PUx、PDx、OEx、IOx寄存器决定,先在初始化设定好这些寄存器,扫描时仅需关闭PWM1的使能即可。
void Led_Cathode(void)
{
	#asm
	//关闭PWM1,更新双字节PWM1占空比,耗时38us
/*	ldfsr 0,PWM100CR_Addr //间接寻址fsr0指向PWM100CR,2周期
	ldfsr 1,PWM100DL_Addr //间接寻址fsr1指向PWM100DL,2周期
	ldfsr 2,_ledduty //间接寻址fsr2指向ledduty数组首元素的低字节,2周期
	movia low(PWM100CR_Addr-PWM1_NUM) //A存放PWM1CR最后操作的地址,fsr0等于这个值即可跳出循环
	pwm1dutyloop:
	bclr POSTDEC0,7	//失能PWM1,后fsr0指向自动+1,1周期
	movrr POSTINC2,POSTINC1 //ledduty数据低字节赋值到PWM1DL,后fsr1和fsr2指向+1,此时fsr1指向了PWM1DH,fsr2指向了高字节,2周期
	movrr POSTINC2,POSTDEC1 //ledduty数据高字节赋值到PWM1DH,后fsr1指向-1,fsr2指向+1,此时fsr1指向了PWM1DL,fsr2指向了下一个元素的低字节,2周期
	decr FSR1L,f  //fsr1指向-1,此时指向了下一个PWM1DH,1周期
	decr FSR1L,f  //fsr1指向-1,此时指向了下一个PWM1DL,1周期
	jera FSR0L	//1-3周期
	rgoto pwm1dutyloop	//2周期
*/	
	
	//关闭PWM1,更新单字节占空比,耗时27us
	ldfsr 0,PWM100CR_Addr //间接寻址fsr0指向PWM100CR,2周期
	ldfsr 1,PWM100DH_Addr //间接寻址fsr1指向PWM100DL,2周期
	ldfsr 2,_ledduty //间接寻址fsr2指向ledduty数组首元素,2周期
	movia low(PWM100CR_Addr-PWM1_NUM) //A存放PWM1CR最后操作的地址,fsr0等于这个值即可跳出循环
	pwm1dutyloop:
	bclr POSTDEC0,7	//失能PWM1,后fsr0指向自动+1,1周期
	clrr POSTDEC1 //清空PWM1DH,后fsr指向-1,此时指向PWM1DL
	movrr POSTINC2,POSTDEC1 //ledduty数据赋值到PWM1DL,后fsr1指向-1,fsr2指向+1,此时fsr1指向了下一个PWM1DH,fsr2指向了下一个元素,2周期
	jera FSR0L	//1-3周期
	rgoto pwm1dutyloop	//2周期

	#endasm
	//按键扫描
	
	
	//打开PWM1,耗时15us
	#asm
	ldfsr 0,PWM100CR_Addr //间接寻址fsr0指向PWM100CR,2周期
	movia low(PWM100CR_Addr-PWM1_NUM) //A存放PWM1CR最后操作的地址,fsr0等于这个值即可跳出循环
	setpwmloop:
	bset POSTDEC0,7
	jera FSR0L
	rgoto setpwmloop
	#endasm
	
	/*
	//无需按键扫描
	TC1EN = 0; //PWM1所有已使能的模块将强制输出无效电平
	//更新PWM1占空比
	#asm
	ldfsr 0,PWM100DL_Addr //间接寻址fsr0指向PWM100DL,2周期
	ldfsr 1,_ledduty //间接寻址fsr1指向ledduty数组首元素的低字节,2周期
	movia low(PWM100DL_Addr-PWM1_NUM-PWM1_NUM) //A存放PWM1CR最后操作的地址,fsr0等于这个值即可跳出循环
	pwm1dutyloop:
	movrr POSTINC1,POSTINC0 //ledduty数据低字节赋值到PWM1DL,后fsr0和fsr1指向+1,此时fsr0指向了PWM1DH,fsr1指向了高字节,2周期
	movrr POSTINC1,POSTDEC0 //ledduty数据高字节赋值到PWM1DH,后fsr0指向-1,fsr1指向+1,此时fsr0指向了PWM1DL,fsr1指向了下一个元素的低字节,2周期
	decr FSR0L,f  //fsr0指向-1,此时指向了下一个PWM1DH,1周期
	decr FSR0L,f  //fsr0指向-1,此时指向了下一个PWM1DL,1周期
	jera FSR0L	//1-3周期
	rgoto pwm1dutyloop	//2周期
	#endasm
	
	TC1EN = 1; //恢复PWM1输出
	*/
}

void Timer0_Istr(void)
{
	if(TC0IF)
	{
		TC0IF = 0;
		
		Led_Cathode();
	}
}


unsigned char FSR0H_back;
unsigned char FSR0L_back;
unsigned char FSR1H_back;
unsigned char FSR1L_back;
unsigned char FSR2H_back;
unsigned char FSR2L_back;

void breakpoint_protect()
{
	
}

//如果中断里有嵌入汇编，则需要根据汇编以及lst文件判断需要保护现场的数据
//都为C语言则无需判断，编译器会自行判断保护现场。
//如本例程扫描函数全部使用了汇编,且使用了间接寻址寄存器,出入中断不会保护间接寻址等寄存器
//所以添加了保护操作
void interrupt high_priority H_Intr(void)
{
	#asm
	call _breakpoint_protect ,f		//高优先级中断务必添加该汇编
	#endasm
	FSR0H_back = FSR0H;	//保护
	FSR0L_back = FSR0L;
	FSR1H_back = FSR1H;
	FSR1L_back = FSR1L;
	FSR2H_back = FSR2H;
	FSR2L_back = FSR2L;

	Timer0_Istr();
	
	FSR0H = FSR0H_back;	//恢复
	FSR0L = FSR0L_back;
	FSR1H = FSR1H_back;
	FSR1L = FSR1L_back;
	FSR2H = FSR2H_back;
	FSR2L = FSR2L_back;
}

