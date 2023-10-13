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
   
  // #define vnc            //服务器仿真宏定义
   #define m9f951
  // #define zc027c
   #define GetTimeFromPc  //从pc机获取当前时间,屏蔽时间固定为|2021-01-05 17:42:01|
   #define PI 3.141592
   #define R2D (180.0 / PI)
   #define D2R ( PI/180.0 )
   #define eee  2.718282
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
//有误差？？
//--------------------------------------------------------------
void test_tan(void)
{
	printf("\n83.test_tan\n");
	double i;
	for(i = -45.0; i <= 45.0 ; i += 45.0) 
	{
	  printf("tan(%3.0f) = %f\n", i, tan(i*D2R));
	}
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void test_time(void)
{	
    printf("\n84.test_time\n");
	time_t clock;
	time(&clock);
	printf("%ld\n", time(&clock));
	printf("%s\n", ctime(&clock));
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void test_toxxx(void)
{	
    printf("\n85.test_toxxx\n");
	char array1[] = "aBcDE";
	int i;
	for(i=0;i < strlen(array1); ++i) 
	{
	   printf("%c", toupper(array1[i]));
	}
	printf("\n");
	for(i=0;i < strlen(array1); ++i) 
	{
	   printf("%c", tolower(array1[i]));
	}
	printf("\n");
	for(i=0;i < strlen(array1); ++i) 
	{
	   printf("%c", toascii(0xff61+i));
	}
	printf("\n");
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void test_trunc(void)
{	
    printf("\n86.test_trunc\n");
	double input, rounded;
	input = 1234.5678;
	rounded = trunc(input);
	 printf("trunc(%f)=%f\n",input, rounded);
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void test_udiv(void)
{	
    printf("\n87.test_udiv\n");
	udiv_t result;
	unsigned num = 1234, den = 7;
	result = udiv(num, den);
	printf("udiv(%d, %d)=%d...%d\n",num, den, result.quot, result.rem);
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void test_uldiv(void)
{	
    printf("\n88.test_uldiv\n");
	uldiv_t result;
	unsigned long num = 1234, den = 7;
	result = uldiv(num, den);
	printf("udiv(%ld, %ld)=%ld...%ld\n",num, den, result.quot, result.rem);
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void test_utoa(void)
{	
    printf("\n89.test_utoa\n");
	char buf[10];
    utoa(buf, 0x1234, 16);
    printf("0x1234 holds %s\n", buf);
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void pf (int a, ...)
{
   va_list ap;
   va_start(ap, a);
   while(a--)
   puts(va_arg(ap, char *));
   va_end(ap);
}
void test_va_xxx(void)
{	
    printf("\n90.test_va_xxx\n");
	pf(3, "Line 1", "Line 2", "Line 3");
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void test_atoi(void)
{	
    printf("\n91.test_atoi\n");
	char buf[]="123";
	int i;
	//gets(buf);
	i = xtoi(buf);
	printf("Read %s to %x\n", buf, i);
}
void test_strftime(void)
{	
     printf("\n92.test_strftime\n");
	time_t rawtime;
   struct tm *info;
   char buffer[80];
 
   time( &rawtime );
    info = gmtime(&rawtime);
    strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", info);
	printf(" a: |%s|\n", buffer );
	strftime(buffer, 80, "%a", info);  //%a	缩写的星期几名称	Sun
	printf(" a: |%s|\n", buffer );
	strftime(buffer, 80, "%A", info);  //%A	完整的星期几名称	Sunday
	printf(" A: |%s|\n", buffer );
	strftime(buffer, 80, "%b", info);  //%b	缩写的月份名称	Mar
	printf(" b: |%s|\n", buffer );
	strftime(buffer, 80, "%B", info);  //%B	完整的月份名称	March
	printf(" B: |%s|\n", buffer );
	strftime(buffer, 80, "%c", info);  //%c	日期和时间表示法	Sun Aug 19 02:56:02 2012
	printf(" c: |%s|\n", buffer );
	strftime(buffer, 80, "%d", info);  //%d	一月中的第几天（01-31）	19
	printf(" d: |%s|\n", buffer );
	strftime(buffer, 80, "%H", info);  //%H	24 小时格式的小时（00-23）	14
	printf(" H: |%s|\n", buffer );
	strftime(buffer, 80, "%I", info);  //%I	12 小时格式的小时（01-12）	05
	printf(" I: |%s|\n", buffer );
	strftime(buffer, 80, "%j", info);  //%j	一年中的第几天（001-366）	231
	printf(" j: |%s|\n", buffer );
	strftime(buffer, 80, "%m", info);  //%m	十进制数表示的月份（01-12）	08
	printf(" m: |%s|\n", buffer );
	strftime(buffer, 80, "%M", info);  //%M	分（00-59）	55
	printf(" M: |%s|\n", buffer );
	strftime(buffer, 80, "%p", info);  //%p	AM 或 PM 名称	PM
	printf(" p: |%s|\n", buffer );
	strftime(buffer, 80, "%S", info);  //%S	秒（00-61）	02
	printf(" S: |%s|\n", buffer );
	strftime(buffer, 80, "%U", info);  //%U	一年中的第几周，以第一个星期日作为第一周的第一天（00-53）	33
	printf(" U: |%s|\n", buffer );
	strftime(buffer, 80, "%w", info);  //%w	十进制数表示的星期几，星期日表示为 0（0-6）	4
	printf(" w: |%s|\n", buffer );
	strftime(buffer, 80, "%W", info);  //%W	一年中的第几周，以第一个星期一作为第一周的第一天（00-53）	34
	printf(" W: |%s|\n", buffer );	
	strftime(buffer, 80, "%x", info);  //%x	日期表示法	08/19/12
	printf(" x: |%s|\n", buffer );
	strftime(buffer, 80, "%X", info);  //%X	时间表示法	02:50:06
	printf(" X: |%s|\n", buffer );
	strftime(buffer, 80, "%y", info);  //%y	年份，最后两个数字（00-99）	01
	printf(" y: |%s|\n", buffer );
	strftime(buffer, 80, "%Y", info);  //%Y	年份	2012
	printf(" Y: |%s|\n", buffer );
	strftime(buffer, 80, "%Z", info);  //%Z	时区的名称或缩写	CDT
	printf(" Z: |%s|\n", buffer );
	strftime(buffer, 80, "%%", info);  //%%	一个 % 符号	%
	printf("  : |%s|\n", buffer );
}