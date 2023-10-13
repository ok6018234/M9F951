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
#include <setjmp.h>
   
   // #define vnc                     //服务器仿真宏定义
   #define m9f951
  // #define zc027c
   #define GetTimeFromPc  //从pc机获取当前时间,屏蔽时间固定为|2021-01-05 17:42:01|
   #define PI 3.141592
   #define R2D (180.0 / PI)
   #define D2R ( PI/180.0 )
   #define eee  2.718282
   #define UartDebug_BAUDRATE    1000000
   
#ifdef  GetTimeFromPc
   char   date_time_sys[20] = {__DATE__  __TIME__};
   static const char a_mon[12][4] = {{"Jan"},{"Feb"},{"Mar"},{"Apr"},{"May"},{"Jun"},
                                     {"Jul"},{"Aug"},{"Sep"},{"Oct"},{"Nov"},{"Dec"}};   							 
#endif
	   	 time_t time_array[1] = {1609868521L}; 	//|2021-01-05 17:42:01|	   
    unsigned char vnc_rxbuf @ 0x0;            //用于服务器仿真
   unsigned char vnc_flg @ 0x1 = 0x00;       //用于服务器仿真


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
void test_log(void)
{	 
	printf("\n39.test_log\n");
	double f;
	for(f = 1.0 ; f <= eee*eee*eee ; f *= eee)
	{
	  printf("log(%f)  = %f\n", f,log(f));
	}
	for(f = 1.0 ; f <= 1000 ; f *= 10)
	{
	  printf("log10(%f)= %f\n", f,log10(f));
	}
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
 jmp_buf jb;
void inner (void)
{
   longjmp(jb, 5);
}

void test_longjmp(void)
{	 
	printf("\n40.test_longjmp\n");	
	int i;
    if(i = setjmp(jb)) 
	{
    printf("setjmp returned %d\n" ,i);
	return;
    }
	printf("setjmp returned 0 - good\n");
    printf("calling inner...\n");
    inner();
    printf("inner returned - bad!\n");
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_ltoa(void)
{	 
	printf("\n41.test_ltoa\n");	
	char buf[10];
    ltoa(buf, 0x12345678L, 16);
    printf("0x12345678 holds %s\n", buf);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_lmemchr(void)
{	 
	printf("\n42.test_lmemchr\n");	
	char * cp;
	unsigned int ary[] = {5,0x23};
	cp = memchr(ary, 1, sizeof ary);
	if(!cp)
	printf("Not found 1 at 5,0x23\n");
	else
	printf("1 offset %u at 5,0x23\n", cp - (char *)ary);
	
	cp = memchr(ary, 0x23, sizeof ary);
	if(!cp)
	printf("Not found 0x23 at 5,0x23\n");
	else
	printf("0x23 offset %u at 5,0x23\n", cp - (char *)ary);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_memcmp(void)
{	 
	printf("\n43.test_memcmp\n");	
	char AA[]={1,2,3}, BB[]={1,2,2} , i;
	int  j;
	for(i=0;i<3;i++)
    {
	  j = memcmp(AA, BB, 3*sizeof(char));
	  if(j < 0)
	  printf("12%d<12%d\n",AA[2],BB[2]);
	  else if(j > 0)
	  printf("12%d>12%d\n",AA[2],BB[2]);
	  else
	  printf("12%d=12%d\n",AA[2],BB[2]);
	  BB[2]++; 
    }	
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_memcpy(void)
{	 
	printf("\n44.test_memcpy\n");
	char buf[15];
	memset(buf, 0 ,sizeof buf);
	memcpy(buf, "memcpy test", 6);
	printf("buf=%s\n", buf);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_memmove(void)
{	 
	printf("\n45.test_memmove\n");
	char buf[15];
	memset(buf, 0 ,sizeof buf);
	memcpy(buf, "memmove test", 6);
	printf("buf=%s\n", buf);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_memset(void)
{	 
	printf("\n46.test_memset\n");
	char abuf[10];
	strcpy(abuf, "memset");
	memset(abuf, 'x' ,3);
	printf("abuf=%s\n", abuf);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_modf(void)
{	 
	printf("\n47.test_modf\n");
	double i_val, f_val, fi=-3.17;
     f_val = modf( fi, &i_val);
	 printf("%f=%f+%f\n",fi, i_val, f_val);
}
//--------------------------------------------------------------
//有误差？？
//--------------------------------------------------------------
void test_pow(void)
{	 
	printf("\n49.test_pow\n");
	double i,f = 10.0;
	for(i=-2;i<=2;i++)
	{
	 printf("pow(%f, %f) = %f\n", f,i,pow(f, i));
	}
}
//--------------------------------------------------------------
//   mcu/sources/common/doprnt.c文件错误？？  
//--------------------------------------------------------------
/* int error(char * s, ...)
{
	va_list ap;
	va_start(ap, s);
	printf("Error: ");
	vprintf(s, ap);
	putchar("\n");
	va_end(ap);
} */
void test_vprintf(void)
{	 
	printf("\n50.test_vprintf\n");	
	/*  int i;
	i = 3;
	error("testing 1 2 %d", i);  */
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_putch(void)
{	 
	printf("\n51.test_putch\n");
	char  i;
	for(i=0x30;i<=0x32;i++)
	{
	 putch(i);
	}
	printf("\n");
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_putchar(void)
{	 
	printf("\n52.test_putchar\n");
	char  buf[] = "putchar test";
	char *cp;
	cp = &buf[0];
    while(*cp)
    putchar(*cp++);
    putchar('\n');
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
int array[] = {567, 23, 456, 1024, 17, 567, 66};
int sortem (const void * p1, const void * p2)
{
return *(int *)p1 - *(int *)p2;
}
void test_qsort(void)
{	 
	printf("\n53.test_qsort\n");	
	register int i;
	qsort(array, sizeof array/sizeof array[0],sizeof array[0], sortem);
	for(i = 0 ; i != sizeof array/sizeof array[0] ; i++)
	printf("%d\t", array[i]);
	printf("\n");
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_rand(void)
{	 
	printf("\n54.test_rand\n");	
	time_t toc;
	int i;
	time(&toc);
	srand((int)toc);
	for(i = 0 ; i < 3 ; i++)
	printf("%d\t", rand());
	printf("\n");
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_round(void)
{	 
	printf("\n55.test_round\n");
    char i;	
	double input, rounded;
	input = 1234.4678;
	for(i=0;i<2;i++)
	{
	  rounded = round(input);
	  printf("round(%f)=%f\n",input,rounded);
	  input += 0.5; 
	}
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_setjmp(void)
{	 
	printf("\n56.test_setjmp\n");
	int i;
	if(i = setjmp(jb)) {
	printf("setjmp returned %d\n", i);
	return;
	}
	printf("setjmp returned 0 - good\n");
	printf("calling inner...\n");
	inner();
	printf("inner returned - bad!\n");
}
