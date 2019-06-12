/*
 * Relay sensor.c
 *
 * Created: 11-06-2019 15:44:25
 * Author : Prathima Sreerama
 */ 


#ifndef F_CPU
#define F_CPU 16000000UL
#define LED_OUTPUT PORTB
#define PIR_INPUT PINC
#include <avr/io.h>
#include <util/delay.h>
#endif

int main(void)
{
	DDRC=0xFF;
	while(1)
	{
	  PORTC=0xFF;
	  _delay_ms(4000);
	  PORTC	=0x00;
	  _delay_ms(2000);
	}
}