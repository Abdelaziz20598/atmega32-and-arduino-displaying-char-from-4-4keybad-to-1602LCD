/*
 * main.c
 *
 *  Created on: Oct 24, 2021
 *      Author: Tabarak
 */

#include"STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "UART_interface.h"

#include "KEYPAD_interface.h"
#define F_CPU 8000000UL
#include "util/delay.h"

int main ()
{
	u8 x ;
	USART_voidInit(9600);

	while(1)
	{
      do
      {
    	  x = keypad_u8checkPress(GPIOD);

      }while(x ==NOT_PRESSED);
      USART_voidSendByte(x);
      _delay_ms(250);


	}

}

