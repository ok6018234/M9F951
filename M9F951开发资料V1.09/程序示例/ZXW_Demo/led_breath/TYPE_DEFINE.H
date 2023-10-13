#ifndef _TYPE_DEFINE_H
#define _TYPE_DEFINE_H


#define   __I     volatile const       /*!< Defines 'read only' permissions                 */
#define   __IO    volatile             /*!< Defines 'read / write' permissions              */


typedef signed long  s32;
typedef signed int s16;
typedef signed char  s8;

typedef const signed long sc32;  /*!< Read Only */
typedef const signed int sc16;  /*!< Read Only */
typedef const signed char sc8;   /*!< Read Only */

typedef __IO signed long   vs32;
typedef __IO signed int    vs16;
typedef __IO signed char   vs8;

typedef __I signed long vsc32;  /*!< Read Only */
typedef __I signed int  vsc16;  /*!< Read Only */
typedef __I signed char vsc8;   /*!< Read Only */

typedef unsigned long  u32;
typedef unsigned int u16;
typedef unsigned char  u8;

typedef const unsigned long uc32;  /*!< Read Only */
typedef const unsigned int uc16;  /*!< Read Only */
typedef const unsigned char uc8;   /*!< Read Only */

typedef __IO unsigned long  vu32;
typedef __IO unsigned int vu16;
typedef __IO unsigned char  vu8;

typedef __I unsigned long vuc32;  /*!< Read Only */
typedef __I unsigned int vuc16;  /*!< Read Only */
typedef __I unsigned char vuc8;   /*!< Read Only */

typedef enum
{
	InValid,
	Valid,
	Valid_D,
	Valid_U,
}TYPE_VALID;


//真值枚举
typedef	 enum			
{
	FALSE = 0,
	TRUE  = 1
}bool;	

typedef  union 
{
	u16 U16;
	u8 U8[2];
	
}U16_UNION;

typedef  union 
{
	u32 U32;
	u8 U8[4];
	
}U32_UNION;

#endif
