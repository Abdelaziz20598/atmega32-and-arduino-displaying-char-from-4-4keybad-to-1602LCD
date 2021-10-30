/*****************************************************************/
/* Autor        : BASSEM HUSSEIN                                 */ 
/* Date         : 16/9/2021                                      */ 
/* File         : GPIO_prgram                                    */ 
/* Version      : V1.1                                           */ 
/* LOG          :1_Add Low Nibble Function                       */ 
/*              :2_Add High Nibble Function                      */
/*              :3_Add Low Nibble Write function                 */
/*              :4_Add High Nibble Write Function                */
/*****************************************************************/ 


#ifndef  GPIO_PROGRAM_C
#define  GPIO_PROGRAM_C


#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "GPIO_private.h"

#include "GPIO_config.h"
#include "GPIO_interface.h"


/*pins */

 
void  GPIO_voidSetPinDDR(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Mode){
	


	switch (copy_u8Port){
		
		case GPIOA: 
		      if (copy_u8Mode ==OUTPUT){		  
				              SET_BIT(DDRA,copy_u8Pin); 
				  
			  }
			    else{	  
                               CLR_BIT(DDRA,copy_u8Pin); 		  
			      }
			  break; 


        case GPIOB: 
		     if (copy_u8Mode ==OUTPUT){		  
				                    SET_BIT(DDRB,copy_u8Pin); 
				  
			  }else{	  
				     CLR_BIT(DDRB,copy_u8Pin);
			  }
			  break; 
			  
			  
	    case GPIOC:
		       if (copy_u8Mode ==OUTPUT){		  
                               SET_BIT(DDRC,copy_u8Pin); 
				  
			  }else{ 	  
                             CLR_BIT(DDRC,copy_u8Pin); 		  
			  } 
			  break; 
			  
		case GPIOD: 
		
		      if (copy_u8Mode ==OUTPUT){		  
                        SET_BIT(DDRD,copy_u8Pin); 
				  
			  }else{	  
				         CLR_BIT(DDRD,copy_u8Pin);
			  } 
			  break; 
			  
		default: 
		    break ;
			
	}
}


void GPIO_voidWritePin( u8 copy_u8Port , u8 copy_u8Pin, u8 copy_u8Value){
	
	
	switch(copy_u8Port) {
		
		case GPIOA: 
		    if(copy_u8Value == HIGH){
				
				SET_BIT(PORTA,copy_u8Pin); 
			}else{
				
				CLR_BIT(PORTA,copy_u8Pin); 	
			}
			break; 
			
		case GPIOB: 
		    if(copy_u8Value == HIGH){
				
				SET_BIT(PORTB,copy_u8Pin); 	
			}else{
				 CLR_BIT(PORTB,copy_u8Pin);
			}
			break; 
			
        case GPIOC: 
		    if(copy_u8Value == HIGH){
				
				SET_BIT(PORTC,copy_u8Pin); 
			}else{
				
				CLR_BIT(PORTC,copy_u8Pin); 
			}
			break; 
			
        case GPIOD: 
		    if(copy_u8Value == HIGH){
				
				SET_BIT(PORTD,copy_u8Pin); 
				
			}else{
				
				CLR_BIT(PORTD,copy_u8Pin); 	
			}
             break; 
		default: 
		    break; 
			
			
	}
	
}
			
void GPIO_voidTogglePin(u8 copy_u8Port , u8 copy_u8Pin){
	
	
	
	
	switch (copy_u8Port){
		
		
		case GPIOA: 
		
		    TOG_BIT(PORTA,copy_u8Pin); 
			
			break ; 
			
		case GPIOB: 
		
		    TOG_BIT(PORTB,copy_u8Pin);
		    
			break; 
			
	    case GPIOC: 
		     
			 TOG_BIT(PORTC, copy_u8Pin); 
			 
			 break; 
			 
		case  GPIOD:
		
		     TOG_BIT(PORTD, copy_u8Pin); 
			 
			 break; 
			 
	    default: 
		
		    break; 
			
	}
	
}

u8 GPIO_u8ReadPin(u8 copy_u8Port, u8 copy_u8Pin){
	


     u8 local_u8ReturnValue ; 
	 
	 switch(copy_u8Port){
		 
		 case GPIOA:
		 
             local_u8ReturnValue = GET_BIT(PINA,copy_u8Pin);
             break; 
		   
		 case GPIOB: 
		 
              local_u8ReturnValue = GET_BIT(PINB,copy_u8Pin);
              break; 
			  
	     case GPIOC: 
		 
              local_u8ReturnValue = GET_BIT(PINC,copy_u8Pin);
              break;
			  
		 case GPIOD:  
		 
              local_u8ReturnValue = GET_BIT(PIND,copy_u8Pin);
              break;
			  
			  
		default: 
		    break;
			
	 }
	 
	 return local_u8ReturnValue; 
	 
}
	
	
/*port */ 
void GPIO_voidSetPortDDR(u8 copy_u8Port, u8 copy_u8Mode){
	
	
	
	
	
	switch (copy_u8Port){
		
		case GPIOA: 
		
		     DDRA = copy_u8Mode; 
			 break; 
			 
		case GPIOB: 
		
		     DDRB = copy_u8Mode; 
			 break;
			 
			 
		case GPIOC: 
		
		     DDRC = copy_u8Mode; 
			 break;
			 
			 
		case GPIOD: 
		
		     DDRD = copy_u8Mode; 
			 break;
			 
		default: 
		    break; 
			
	}
	
}

void GPIO_voidWritePort(u8 copy_u8Port , u8 copy_u8Value){
	
	
	
	switch(copy_u8Port){
		
		case  GPIOA: 
		     
			 PORTA = copy_u8Value; 
			 break; 
			 
		case  GPIOB: 
               PORTB = copy_u8Value; 
			   break; 
			   
			   
		case  GPIOC: 
               PORTC = copy_u8Value; 
			   break;
			   
			   
		case  GPIOD: 
               PORTD = copy_u8Value; 
			   break;
			   
		default: 
		    break; 
			
	}
	
}


/*low nibble */

 
void  GPIO_voidSetLowNibbleDDR(u8 copy_u8Port , u8 copy_u8Mode){
	

   
   u8 local_u8Counter ;  
   
   if (copy_u8Mode ==OUTPUT ) {
	   
	   for(local_u8Counter = 0 ; local_u8Counter <4 ; local_u8Counter ++) {
		   
		   
		   GPIO_voidSetPinDDR(copy_u8Port , local_u8Counter , OUTPUT ) ;  
		   
		   
	   }
   }
   else {
		
		for(local_u8Counter = 0 ; local_u8Counter < 4 ; local_u8Counter ++ ) {
			
			GPIO_voidSetPinDDR(copy_u8Port , local_u8Counter , INPUT) ; 
		}
	}
	
}
   
void  GPIO_voidWriteLowNibble(u8 copy_u8Port , u8 copy_u8Value) {
	
	
	copy_u8Value &= 0x0f  ; 
	
	switch (copy_u8Port ){
		case GPIOA  :  
		  
		    PORTA &= 0xf0 ;
			PORTA |= copy_u8Value ; 
			break ;
			
		case GPIOB  :  
		  
		    PORTB &= 0xf0 ;
			PORTB |= copy_u8Value ; 			
			break ; 
		
		case GPIOC  :  
		  
		    PORTC &= 0xf0 ;
			PORTC |= copy_u8Value ; 
			break ; 
		
		case GPIOD  :  
		  
		    PORTD &= 0xf0 ;
            PORTD |= copy_u8Value ; 			
			break ; 
		default : 
		
		   break ; 
		   
	}
		
}


/*high nibble */ 


void  GPIO_voidSetHighNibbleDDR(u8 copy_u8Port , u8 copy_u8Mode){
	
 
   u8 local_u8Counter ;  
   
   if (copy_u8Mode ==OUTPUT ) {
	   
	   for(local_u8Counter = 4; local_u8Counter <8 ; local_u8Counter ++) {
		   
		   
		   GPIO_voidSetPinDDR(copy_u8Port , local_u8Counter , OUTPUT ) ;  
		   
		   
	   }
   }
   else {
		
		for(local_u8Counter = 4 ; local_u8Counter < 8 ; local_u8Counter ++ ) {
			
			GPIO_voidSetPinDDR(copy_u8Port , local_u8Counter , INPUT) ; 
		}
	}
	
}
    
void  GPIO_voidWriteHighNibble(u8 copy_u8Port , u8 copy_u8Value){
	
	copy_u8Value &= 0xf0  ; 
	
	switch (copy_u8Port ){
		case GPIOA  :  
		  
		    PORTA &= 0x0f ;
			PORTA |= copy_u8Value ; 
			break ;
			
		case GPIOB  :  
		  
		    PORTB &= 0x0f ;
			PORTB |= copy_u8Value ; 			
			break ; 
		
		case GPIOC  :  
		  
		    PORTC &= 0x0f ;
			PORTC |= copy_u8Value ; 
			break ; 
		
		case GPIOD  :  
		  
		    PORTD &= 0x0f ;
            PORTD |= copy_u8Value ; 			
			break ; 
		default : 
		
		   break ; 
		   
	}
		
}
   
	   

#endif