#define	_USART1_MGR_C_
#include"Usart1Mgr.h"
#include"stdio.h"

//初始化
void Usart1Mgr_Init(void)
{
	ANSF &= ~0X0C;
	PUF2 = 1;
	TX0CR = (unsigned char)(TX0EN_1+T0SYNC_0+T0L9_0+T0SPD+T0D9_0);//使能串口发送功能、异步模式、8位数据、波特率预分频比为4、不发送第九位数据
	RX0CR = (unsigned char)(RX0EN_1+R0CKPS_0+R09_0+R0D9_0);//使能串口接收功能、上升沿发送数据、8位数据、不接收第9位数据
	BRGD0 = USART1_BRGD;	//波特率
	RX0IE = 1;
	TX0IE = 0;
	
	Usart1Mgr_RXD_Reset();
}

//接收参数复位
void Usart1Mgr_RXD_Reset(void)
{
	Usart1Mgr.RXDLen = 0;
	Usart1Mgr.RXDLenback = 0;
	Usart1Mgr.RXDState = 0;
}

/*--------------------------------------------------
***函数名称:unsigned char Usart1Mgr_BeginTx(unsigned char len)
***功能描述:串口1启动发送
***参数:len:传输长度
***返回值:1=操作成功 0=操作失败,串口正忙或长度错误
***创建者:GJN
***创建时间:2022.6.9
***最后更新:
***备注:操作发送缓存应确认串口未发送数据,即检查TX0IE是否等于0
---------------------------------------------------*/
unsigned char Usart1Mgr_BeginTx(unsigned char len)
{
	if(TX0IE)
		return 0;
	if(len>sizeof(Usart1Mgr.TXDBuf))
		return 0;
	Usart1Mgr.TXDLen = 0;
	Usart1Mgr.TXDLenBack = len;
	TX0IE = 1;
	return 1;
}
/*
static unsigned char revphase=0;
//在接收中断根据实际协议格式判断接收结束,比超时判断法快,但通用性较差
//以下编写根据协议0X55 + 数据长度 + 数据 + 校验,判断
void Usart1Mgr_DirectData(void)
{
	static unsigned char rxlen;
	Usart1Mgr.RXDOverTime = 0;	//最好加入超时判断,防止非协议数据导致卡死在非0状态,
	switch(revphase)
	{
		case 0:	//帧头
			Usart1Mgr.RXDBuf[0] = RX0REG;
			if(Usart1Mgr.RXDBuf[0]==0X55)	//判断帧头是否正确
			{
				Usart1Mgr.RXDLen = 1;
				revphase++;	//跳转下一状态
			}
		break;
		case 1: //数据长度
			rxlen = RX0REG;
			if(rxlen<=USART1_MGR_MAX_LENGTH-2)	//判断是否超出最大长度,此处-2是排除了帧头以及结尾的校验
			{
				Usart1Mgr.RXDBuf[Usart1Mgr.RXDLen++] = rxlen;
				rxlen++;	//长度+1,下一状态将校验一同接收
				revphase++;
			}
			else
			{
				revphase = 0;
				Usart1Mgr.RXDAnomalous = 1;
			}
		break;
		case 2: //数据接收,包括接收最后的校验
			Usart1Mgr.RXDBuf[Usart1Mgr.RXDLen++] = RX0REG;
			if(--rxlen==0)
			{
				Usart1Mgr.RXDEnd = 1;	//接收完成标志,或者直接在此处进行协议处理
				revphase = 0;
			}
		break;
		default:break;
	}
}
*/	
//通过超时判断是否接收结束,每隔一定时间调用一次
//如果使用Usart1Mgr_DirectData,则此段可用于复位状态
void Usart1Mgr_OverTime(void)
{
	if(Usart1Mgr.RXDLen)	//接收状态
	{
		if(Usart1Mgr.RXDLenback==Usart1Mgr.RXDLen)
		{
			Usart1Mgr.RXDEnd = 1;	
			//revphase=0;	//使用此法屏蔽上面一句
		}
		else
			Usart1Mgr.RXDLenback = Usart1Mgr.RXDLen;
	}
}

//串口1中断
void Usart1Mgr_Int(void)
{
	if(TX0IE&&TX0IF)
	{
		if(Usart1Mgr.TXDLen >= Usart1Mgr.TXDLenBack)	//发送完毕
		{
			TX0IE = 0;
		}
		else
		{
			TX0REG = Usart1Mgr.TXDBuf[Usart1Mgr.TXDLen++];	
		}
	}
	if(RX0IE&&RX0IF)
	{
		volatile unsigned char temp = RX0REG;	//先读取接收缓存
		if(!FR0ER)	//判断是否错误
		{
			if(Usart1Mgr.RXDEnd == 0)
			{		
				if(Usart1Mgr.RXDLen >= sizeof(Usart1Mgr.RXDBuf))
				{
					Usart1Mgr.RXDAnomalous = 1;
					Usart1Mgr.RXDLen = 0;
					Usart1Mgr.RXDLenback = 0;
				}
				else
				{
					Usart1Mgr.RXDBuf[Usart1Mgr.RXDLen++] = temp;
				}
			}
			//Usart1Mgr_DirectData(); //调用此函数则将上面的if语句屏蔽
		}
		else
			Usart1Mgr.RXDAnomalous = 1;
	}	
}

#ifdef _DEBUG
//使用printf需重写putch
void putch(char c)		//重写putch
{
  	while(T0MCLR==0){}
		TX0REG = c;
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


