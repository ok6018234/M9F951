#include  <zc.h>
#include "MASSESCHIP_DEFINE.H"
unsigned char vnc_end @ 0x2 = 0x00;       //用于服务器仿真

extern void Uart_Init(void);
extern void test_ctime(void); 
extern void test_di_ei(void);
extern void test_div(void);
extern void test_eval_poly(void);
extern void test_exp(void);
extern void test_fabs(void);
extern void test_floor(void);
extern void test_fmod(void);
extern void test_frexp(void); 
extern void test_ftoa(void);
extern void test_getch(void);
extern void test_getchar(void);
extern void test_gets(void);
extern void test_gmtime(void);
extern void test_isxxxx(void);
extern void test_isdig(void);
extern void test_itoa(void);
extern void test_labs(void);
extern void test_ldexp(void);
extern void test_ldiv(void);
extern void test_localtime(void);
//===================================================
void main()
{
	Uart_Init();
	test_ctime();    //18
	test_di_ei();    //19
	test_div();      //20
    test_eval_poly();//21
	test_exp();      //22
    test_fabs();     //23
    test_floor();    //24
	test_fmod();     //25
    test_frexp();    //26
	test_ftoa();     //27
	//test_getch();    //28
  //test_getche();   //略，见13.test_cgets
	//test_getchar();  //29
	//test_gets();     //30
	test_gmtime();   //31
	test_isxxxx();   //32
	test_isdig();    //33
	test_itoa();     //34
	test_labs();     //35
	test_ldexp();     //36
	test_ldiv();      //37
	test_localtime(); //38
	vnc_end = 0xEE;      //服务器仿真结束标志
	while(1){}

}
