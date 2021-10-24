/*****************************************************************/
/* Autor        : BASSEM HUSSEIN                                 */ 
/* Date         : 24/10/2021                                      */ 
/* File         : KEYPAD_PROGRAM                                    */ 
/* Version      : V1.0                                           */ 
/* LOG          :                                                */ 
/*****************************************************************/


#include "STD_TYPES.h"
#include "BIT_MATH.h" 

#include "GPIO_interface.h" 

#include "KEYPAD_interface.h"
#include "KEYPAD_private.h" 
#include "KEYPAD_config.h" 


u8 keypad_u8checkPress(u8 copy_u8Port) {
	
	u8 Row , Coloumn , x , Return_val = NOT_PRESSED; 
	for ( Coloumn = 0 ; Coloumn < 4 ; Coloumn ++) 
	{
		
		 GPIO_voidSetPortDDR(copy_u8Port , (0b00010000<< Coloumn)) ; 
		 GPIO_voidWritePort(copy_u8Port ,( ~ (0b00010000 << Coloumn ))); 
		 for (Row = 0 ; Row < 4 ; Row ++ ) 
         {
			 x = GPIO_u8ReadPin(copy_u8Port , Row ) ;
			 if (x == 0) 
			 {
				 Return_val  = KEYPAD_u8AdjustKeyNumber((Row * 4 ) + Coloumn + 1 );
				 break ; 
			 }
		 }
	}
	return Return_val ; 
}


static u8 KEYPAD_u8AdjustKeyNumber ( u8 copy_u8ButtonNumber) {
	
	u8 Return_val ; 
	
	switch (copy_u8ButtonNumber )
	{
		case 1 : Return_val = '7'; 
		         break; 
		case 2 : Return_val = '8';
		         break; ; 
		case 3 : Return_val = '9'; 
		         break; 
		case 4 : Return_val = '/'; 
		         break; 
		case 5 : Return_val = '4'; 
		         break; 
		case 6 : Return_val = '5'; 
		         break; 
		case 7 : Return_val = '6'; 
		         break; 
		case 8 : Return_val = '*'; 
		         break; 
		case 9 : Return_val = '1'; 
		         break; 
		case 10 : Return_val = '2'; 
		         break; 
	    case 11 : Return_val = '3'; 
		         break; 
		case 12 : Return_val = '-'; 
		         break; 
		case 13 : Return_val = ' '; 
		         break; 
		case 14 : Return_val = '0'; 
		         break; 
		case 15 : Return_val = '='; 
		         break; 
		case 16 : Return_val = '+'; 
		          break; 
		default : 
		          break; 
				 
	}
	return Return_val; 
}

	
				 
		
		
		



	
