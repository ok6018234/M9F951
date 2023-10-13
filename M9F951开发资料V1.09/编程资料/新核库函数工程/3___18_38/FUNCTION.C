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
#include <ctype.h> 

   //#define vnc                     //服务器仿真宏定义
   #define m9f951
  // #define zc027c
   #define GetTimeFromPc  //从pc机获取当前时间,屏蔽时间固定为|2021-01-05 17:42:01|
   #define PI 3.141592
   #define R2D (180.0 / PI)
   #define D2R ( PI/180.0 )
   #define UartDebug_BAUDRATE    1000000

   unsigned char vnc_rxbuf @ 0x0;            //用于服务器仿真
   unsigned char vnc_flg @ 0x1 = 0x00;       //用于服务器仿真
   #ifdef  vnc   
   char RXREG_simulation[] = "exit\n\n";     //用于服务器仿真
   char RXREG_number  @ 0x3 = 0x00;           //用于服务器仿真
   #endif
   
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

char getche(void)
{
   char i ;
#ifdef  vnc   
   i = RXREG_simulation[RXREG_number++];
   if(!RXREG_simulation[RXREG_number])
    RXREG_number = 0x00;
#else

#ifdef  m9f951   
  while((INTF2&0x80)==0);
	INTF2 &= ~0X80;	
	 i = RX1REG;
#endif
#ifdef  zc027c  
    while((INTF0&0x80)==0);
	INTF0 &= ~0X80;
    i = RX0REG;
#endif	 
 
#endif
    // printf("%c",i);
  return i;

}

char getch(void)
{
   char i ;
#ifdef  vnc   
   i = RXREG_simulation[RXREG_number++];
   if(!RXREG_simulation[RXREG_number])
    RXREG_number = 0x00;
#else

#ifdef  m9f951   
  while((INTF2&0x80)==0);
	INTF2 &= ~0X80;	
	 i = RX1REG;
#endif
#ifdef  zc027c  
    while((INTF0&0x80)==0);
	INTF0 &= ~0X80;
    i = RX0REG;
#endif	 
 
#endif
    // printf("%c",i);
  return i;
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
void test_ctime(void)
{	
	time_t clock;
	time(&clock);
	printf("\n18.test_ctime\n");
	printf("%s\n", ctime(&clock));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_di_ei(void)
{	
	unsigned char i;
	
	printf("\n19.test_di_ei\n");
	eih();
	i = OPTION;
	printf("OPTION = %u\n", i);
	dih();
	i = OPTION;
	printf("OPTION = %u\n", i);
	eil();
	i = OPTION;
	printf("OPTION = %u\n", i);
	dil();
	i = OPTION;
	printf("OPTION = %u\n", i);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_div(void)
{	
	printf("\n20.test_div\n");
	div_t x;
	x = div(12345, 66);
	printf("12345/66 = %d.....%d\n", x.quot, x.rem);
}
//--------------------------------------------------------------
//  有误差？
//--------------------------------------------------------------
void test_eval_poly(void)
{	
	double x, y;
    double d[3] = {1, 1, 1};
	double e[4] = {1, 1, 1, 1};
	printf("\n21.test_eval_poly\n");
	x = 1;
    y = eval_poly(x, d, 2);
	printf("%fx^2+%fx+%f = %f\n", d[2],d[1],d[0],y);
	
	x = 1;
    y = eval_poly(x, e, 3);
	printf("%fx^3+%fx^2+%fx+%f = %f\n",e[3],e[2],e[1],e[0],y);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_exp(void)
{	
	printf("\n22.test_exp\n");
	double f;
	for(f = 0.0 ; f <= 3 ; f += 1.0)
	printf("e^%f = %f\n", f, exp(f));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_fabs(void)
{	
	printf("\n23.test_fabs\n");
	printf("fabs(1.5) = %f ,fabs(-1.5) = %f\n", fabs(1.5), fabs(-1.5));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_floor(void)
{	
	printf("\n24.test_floor\n");
	printf("floor(2.5) = %f ,floor(-2.5) = %f\n", floor(2.5), floor(-2.5));
}
//--------------------------------------------------------------
//有误差？
//--------------------------------------------------------------
void test_fmod(void)
{	
    double rem, x;
	x = 12.34;
	rem = fmod(x, 2.1);
	printf("\n25.test_fmod\n");
	printf("fmod(%f, 2.1) = %f;\n", x, rem);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_frexp(void)
{	
   double f;
   int i;
   printf("\n26.test_frexp\n");
   f = frexp(23456.34, &i);
   printf("23456.34 = %f * 2^%d\n", f, i);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_ftoa(void)
{	
   char * buf;
   float input = 12.34;
   int status;
   printf("\n27.test_ftoa\n");
   buf = ftoa(input, &status);
  // printf("the %f buffer holds %s\n",input, buf);
   printf("buffer holds %s\n", buf);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_getch(void)
{	
   char result;
   printf("\n28.test_getch\n");
   printf("please send one ascii\n");
   result = getch();
   printf("%c\n", result); 
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_getchar(void)
{	
   int result;
   printf("\n29.test_getchar\n");
   printf("please send ascii\n");

   while((result = getchar()) != '\n')
   printf("%c", result); 
   getche();//Windows系统里面，串口调试助手按“Enter”结尾会发同时发“\n\r”，要多清一次标志位
   printf("\n");   
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_gets(void)
{	
   char buf[10];
   printf("\n30.test_gets\n");
   printf("please send ascii\n");

   if(gets(buf))
    puts(buf); 
   getche();//Windows系统里面，串口调试助手按“Enter”结尾会发同时发“\n\r”，要多清一次标志位	
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_gmtime(void)
{	
	time_t clock;
	struct tm * tp;
	time(&clock);
	tp = gmtime(&clock);
	printf("\n31.test_gmtime\n");
	printf("tm_isdst:  %d  \n\n", tp->tm_isdst);  //夏令时
	printf("tm_yday:   %d  \n\n", tp->tm_yday);   //一年中的第几天，范围从 0 到 365 
	printf("tm_wday:   %d  \n\n", tp->tm_wday);   //一周中的第几天，范围从 0 到 6
	printf("tm_year:   %d  \n\n", tp->tm_year+1900);   //自 1900 起的年数
	printf("tm_mon:    %d  \n\n", tp->tm_mon);    //月份，范围从 0 到 11
	printf("tm_mday:   %d  \n\n", tp->tm_mday);   //一月中的第几天，范围从 1 到 31
	printf("tm_hour:   %d  \n\n", tp->tm_hour);   //小时，范围从 0 到 23
	printf("tm_min:    %d  \n\n", tp->tm_min);    //分，范围从 0 到 59
	printf("tm_sec:    %d  \n\n", tp->tm_sec);    //秒，范围从 0 到 59
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_isxxxx(void)
{	
	printf("\n32.test_isxxxx\n");
	char  i;
printf("isalnum(c)\n");    //c 处于 0-9、 a-z 或 A-Z 中
	for(i=0;i<=100;i+=10)
	{
	 if(isalnum(i)) 
	  printf("%c\t",i);
	}
	printf("\n"); 
	
printf("isalpha(c)\n");    //c 处于 A-Z 或 a-z 中
	for(i=0;i<=100;i+=10)
	{
	 if(isalpha(i)) 
	  printf("%c\t",i);
	}
	printf("\n"); 
	
printf("isascii(c)\n");    //c 为 7 位 ASCII 字符
	for(i=0;i<=200;i+=20)
	{
	 if(isascii(i)) 
	  printf("%d\t",i);
	}
	printf("\n"); 
	
printf("iscntrl(c)\n");    //c 为控制字符
	for(i=0;i<=100;i+=10)
	{
	 if(iscntrl(i)) 
	  printf("%d\t",i);
	}
	printf("\n"); 
	
printf("isdigit(c)\n");    //c 为十进制数字
	for(i=0;i<=100;i+=10)
	{
	 if(isdigit(i)) 
	  printf("%c\t",i);
	}
	printf("\n"); 
	
printf("islower(c)\n");    //c 处于 a-z 中
	for(i=0;i<=100;i+=10)
	{
	 if(islower(i)) 
	  printf("%c\t",i);
	}
	printf("\n"); 
	
    printf("isprint(c)\n");    //c 为打印字符
	for(i=0;i<=100;i+=10)
	{
	 if(isprint(i)) 
	  printf("%c\t",i);
	}
	printf("\n"); 
	
	printf("isgraph(c)\n");    //c 为非空格可打印字符
	for(i=0;i<=100;i+=10)
	{
	 if(isgraph(i)) 
	  printf("%c\t",i);
	}
	printf("\n"); 
	
	printf("ispunct(c)\n");    //c 不是字母数字
	for(i=0;i<=100;i+=10)
	{
	 if(ispunct(i)) 
	  printf("%c\t",i);
	}
	printf("\n"); 
	
	printf("isspace(c)\n");    //c 是空格、制表符或换行符
	for(i=0;i<=100;i+=10)
	{
	 if(isspace(i)) 
	  printf("%d\t",i);
	}
	printf("\n"); 
	
    printf("isupper(c)\n");    //c 处于 A-Z 中
	for(i=0;i<=100;i+=10)
	{
	 if(isupper(i)) 
	  printf("%c\t",i);
	}
	printf("\n"); 
	
	printf("isxdigit(c)\n");    //c 处于 0-9、 a-f 或 A-F 中
	for(i=0;i<=100;i+=10)
	{
	 if(isxdigit(i)) 
	  printf("%c\t",i);
	}
	printf("\n"); 
	
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_isdig(void)
{	
    unsigned char i=0;
    char buf[] = "123abc";
//	int buf[] = {1,2,3};
	printf("\n33.test_isdig\n");
	while(buf[i])
	{
	  if( isdig(buf[i]) )
	  printf("%c-Y\t",buf[i]);
	  else 
	  printf("%c-N\t",buf[i]);
	  i++;  
	}
	printf("\n");
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_itoa(void)
{	 
	printf("\n34.test_itoa\n");
	char buf[10];
    itoa(buf, 0x1234, 16);
    printf("0x1234 holds %s\n", buf);	
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_labs(void)
{	 
	printf("\n35.test_labs\n");
	long int a = -5;
    printf("labs(%ld)=%ld\n",a,labs(a));	
}
//--------------------------------------------------------------
//有误差？？
//--------------------------------------------------------------
void test_ldexp(void)
{	 
	printf("\n36.test_ldexp\n");
	double f;
	f = ldexp(1.2, 10);
	printf("1.2 * 2^10 = %f\n", f);	
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_ldiv(void)
{	 
	printf("\n37.test_ldiv\n");
	ldiv_t lt;
	lt = ldiv(1234567, 12345);
	printf("1234567/12345=%ld...%ld\n", lt.quot, lt.rem);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_localtime(void)
{	
	time_t clock;
	struct tm * tp;
	time(&clock);
	tp = localtime(&clock);
	printf("\n38.test_localtime\n");
	printf("tm_isdst:  %d  \n\n", tp->tm_isdst);  //夏令时
	printf("tm_yday:   %d  \n\n", tp->tm_yday);   //一年中的第几天，范围从 0 到 365 
	printf("tm_wday:   %d  \n\n", tp->tm_wday);   //一周中的第几天，范围从 0 到 6
	printf("tm_year:   %d  \n\n", tp->tm_year+1900);   //自 1900 起的年数
	printf("tm_mon:    %d  \n\n", tp->tm_mon);    //月份，范围从 0 到 11
	printf("tm_mday:   %d  \n\n", tp->tm_mday);   //一月中的第几天，范围从 1 到 31
	printf("tm_hour:   %d  \n\n", tp->tm_hour);   //小时，范围从 0 到 23
	printf("tm_min:    %d  \n\n", tp->tm_min);    //分，范围从 0 到 59
	printf("tm_sec:    %d  \n\n", tp->tm_sec);    //秒，范围从 0 到 59
}