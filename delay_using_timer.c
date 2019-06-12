/*
 * Code for Delay.c
 *
 * Created: 10-06-2019 12:12:39
 * Author : Prathima Sreerama
 */ 

#include <avr/io.h>
#define LED PB0
int main()
{
	uint8_t timerOverflowCount=0;
	DDRB=0xff;
	TCNT0=0x00;
	TCCR0=(1<<CS00)|(1<<CS02);
	
	while(1)
	{
		while((TIFR & 0x01)==0);
		TCNT0=0x00;
		TIFR=0x01;
		timerOverflowCount++;
		if(timerOverflowCount>=5)
		{
			PORTB^=(0x01<<LED);
			timerOverflowCount=0;
		}
	}
}