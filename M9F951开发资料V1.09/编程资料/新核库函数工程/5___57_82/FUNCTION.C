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

    // #define vnc         //服务器仿真宏定义
   #define m9f951
   //#define zc027c
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

void test_sin(void)
{
	double i;
    printf("\n57.test_sin\n");
	for(i = -180; i <= 180 ; i += 90) 
	{
	  printf("sin(%3.0f) = %f\n", i, sin(i*D2R));
	}
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_sprintf(void)
{
    char buff[15];
    printf("\n59.test_sprintf\n");
	sprintf(buff,"printf test");
	printf("%s\n",buff);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_sqrt(void)
{
    printf("\n60.test_sqrt\n");
	double i;
	for(i = 3.0 ; i <= 5.0 ; i += 1.0)
	printf("sqrt(%f) = %f\n", i, sqrt(i));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_srand(void)
{
    printf("\n61.test_srand\n");
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
void test_strcat(void)
{
    printf("\n62.test_strcat\n");
	char buffer[30], buffer2[]="...end of line";
	char *s1, *s2;
	strcpy(buffer, "Start of line");
	s1 = buffer;
	s2 = buffer2;
	strcat(s1, s2);
	printf("Length = %d\n", strlen(buffer));
	printf("string = %s\n", buffer);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strchr(void)
{
    printf("\n63.test_strchr\n");
	static char temp[] = "A1b";
	char goal[] = "AaBb12";
	char i=0;
	 printf("%s\n", temp);
	while(goal[i])
	{
	  if(strchr(temp, goal[i]))
	  printf("%c Y\t", goal[i]);
	  else
	  printf("%c N\t", goal[i]);
	  i++;
	}
	printf("\n");
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strichr(void)
{
    printf("\n64.test_strichr\n");
	static char temp[] = "A1b";
	char goal[] = "AaBb12";
	char i=0;
	 printf("%s\n", temp);
	while(goal[i])
	{
	  if(strichr(temp, goal[i]))
	  printf("%c Y\t", goal[i]);
	  else
	  printf("%c N\t", goal[i]);
	  i++;
	}
	 printf("\n");
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strcmp(void)
{	 
	printf("\n65.test_strcmp\n");	
	char AA[]={'A','b'}, BB[]={'A','B'};
	char i;
	int  j;
	for(i=0;i<=3;i++)
    {
	  j = strcmp(AA, BB);
	  if(j < 0)
	  printf("A%c<A%c\n",AA[1],BB[1]);
	  else if(j > 0)
	  printf("A%c>A%c\n",AA[1],BB[1]);
	  else
	  printf("A%c=A%c\n",AA[1],BB[1]);
	  BB[1] +=16; 
    }
    printf("\n");	
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_stricmp(void)
{	 
	printf("\n66.test_stricmp\n");	
	char AA[]={'A','b'}, BB[]={'A','B'} , i;
	int  j;
	for(i=0;i<=3;i++)
    {
	  j = stricmp(AA, BB);
	  if(j < 0)
	  printf("A%c<A%c\n",AA[1],BB[1]);
	  else if(j > 0)
	  printf("A%c>A%c\n",AA[1],BB[1]);
	  else
	  printf("A%c=A%c\n",AA[1],BB[1]);
	  BB[1] +=16; 
    }	
	 printf("\n");
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strcpy(void)
{	 
	printf("\n67.test_strcpy\n");
	char buf[15];
	memset(buf, 0 ,sizeof buf);
	strcpy(buf, "strcpy test");
	printf("buf=%s\n", buf);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strcspn(void)
{	 
	printf("\n68.test_strcpy\n");
	static char set[] = "xyz";
	printf("%d\n", strcspn("abcxyz", set));
	printf("%d\n", strcspn("xyzrtk", set));
	printf("%d\n", strcspn("12xyz6", set));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strlen(void)
{	 
	printf("\n69.test_strlen\n");
	char buffer[]="1234";
	printf("strlen(buffer)= %d\n", strlen(buffer));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strncat(void)
{
    printf("\n70.test_strncat\n");
	char buffer[30], buffer2[]="...end of line";
	char *s1, *s2;
	strcpy(buffer, "Start of line");
	s1 = buffer;
	s2 = buffer2;
	strncat(s1, s2 , 5);
	printf("Length = %d\n", strlen(buffer));
	printf("string = %s\n", buffer);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strncmp(void)
{	 
	printf("\n71.test_strncmp\n");	
	char AA[]={'A','b'}, BB[]={'A','B'};
	char i;
	int  j;
	for(i=0;i<=3;i++)
    {
	  j = strncmp(AA, BB,2);
	  if(j < 0)
	  printf("A%c<A%c\n",AA[1],BB[1]);
	  else if(j > 0)
	  printf("A%c>A%c\n",AA[1],BB[1]);
	  else
	  printf("A%c=A%c\n",AA[1],BB[1]);
	  BB[1] +=16; 
    }	
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strnicmp(void)
{	 
	printf("\n72.test_strnicmp\n");	
	char AA[]={'A','b'}, BB[]={'A','B'} , i;
	int  j;
	for(i=0;i<=3;i++)
    {
	  j = strnicmp(AA, BB,2);
	  if(j < 0)
	  printf("A%c<A%c\n",AA[1],BB[1]);
	  else if(j > 0)
	  printf("A%c>A%c\n",AA[1],BB[1]);
	  else
	  printf("A%c=A%c\n",AA[1],BB[1]);
	  BB[1] +=16; 
    }	
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strncpy(void)
{	 
	printf("\n73.test_strncpy\n");
	char buf[15];
	memset(buf, 0 ,sizeof buf);
	strncpy(buf, "strcpy test",9);
	printf("buf=%s\n", buf);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strpbrk(void)
{	 
	printf("\n74.test_strpbrk\n");
	char buf[]= "abcdef";
	char *str;
	printf("%s\n", buf);
	  str=strpbrk(buf, "fec");
	 printf("%s\n", str);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strrchr(void)
{
    printf("\n75.test_strrchr\n");
	static char temp[] = "A1b";
	char goal[] = "AaBb12";
	char i=0;
	 printf("%s\n", temp);
	while(goal[i])
	{
	  if(strrchr(temp, goal[i]))
	  printf("%c Y\t", goal[i]);
	  else
	  printf("%c N\t", goal[i]);
	  i++;
	}
	printf("\n");
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strrichr(void)
{
    printf("\n76.test_strrichr\n");
	static char temp[] = "A1b";
	char goal[] = "AaBb12";
	char i=0;
	 printf("%s\n", temp);
	while(goal[i])
	{
	  if(strrichr(temp, goal[i]))
	  printf("%c Y\t", goal[i]);
	  else
	  printf("%c N\t", goal[i]);
	  i++;
	}
	 printf("\n");
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strspn(void)
{
    printf("\n77.test_strspn\n");
	printf("%d\n", strspn("This is a string", "This"));
    printf("%d\n", strspn("This is a string", "this"));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strstr(void)
{
    printf("\n78.test_strspn\n");
    char buf[]= "This is a string";
    char buf2[]= "str";
	printf("%s\n", strstr(buf, buf2));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_stristr(void)
{
    printf("\n79.test_stristr\n");
	char buf[]= "This is a string";
    char buf2[]= "Str";
	printf("%s\n", stristr(buf, buf2));
}
//--------------------------------------------------------------
//有误差??
//--------------------------------------------------------------
void test_strtod(void)
{
    printf("\n80.test_strtod\n");
	char buf[] = " 35.7 23.27";
    char * end;
    double in1, in2;
    in1 = strtod(buf, &end);
    in2 = strtod(end, NULL);
    printf("%f, %f\n", in1, in2);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strtol(void)
{
    printf("\n81.test_strtol\n");
	char buf[] = "0X299 0x792";
	char * end;
	long in1, in2;
	in1 = strtol(buf, &end, 16);
	in2 = strtol(end, NULL, 16);
	printf("%ld, %ld\n", in1, in2);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_strtok(void)
{
    printf("\n82.test_strtok\n");
	char * ptr;
	char buf[] = "This is a string of words.";
	char sep_tok[] = ",?! ";
	ptr = strtok(buf, sep_tok);
	while(ptr != NULL) 
	{
	printf("%s\n", ptr);
	ptr = strtok(NULL, sep_tok);
    }
}