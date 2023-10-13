#include  <zc.h>
#include "MASSESCHIP_DEFINE.H"
unsigned char vnc_end @ 0x2 = 0x00;       //用于服务器仿真

extern void Uart_Init(void);
extern void test_log(void);
extern void test_longjmp(void); 
extern void test_ltoa(void);
extern void test_lmemchr(void);
extern void test_memcmp(void);
extern void test_memcpy(void); 
extern void test_memmove(void);
extern void test_memset(void);
extern void test_modf(void);
extern void test_pow(void);
extern void test_vprintf(void);
extern void test_putch(void);
extern void test_putchar(void);
extern void test_qsort(void);
extern void test_rand(void);
extern void test_round(void);
extern void test_setjmp(void);
extern void test_sin(void);

//===================================================
void main()
{
	Uart_Init();
	test_log();       //39
	test_longjmp();   //40
	test_ltoa();      //41
	test_lmemchr();   //42
    test_memcmp();    //43
	test_memcpy();    //44
	test_memmove();   //45
	test_memset();    //46
	test_modf();      //47
	NOP();            //48
	test_pow();       //49
	test_vprintf();   //50
	test_putch();     //51
	test_putchar();   //52
	test_qsort();     //53
	test_rand();      //54
	test_round();     //55
	test_setjmp();    //56
	vnc_end = 0xEE;      //服务器仿真结束标志
	while(1){}

}
