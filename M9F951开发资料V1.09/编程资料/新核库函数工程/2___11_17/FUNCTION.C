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
   
  // #define vnc                                  //服务器仿真宏定义
   #define m9f951
   //#define zc027c
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

//--------------------------------------------------------------
//      
//--------------------------------------------------------------
struct value {
               char name[10];
               int value;
              } values[] = { { "foobar", 66 }, { "casbar", 87 }, { "crossbar", 105 }};
int val_cmp (const void * p1, const void * p2)
            {
              return strcmp(((const struct value *)p1)->name,
              ((const struct value *)p2)->name);
            }
			
void test_bsearch(void)
{
	int i = sizeof(values)/sizeof(struct value);
	struct value * vp;
	printf("\n11.test_bsearch\n");	
	qsort(values, i, sizeof values[0], val_cmp);
	vp = bsearch("foobar", values, i, sizeof values[0], val_cmp);
	if(!vp)
	printf("Item foobar was not found\n");
	else
	printf("Item foobar has value %d\n", vp->value);
	
	vp = bsearch("feebar", values, i, sizeof values[0], val_cmp);
	if(!vp)
	printf("Item feebar was not found\n");
	else
	printf("Item feebar has value %d\n", vp->value);
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_ceil(void)
{
	double j;
	printf("\n12.test_ceil\n");	
	j = 2.345;
	printf("The ceiling of %f is %f\n", j, ceil(j));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
  char buf_cgets[20];
void test_cgets(void)
{
	
	printf("\n13.test_cgets\n");	
	for(;;) {
              cputs("please send some ascii to continue or send exit to finish\n");
			  cgets(buf_cgets);
			   getche();//Windows系统里面，串口调试助手按“Enter”结尾会发同时发“\n\r”，要多清一次标志位
			   printf("%s\n", buf_cgets);
              if(strcmp(buf_cgets, "exit") == 0)
              break;
            }
}

//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_cos(void)
{
	double i;
    printf("\n15.test_cos\n");
	for(i = -180; i <= 180 ; i += 90) 
	{
	  printf("cos(%3.0f) = %f\n", i, cos(i*D2R));
	}
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_sinh_cosh_tanh(void)
{
	double i=1.5;
     printf("\n16.test_sinh_cosh_tanh\n");
	
	 printf("sinh(%f) = %f\n", i,sinh(i));
	 printf("cos(%f) = %f\n", i,cosh(i));
	 printf("tanh(%f) = %f\n", i,tanh(i));
}
//--------------------------------------------------------------
//
//--------------------------------------------------------------
void test_cputs(void)
{
     printf("\n17.test_cputs\n");
     cputs("cputs test\n");
}
