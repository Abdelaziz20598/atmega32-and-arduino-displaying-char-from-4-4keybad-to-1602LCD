/*****************************************************************/
/* Autor        : BASSEM HUSSEIN                                 */ 
/* Date         : 2/9/2021                                       */ 
/* File         : GPIO_interface                                 */ 
/* Version      : V1.0                                           */ 
/* LOG          :                                                */ 
/*****************************************************************/ 


#ifndef  GPIO_INTERFACE_H
#define  GPIO_INTERFACE_H


#define  GPIOA    0 
#define  GPIOB    1 
#define  GPIOC    2 
#define  GPIOD    3

#define  INPUT    0 
#define  OUTPUT   1 

#define  HIGH     1 
#define  LOW      0


/* pins */ 
 
void  GPIO_voidSetPinDDR(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Mode);  

void  GPIO_voidWritePin(u8 copy_u8Port, u8 copy_u8Pin , u8 copy_u8Value);

void  GPIO_voidTogglePin(u8 copy_u8Port , u8 copy_u8Pin ); 

u8 GPIO_u8ReadPin(u8 copy_u8Port, u8 copy_u8Pin);


/*  port */ 
void GPIO_voidSetPortDDR(u8 copy_u8Port, u8 copy_u8Mode); 

void GPIO_voidWritePort(u8 copy_u8Port, u8 copy_u8Value);


/*  low nibble */ 

void  GPIO_voidSetLowNibbleDDR(u8 copy_u8Port , u8 copy_u8Mode) ;

void  GPIO_voidWriteLowNibble(u8 copy_u8Port , u8 copy_u8Value) ; 

/* high nibbel */ 

void  GPIO_voidSetHighNibbleDDR(u8 copy_u8Port , u8 copy_u8Mode) ;

void  GPIO_voidWriteHighNibble(u8 copy_u8Port , u8 copy_u8Value) ; 


#endif