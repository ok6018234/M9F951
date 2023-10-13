#ifndef _USART1_APP_H_
#define _USART1_APP_H_
#ifdef  _USART1_APP_C_
#define _USART1_APP_E_
#else
#define _USART1_APP_E_ extern
#endif

_USART1_APP_E_ void Usart1App_Send(void);
_USART1_APP_E_ void Usart1App_Receive(void);

#endif
