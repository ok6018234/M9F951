#define	_USART2_MGR_C_
#include"Usart2Mgr.h"
#include"stdio.h"

//初始化
void Usart2Mgr_Init(void)
{
	ANSE &= ~0XC0;
	PUE6 = 1;
	TX1CR = (unsigned char)(TX1EN_1+T1SYNC_0+T1L9_0+T1SPD+T1D9_0);//使能串口发送功能、异步模式、8位数据、波特率预分频比为4、不发送第九位数据
	RX1CR = (unsigned char) (RX1EN_1+R1CKPS_0+R19_0+R1D9_0);//使能串口接收功能、上升沿发送数据、8位数据、不接收第9位数据
	BRGD1 = USART2_BRGD;	//波特率
	RX1IE = 1;
	TX1IE = 0;
	
	Usart2Mgr_RXD_Reset();
}

//接收参数复位
void Usart2Mgr_RXD_Reset(void)
{
	Usart2Mgr.RXDLen = 0;
	Usart2Mgr.RXDLenback = 0;
	Usart2Mgr.RXDState = 0;
}

/*--------------------------------------------------
***函数名称:unsigned char Usart2Mgr_BeginTx(unsigned char len)
***功能描述:串口2启动发送
***参数:len:传输长度
***返回值:1=操作成功 0=操作失败,串口正忙或长度错误
***创建者:GJN
***创建时间:2022.6.9
***最后更新:
---------------------------------------------------*/
unsigned char Usart2Mgr_BeginTx(unsigned char len)
{
	if(TX1IE)
		return 0;
	if(len>sizeof(Usart2Mgr.TXDBuf))
		return 0;
	Usart2Mgr.TXDLen = 0;
	Usart2Mgr.TXDLenBack = len;
	TX1IE = 1;
	return 1;
}
/*
static unsigned char revphase=0;
//在接收中断根据实际协议格式判断接收结束,比超时判断法快,但通用性较差
//以下编写根据协议0X55 + 数据长度 + 数据 + 校验,判断
void Usart2Mgr_DirectData(void)
{
	static unsigned char rxlen;
	Usart2Mgr.RXDOverTime = 0;	//最好加入超时判断,防止非协议数据导致卡死在非0状态,
	switch(revphase)
	{
		case 0:	//帧头
			Usart2Mgr.RXDBuf[0] = RX0REG;
			if(Usart2Mgr.RXDBuf[0]==0X55)	//判断帧头是否正确
			{
				Usart2Mgr.RXDLen = 1;
				revphase++;	//跳转下一状态
			}
		break;
		case 1: //数据长度
			rxlen = RX0REG;
			if(rxlen<=USART1_MGR_MAX_LENGTH-2)	//判断是否超出最大长度,此处-2是排除了帧头以及结尾的校验
			{
				Usart2Mgr.RXDBuf[Usart2Mgr.RXDLen++] = rxlen;
				rxlen++;	//长度+1,下一状态将校验一同接收
				revphase++;
			}
			else
			{
				revphase = 0;
				Usart2Mgr.RXDAnomalous = 1;
			}
		break;
		case 2: //数据接收,包括接收最后的校验
			Usart2Mgr.RXDBuf[Usart2Mgr.RXDLen++] = RX0REG;
			if(--rxlen==0)
			{
				Usart2Mgr.RXDEnd = 1;	//接收完成标志,或者直接在此处进行协议处理
				revphase = 0;
			}
		break;
		default:break;
	}
}
*/	
//超时判断,每隔一定时间调用一次
void Usart2Mgr_OverTime(void)
{
	if(Usart2Mgr.RXDLen)
	{
		if(Usart2Mgr.RXDLenback==Usart2Mgr.RXDLen)
		{
			Usart2Mgr.RXDEnd = 1;
	
			//revphase=0; //使用此方法时屏蔽上面一句
		}
		else
		{
			Usart2Mgr.RXDLenback = Usart2Mgr.RXDLen;
		}
	}
}
//中断调用
void Usart2Mgr_Int(void)
{
	if(TX1IE&&TX1IF)
	{
		if(Usart2Mgr.TXDLen >= Usart2Mgr.TXDLenBack)
		{
			TX1IE = 0;
		}
		else
		{
			TX1REG = Usart2Mgr.TXDBuf[Usart2Mgr.TXDLen++];
		}
	}
	if(RX1IE&&RX1IF)
	{
		volatile unsigned char temp = RX1REG;
		if(!FR1ER)
		{
			if(!Usart2Mgr.RXDEnd)
			{
				if(Usart2Mgr.RXDLen >= sizeof(Usart2Mgr.RXDBuf))
				{
					Usart2Mgr.RXDAnomalous = 1;
					Usart2Mgr.RXDLen = 0;
					Usart2Mgr.RXDLenback = 0;
				}
				else
				{
					Usart2Mgr.RXDBuf[Usart2Mgr.RXDLen++] = temp;
				}
			}
		//	Usart2Mgr_DirectData(); //调用此函数则将上面的if语句屏蔽
		}
		else
			Usart2Mgr.RXDAnomalous = 1;
	}	
}

#if 0
//使用printf需重写putch
void putch(char c)		//重写putch
{
  	while(T1MCLR==0){}
		TX1REG = c;
}
#endif

/*
//奇校验
unsigned char Odd_Parity(unsigned char dat)
{
	unsigned char parity = 1;
	unsigned char loop = 1;
	while(loop!=0)
	{
		if(dat&loop)
		{
			parity = !parity;
		}
		loop<<= 1;
	}
	return parity;
}
//偶校验
unsigned char Even_Parity(unsigned char dat)
{
	unsigned char partiy=0;
	unsigned char loop = 1;
	while(loop!=0)
	{
		if(dat&loop)
		{
			parity = !parity;
		}
		loop<<= 1;
	}
	return parity;
}
//异或校验
unsigned char XorCheck(unsigned char *dat,unsigned char len)
{
	unsigned char result=0;

	while(len--)
	{
		result ^= *dat++;
	}
	return result;
}

//8位和校验
unsigned char SumCheck(unsigned char *dat,unsigned char len)
{
    unsigned char sum=0;

    while(len--)
    {
    	sum += *dat++;
    }
    return sum;
}

//CRC8校验,多项式0X31,初始值0,输入输出不反转
//运算速度较慢,可换用查表法
unsigned char CrcCheck(unsigned char *dat, unsigned char len)
{
    unsigned char i; 
    unsigned char crc=0x00； 
 
    while(len--)
    {
        crc ^= *dat++;
        for (i=8; i>0; --i) 
        { 
            if (crc & 0x80)
                crc = (crc << 1) ^ 0x31;
            else
                crc = (crc << 1);
        }
    }
    return (crc); 
}
*/

