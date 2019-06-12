/*
 * Top to down sequence with switch.c
 *
 * Created: 07-06-2019 15:19:51
 * Author : Prathima Sreerama
 */ 

#include <avr/io.h>

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	int i;
	DDRD = 0x00;
	DDRC = 0x01;
	while(1)
	{
		if((PIND & (1<<PD1))==0)
		{
			for(i=0;i<=7;)
			{
				PORTC|=(1<<i);
				_delay_ms(220);
				PORTC &=~(1<<i);
				_delay_ms(220);
				i++;
			}
		}
		
	}
}


