/*
 * Code for Stepper Motor.c
 *
 * Created: 12-06-2019 10:59:09
 * Author : Prathima Sreerama
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRA=0x0F; //Make PORTA lower pins as output
	int period=2;
	while(1)
	{
		//Rotate Stepper Motor clockwise with half-step sequence
		for(int i=0;i<50;i++)
		{
			PORTA=0x09;
			_delay_ms(period);
			PORTA=0x08;
			_delay_ms(period);
			PORTA=0x0c;
			_delay_ms(period);
			PORTA=0x06;
			_delay_ms(period);
			PORTA=0x04;
			_delay_ms(period);
			PORTA=0x02;
			_delay_ms(period);
			PORTA=0x03;
			_delay_ms(period);
			PORTA=0x01;
			_delay_ms(period);
		}
		PORTA=0x09; //Last step to initial position
		_delay_ms(period);
		_delay_ms(1000);
		
		
		//Rotate Stepper Motor anticlockwisevwith full-step sequence
		for(int i=0;i<50;i++)
		{
			PORTA=0x01;
			_delay_ms(period);
			PORTA=0x03;
			_delay_ms(period);
			PORTA=0x02;
			_delay_ms(period);
			PORTA=0x06;
			_delay_ms(period);
			PORTA=0x04;
			_delay_ms(period);
			PORTA=0x0C;
			_delay_ms(period);
			PORTA=0x08;
			_delay_ms(period);
			PORTA=0x09;
			_delay_ms(period);
		}
		PORTA=0x09;
		_delay_ms(period);
		_delay_ms(1000);
	}
}