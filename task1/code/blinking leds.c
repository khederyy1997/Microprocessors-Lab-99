/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
� Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project  :   task1
Version : 
Date    : 12/13/2020
Author :  kheder yazgi  
Company : 
Comments: 


Chip type               : ATmega16
Program type            : Application
AVR Core Clock frequency: 12.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/
#include <mega16.h>
#include <delay.h>

void main(void)
{


    DDRA = 0x00;   
    PINA = 0x00;  
       
    DDRB = 0xff;  
    PORTB = 0x00;
    
    #asm("sei")

    while (1) {  
            if(PINA.0==1) 
         
            { 
                     PORTB = 1;
                     delay_ms(50);
                     PORTB = 2;
                     delay_ms(50);
                     PORTB = 4;
                     delay_ms(50);
                     PORTB = 8;
                     delay_ms(50);
                     PORTB = 16;
                     delay_ms(50);
                     PORTB = 32;
                     delay_ms(50);
                     PORTB = 64;
                     delay_ms(50);
                     PORTB = 128;
                     delay_ms(50);
                     PORTB = 255;
                     delay_ms(50);
                     PORTB = 255;
                     delay_ms(50);
                     PORTB = 128;
                     delay_ms(50);
                     PORTB = 64;
                     delay_ms(50);
                     PORTB = 32;
                     delay_ms(50);
                     PORTB = 16;
                     delay_ms(50);
                     PORTB = 8;
                     delay_ms(50);
                     PORTB = 4;
                     delay_ms(50);
                     PORTB = 2;
                     delay_ms(50);
                     PORTB = 1;  
                     delay_ms(50);

                     
            } else {
                PORTB = 0x00; 
            
            }
    }
}