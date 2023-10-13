/******************* (C) COPYRIGHT 2014~2018 MASSES CHIP ************************
* File Name          : MassesChip_Define.h
* Author             : MASSES CHIP
* Version            : V1.00
* Date               : 2018/08/01
********************************************************************************
 


*******************************************************************************/

#ifndef __MAEESECHIP_DEFINE__
#define __MAEESECHIP_DEFINE__


#define FALSE	 0
#define TRUE	 1
#define OK       1
#define FAIL     0

typedef unsigned char   BYTE;
typedef unsigned char   uchar;
typedef unsigned int    uint;
typedef unsigned long   ulong;

typedef unsigned short  WORD;
typedef unsigned long   DWORD;

typedef	signed char     s8;
typedef	signed int      s16;
typedef	signed long     s32;

typedef	unsigned char	u8;
typedef	unsigned int  u16;
typedef	unsigned long	u32;

typedef	const signed char      sc8; /*!< Read Only */ 
typedef const signed int       sc16;/*!< Read Only */ 
typedef	const signed long      sc32;/*!< Read Only */ 

typedef	const unsigned char    uc8; /*!< Read Only */ 
typedef	const unsigned int     uc16;/*!< Read Only */ 
typedef	const unsigned long    uc32;/*!< Read Only */ 

typedef union{
struct {    
        unsigned  b0         : 1; 
        unsigned  b1         : 1; 
        unsigned  b2         : 1; 
        unsigned  b3         : 1;
        unsigned  b4         : 1; 
        unsigned  b5         : 1;
        unsigned  b6         : 1; 
        unsigned  b7         : 1;
        }; 
        
}ob8; //只能位操作 
//exp. 
//ob8 flag;
//define flag0 flag.b0 

typedef union{
struct {    
        unsigned  b0         : 1; 
        unsigned  b1         : 1; 
        unsigned  b2         : 1; 
        unsigned  b3         : 1;
        unsigned  b4         : 1; 
        unsigned  b5         : 1;
        unsigned  b6         : 1; 
        unsigned  b7         : 1;
        }oneBit;   
       unsigned char allBit;    
}ab8; //可位操作，也可字节操作
//exp. 
//ab8 flag;
//define flag0 flag.oneBit.b0 
//flag.allBit = 0;全清除


#define LongToBin(n) \
(                    \
((n >> 21) & 0x80) | \
((n >> 18) & 0x40) | \
((n >> 15) & 0x20) | \
((n >> 12) & 0x10) | \
((n >>  9) & 0x08) | \
((n >>  6) & 0x04) | \
((n >>  3) & 0x02) | \
((n      ) & 0x01)   \
)
#define Bin(n) LongToBin(0x##n##l)	//write binary charactor set,exsample : Bin(11111111) = 0xff
#define B(n)   LongToBin(0x##n##l)	//write binary charactor set,exsample : B(11111111) = 0xff

#endif

/*********************************END OF FILE************************************/
/*******************(C) COPYRIGHT 2018 Masses-Chip ******************************/   
