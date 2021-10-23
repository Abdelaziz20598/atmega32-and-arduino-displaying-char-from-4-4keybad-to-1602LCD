/*****************************************************************/
/* Autor        : BASSEM HUSSEIN                                 */ 
/* Date         : 2/9/2021                                       */ 
/* File         : GPIO_private                                   */ 
/* Version      : V1.0                                                     */ 
/* LOG          :                                      */ 
/*****************************************************************/


#ifndef  GPIO_PRIVATE_H
#define  GPIO_PRIVATE_H



                #define  DDRA            *((volatile u8*)0X3A)
				#define  PORTA           *((volatile u8*)0X3B)
				#define  PINA            *((volatile u8*)0X39) 
				
				
				#define  DDRB           *((volatile u8*)0X37)
				#define  PORTB          *((volatile u8*)0X38)
				#define  PINB           *((volatile u8*)0X36)
				
				
				
				#define  DDRC            *((volatile u8*)0X34)
				#define  PORTC           *((volatile u8*)0X35)
				#define  PINC            *((volatile u8*)0X33)
				
				
				#define  DDRD            *((volatile u8*)0X31)
				#define  PORTD           *((volatile u8*)0X32)
				#define  PIND            *((volatile u8*)0X30)






#endif