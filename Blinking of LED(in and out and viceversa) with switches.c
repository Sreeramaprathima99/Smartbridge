/*
 * Blinking of LED(in and out) with switch.c
 *
 * Created: 10-06-2019 13:16:17
 * Author : Prathima Sreerama
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0x00;
	DDRD &=~(1<<PD0);
	DDRA &=~(1<<PA0);
	while(1)
	{
		if((PIND & (1<<PD0))==0)
		{
			PORTC = 0x18;
			_delay_ms(220);
			PORTC = 0x24;
			_delay_ms(220);
			PORTC = 0x42;
			_delay_ms(220);
			PORTC = 0x81;
			_delay_ms(220);
			
		}
		if((PINA & (1<<PA0))==0)
		{
			
			PORTC = 0x81;
			_delay_ms(220);
			PORTC = 0x42;
			_delay_ms(220);
			PORTC = 0x24;
			_delay_ms(220);
			PORTC = 0x18;
			_delay_ms(220);
		}
	}
}
