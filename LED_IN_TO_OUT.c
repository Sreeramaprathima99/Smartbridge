/*
 * LED_in_to_out.c
 *
 * Created: 12-06-2019 14:42:14
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
	
	while(1)
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
}


