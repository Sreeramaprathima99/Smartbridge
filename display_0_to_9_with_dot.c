/*
 * Seven Segment Display upto 19 numbers.c
 *
 * Created: 10-06-2019 10:52:55
 * Author : Prathima Sreerama
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD= 0xFF;
	{
		PORTD = 0xFF;
		{
			PORTD = 0xBF;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0x86;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xDB;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xCF;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xE6;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xED;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xFD;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0x87;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xFF;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xE7;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xF7;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xFC;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xB9;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xDE;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xF9;
			_delay_ms(220);
			PORTD = 0x00;
			_delay_ms(220);
			PORTD = 0xF1;
			_delay_ms(220);
			PORTD = 0x00;
		}

	}
}