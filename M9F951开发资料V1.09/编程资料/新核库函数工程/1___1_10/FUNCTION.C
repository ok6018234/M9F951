#include  <zc.h>
#include "MASSESCHIP_DEFINE.H"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>
#include <time.h>
//#define  NDEBUG         //屏蔽断言函数assert
#include <assert.h>  
#include <string.h>
#include <conio.h>
   
   // #define vnc           //服务器仿真宏定义
    #define m9f951
  // #define zc027c
   #define GetTimeFromPc  //从pc机获取当前时间,屏蔽时间固定为|2021-01-05 17:42:01|
   #define PI 3.141592
   #define R2D (180.0 / PI)
   #define D2R ( PI/180.0 )
   #define UartDebug_BAUDRATE    1000000
   
     unsigned char vnc_rxbuf @ 0x0;            //用于服务器仿真
     unsigned char vnc_flg @ 0x1 = 0x00;       //用于服务器仿真

#ifdef  GetTimeFromPc
   char   date_time_sys[20] = {__DATE__  __TIME__};
   static const char a_mon[12][4] = {{"Jan"},{"Feb"},{"Mar"},{"Apr"},{"May"},{"Jun"},
                                     {"Jul"},{"Aug"},{"Sep"},{"Oct"},{"Nov"},{"Dec"}};   							 
#endif
	   	 time_t time_array[1] = {1609868521L}; 	//|2021-01-05 17:42:01|	
//--------------------------------------------------------------
void Uart_Init(void)
{
#ifdef  m9f951   
  ANSE &=~0Xc0;
  OEE |=0X80;
  TX1CR|=0X80;
  RX1CR|=0X80;
  BRGD1H =(u8)((24000000/4/UartDebug_BAUDRATE-1)>>8);
  BRGD1L =(u8)(24000000/4/UartDebug_BAUDRATE-1);
#endif
#ifdef  zc027c   
  ANSB &=~0X03;
  OEB |=0X01;
  TX0CR|=0X80;
  BRGD0H =(u8)((24000000/4/UartDebug_BAUDRATE-1)>>8);
  BRGD0L =(u8)(24000000/4/UartDebug_BAUDRATE-1);
  MPTX | = 0x10;
  MPRX | = 0x11;
#endif	
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void putch(char c)
{
  
 vnc_rxbuf = c;
  vnc_flg += 1;
#ifndef  vnc

#ifdef  m9f951
  TX1REG = c;
  while((TX1CR&0x40)==0);
  TX1CR&=~0x40; 
#endif
#ifdef  zc027c   
   TX0REG = c;
  while((TX0CR&0x40)==0);
  TX0CR&=~0x40;
#endif	

#endif
}

//--------------------------------------------------------------
//
//--------------------------------------------------------------
#ifdef  GetTimeFromPc
int mon_change(char *f)
{
   unsigned char i,j;
   char *p;
   p = f; 
  for(i=0;i<12;i++)
  {
    for(j=0;j<3;j++)
	{
	  if(*p++ != a_mon[i][j])
       {
	    j = 5;
		p = f;
		}  
	}
	if(j != 6)
    {
      return  (int)i;
	}
  }
  return  0;
}
#endif
	
time_t time (time_t *t)
{
#ifdef  GetTimeFromPc
	char  buf[5];
	char *s1;

	struct tm sys_date_time;	
	s1 = &date_time_sys[0]; 
	memcpy(buf, s1, 4);
	sys_date_time.tm_mon = mon_change(buf);
	
    s1 += 4;	
	memcpy(buf, s1, 3);
    sys_date_time.tm_mday =  atoi(buf); 
    
	s1 += 3;
	memcpy(buf, s1, 4);
    buf[4]	= '\0';
    sys_date_time.tm_year = atoi(buf) - 1900; 

	s1 += 4;	
	memcpy(buf, s1, 2);
	buf[2]	= '\0'; 
    sys_date_time.tm_hour = atoi(buf);
	
	 s1 += 3;
    memcpy(buf, s1, 2);
	buf[2]	= '\0';
	sys_date_time.tm_min = atoi(buf);
	
	s1 += 3;
    memcpy(buf, s1, 3);
	buf[2]	= '\0';
	sys_date_time.tm_sec = atoi(buf);
   	
    time_array[0] = mktime(&sys_date_time);
   
#endif
   
    *t = time_array[0];
	return time_array[0];
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_abs(void)
{	
	 int a = -5;
    printf("\n1.test_abs\n");
	printf("abs(%d)=%d\n", a, abs(a));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_acos(void)
{
	float i,a;
    printf("\n2.test_acos\n");
	for(i = -1.0; i <= 1.0 ; i += 1) 
	{
	  a = acos(i)*R2D;
	  printf("acos(%f) degrees= %f\n", i, a);
	}
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_asctime(void)
{	
	 time_t clock;
	 struct tm * tp;
	 time(&clock);
	 tp = localtime(&clock);
	 printf("\n3.test_asctime\n");
	 printf("%s\n", asctime(tp));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_asin(void)
{
	float i,a;
    printf("\n4.test_asin\n");
	for(i = -1.0; i <= 1.0 ; i += 1) 
	{
	  a = asin(i)*R2D;
	  printf("asin(%f) degrees= %f\n", i, a);
	}
}
//--------------------------------------------------------------
//_fassert()的默认程序：
//void _fassert(int line, const char * file, const char *exp) 
//{
//	printf("Assertion failed: %s line %d: \"%s\"\n", file, line, exp);
//	abort();
//}
//--------------------------------------------------------------
void _fassert(int line, const char * file, const char *exp) //可选
{
	printf("\nAssertion failed: %s line %d: \"%s\"\n", file, line, exp);
	//abort();
} 
void test_assert(void)
{
   char  i;
    printf("\n5.test_assert\n");
	for(i=0;i<4;i++)
	{
	    printf("%d\t",i);	
		assert(i!=2);
	}
    printf("\n");
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_atan(void)
{
	float i,a;
    printf("\n6.test_atan\n");
	for(i = -1.0; i <= 1.0 ; i += 1) 
	{
	  a = atan(i)*R2D;
	  printf("atan(%f) degrees= %f\n", i, a);
	}
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_atan2(void)
{
	float x,y,a;
    printf("\n7.test_atan2\n");
	x = 1.0;
	for(y = -1.0; y <= 1.0 ; y += 1) 
	{
	  a = atan2(y,x)*R2D;
	  printf("atan(%f,%f) degrees= %f\n", y,x, a);
	}
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_atof(void)
{
	char buf[]={"123"};
	double i;
    printf("\n8.test_atof\n");	
	i = atof(buf);
	printf("Read %s: converted to %f\n", buf, i);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_atoi(void)
{
	char buf[]={"123"};
	int i;
    printf("\n9.test_atoi\n");	
	i = atoi(buf);
	printf("Read %s: converted to %d\n", buf, i);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_atol(void)
{
	char buf[]={"123"};
	long  i;
    printf("\n10.test_atol\n");	
	i = atol(buf);
	printf("Read %s: converted to %ld\n", buf, i);
}

