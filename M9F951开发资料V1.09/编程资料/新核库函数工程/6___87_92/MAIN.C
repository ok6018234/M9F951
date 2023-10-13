#include  <zc.h>
#include "MASSESCHIP_DEFINE.H"
unsigned char vnc_end @ 0x2 = 0x00;       //用于服务器仿真

extern void Uart_Init(void);
extern void test_tan(void);
extern void test_time(void);
extern void test_toxxx(void);
extern void test_trunc(void);
extern void test_udiv(void);
extern void test_uldiv(void);
extern void test_utoa(void);
extern void test_va_xxx(void);
extern void test_atoi(void);
extern void test_strftime(void);
//===================================================
void main()
{
	Uart_Init(); 
	test_tan();          //83
	test_time();         //84
	test_toxxx();        //85
	test_trunc();        //86
	test_udiv();         //87
	test_uldiv();        //88
	test_utoa();         //89
	test_va_xxx();       //90
	test_atoi();         //91
	test_strftime();    //92
	vnc_end = 0xEE;      //服务器仿真结束标志
	while(1){}
}
