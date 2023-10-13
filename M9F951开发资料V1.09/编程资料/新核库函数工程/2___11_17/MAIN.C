#include  <zc.h>
#include "MASSESCHIP_DEFINE.H"
unsigned char vnc_end @ 0x2 = 0x00;       //用于服务器仿真

extern void Uart_Init(void);

extern void test_bsearch(void);
extern void test_ceil(void);
extern void test_cgets(void);
extern void test_cos(void);
extern void test_sinh_cosh_tanh(void);
extern void test_cputs(void);

//===================================================
void main()
{
	Uart_Init();
    test_bsearch();  //11  
    test_ceil();	 //12
	test_cgets();	 //13
	 CLRWDT();        //14
	test_cos();      //15
    test_sinh_cosh_tanh();	//16
	test_cputs();    //17 
	vnc_end = 0xEE;      //服务器仿真结束标志
	while(1){}

}
