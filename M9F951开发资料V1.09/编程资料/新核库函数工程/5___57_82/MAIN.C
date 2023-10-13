#include  <zc.h>
#include "MASSESCHIP_DEFINE.H"
unsigned char vnc_end @ 0x2 = 0x00;       //用于服务器仿真

extern void Uart_Init(void);
extern void test_sin(void);
extern void test_sprintf(void);
extern void test_sqrt(void);
extern void test_srand(void);
extern void test_strcat(void);
extern void test_strchr(void);
extern void test_strichr(void);
extern void test_strcmp(void);
extern void test_stricmp(void);
extern void test_strcpy(void);
extern void test_strcspn(void);
extern void test_strlen(void);
extern void test_strncat(void); 

extern void test_strncmp(void); 
extern void test_strnicmp(void);
extern void test_strncpy(void);
extern void test_strpbrk(void);
extern void test_strrchr(void);
extern void test_strrichr(void);
extern void test_strspn(void);
extern void test_strstr(void);
extern void test_stristr(void);
extern void test_strtod(void);
extern void test_strtol(void);
extern void test_strtok(void);
//===================================================
void main()
{
	Uart_Init();
	
	test_sin();     //57
	//SLEEP();      //58
	test_sprintf(); //59
    test_sqrt();    //60
	test_srand();   //61
	test_strcat();  //62
	test_strchr();  //63
	test_strichr(); //64
	test_strcmp();  //65
	test_stricmp(); //66
	test_strcpy();  //67
	test_strcspn(); //68
	test_strlen();  //69
	test_strncat(); //70	
	test_strncmp(); //71
	test_strnicmp();//72
	test_strncpy(); //73
	test_strpbrk(); //74
	test_strrchr(); //75
    test_strrichr();//76
	test_strspn();  //77
	test_strstr();  //78
	test_stristr(); //79
    test_strtod();  //80
	test_strtol();  //81
	test_strtok();  //82
	vnc_end = 0xEE;      //服务器仿真结束标志
	while(1){}
}
