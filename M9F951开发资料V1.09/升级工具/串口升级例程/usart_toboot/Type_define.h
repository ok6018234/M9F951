#ifndef _TYPE_DEFINE_H
#define _TYPE_DEFINE_H


#define   __I     volatile const       /*!< Defines 'read only' permissions                 */
#define   __IO    volatile             /*!< Defines 'read / write' permissions              */


typedef signed long  s32;
typedef signed short long s24;
typedef signed short s16;
typedef signed char  s8;


typedef const signed long sc32;  /*!< Read Only */
typedef const signed short long sc24;
typedef const signed int sc16;  /*!< Read Only */
typedef const signed char sc8;   /*!< Read Only */

typedef __IO signed long   vs32;
typedef __IO signed short long vs24;
typedef __IO signed int    vs16;
typedef __IO signed char   vs8;

typedef __I signed long vsc32;  /*!< Read Only */
typedef __I signed short long vsc24;
typedef __I signed int  vsc16;  /*!< Read Only */
typedef __I signed char vsc8;   /*!< Read Only */

typedef unsigned long  u32;
typedef unsigned short long  u24;
typedef unsigned int u16;
typedef unsigned char  u8;

typedef const unsigned long uc32;  /*!< Read Only */
typedef const unsigned short long  uc24;
typedef const unsigned int uc16;  /*!< Read Only */
typedef const unsigned char uc8;   /*!< Read Only */

typedef __IO unsigned long  vu32;
typedef __IO unsigned short long  vc24;
typedef __IO unsigned int vu16;
typedef __IO unsigned char  vu8;

typedef __I unsigned long vuc32;  /*!< Read Only */
typedef __I unsigned short long  vuc24;
typedef __I unsigned int vuc16;  /*!< Read Only */
typedef __I unsigned char vuc8;   /*!< Read Only */

typedef enum
{
	InValid,
	Valid,
	Valid_D,
	Valid_U,
}TYPE_VALID;

typedef	 enum			
{
	FALSE = 0,
	TRUE  = 1
}bool;	


typedef union
{
	struct 
	{    
        u8  b0 : 1; 
        u8  b1 : 1; 
        u8  b2 : 1; 
        u8  b3 : 1;
        u8  b4 : 1; 
        u8  b5 : 1;
        u8  b6 : 1; 
        u8  b7 : 1;
    };   
    u8 U8;
}U8_UNION;

typedef  union 
{
	struct 
	{    
        u16  b0 : 1; 
        u16  b1 : 1; 
        u16  b2 : 1; 
        u16  b3 : 1;
        u16  b4 : 1; 
        u16  b5 : 1;
        u16  b6 : 1; 
        u16  b7 : 1;
        u16  b8 : 1; 
        u16  b9 : 1; 
        u16  b10 : 1; 
        u16  b11 : 1;
        u16  b12 : 1; 
        u16  b13 : 1;
        u16  b14 : 1; 
        u16  b15 : 1;
    };
	u16 U16;
	u8 U8[2];
}U16_UNION;

typedef  union 
{
	u32 U32;
	u16 U16[2];	
	u8 U8[4];
}U32_UNION;

typedef  union 
{
	s16 S16;
	u8 U8[2];	
}S16_UNION;

typedef  union 
{
	s32 S32;
	u16 U16[2];
	u8 U8[4];
}S32_UNION;

typedef union
{
	float F32;
	u16 U16[2];
	u8 U8[4];
}F32_UNION;


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

#define InvertBit(dat,pos) (dat^=(1<<pos)) //reverse bit

#define SetBit(dat,pos) (dat|=(1<<pos))	
#define ClrBit(dat,pos) (dat&=~(1<<pos))
#define WriteBit(dat,pos,flag) (flag?SetBit(dat, pos):ClrBit(dat, pos))

#define GetBit(dat,pos) (dat&(1<<pos))

#endif
