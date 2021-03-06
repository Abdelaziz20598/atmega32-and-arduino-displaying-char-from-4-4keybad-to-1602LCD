/******************************************************************/
/* Author    : BASSEM HUSSEIN                                     */                          
/* Data      : 1/9/2021                                           */
/* File      : BIT_MATH                                           */ 
/* Version   : V1.0                                               */
/* LOG       :                                                    */
/******************************************************************/


#ifndef BIT_MATH_H
#define BIT_MATH_H


          #define SET_BIT(reg,bit)        reg|=(1<<bit)

          #define CLR_BIT(reg,bit)        reg&=(~(1<<bit))
		  
          #define GET_BIT(reg,bit)        (reg&(1<<bit))>>bit 
		  
          #define TOG_BIT(reg,bit)        reg^=(1<<bit)




#endif



