
#include <mega16.h>
#include <delay.h>
	 int digi_val[10]={0x40,0xF9,0x24,0x30,0x19,0x12,0x02,0xF8,0x00,0x10};


 int overflow=0;
 int i =0;


interrupt [TIM1_OVF] void timer1_ovf_isr(void)
{

    ++overflow;
        if(overflow == 100 ){

          if(i < 10){
           PORTD =  digi_val[i];
         }else{
           i = 0 ;
           PORTD = digi_val[i];

         }

         i++;

        }

           TCNT1H=0xFF;
           TCNT1L=0xF0;

}

void main(void)
{

PORTD=0b00000000;
TCCR1A=0x00;
TCCR1B=0x01;
TCNT1H=0xFF;
TCNT1L=0xF0;
MCUCR=(0<<ISC11) | (0<<ISC10) | (0<<ISC01) | (0<<ISC00);
MCUCSR=(0<<ISC2);
TIMSK=(0<<OCIE2) | (0<<TOIE2) | (0<<TICIE1) | (0<<OCIE1A) | (0<<OCIE1B) | (1<<TOIE1) | (0<<OCIE0) | (0<<TOIE0);




#asm("sei")

while (1)
      {





      }
}
