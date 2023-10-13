#define	_USBD_DESC_C_
#include"DELAY.H"

#ifdef Fcpu_4T
//24M,4T模式，10us实测12us,100us实测101us
void Delayus(unsigned char t)
{
	while(t--)
	{
		CLRWDT();
		NOP();
	}
}

//24M,4T模式，500ms实测499.96ms
void Delayms(unsigned int t)
{
	unsigned char i,j;
	
	while(t--)
	{
		i = 8;
		j = 198;
		do
		{
			CLRWDT();
			while (--j);
		} while (--i);
		
	}
}
#endif
#ifdef Fcpu_8T
//24M,8T模式，10us实测12us,100us实测102us
void Delayus(unsigned char t)
{
	while(--t);
}
//24M,8T模式，500ms实测499.94ms
void Delayms(unsigned int t)
{
	unsigned char i,j;
	
	while(t--)
	{
		i = 4;
		j = 225;
		do
		{
			CLRWDT();
			while (--j);
		} while (--i);
	}
}
#endif
