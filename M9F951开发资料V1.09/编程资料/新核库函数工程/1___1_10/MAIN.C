#include  <zc.h>
#include "MASSESCHIP_DEFINE.H"
unsigned char vnc_end @ 0x2 = 0x00;       //用于服务器仿真

extern void Uart_Init(void);
extern void test_abs(void);
extern void test_acos(void);
extern void test_asctime(void);
extern void test_asin(void);
extern void test_assert(void);
extern void test_atan(void);
extern void test_atan2(void);
extern void test_atof(void);
extern void test_atoi(void);
extern void test_atol(void);
//===================================================
void main()
{
	Uart_Init();
	test_abs();      //1
	test_acos();     //2
	test_asctime();  //3
	test_asin();     //4	
    test_assert();   //5
	test_atan();     //6
	test_atan2();    //7
	test_atof();     //8
	test_atoi();     //9
    test_atol();     //10
    vnc_end = 0xEE;  //服务器仿真结束标志
	while(1){}

}
