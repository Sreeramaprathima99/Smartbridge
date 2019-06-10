/*
 * even and odd LED's glowing.c
 *
 * Created: 04-06-2019 15:36:52
 * Author : Prathima Sreerama
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)

{
	DDRD = 0xFF;
	{
		while (1)
		{
			
		
	
			PORTD = 0x55;
			_delay_ms(220);
			
		
			PORTD = 0xAA;
			
			
			_delay_ms(220);
		}
	}
}



