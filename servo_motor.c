/*
 * Code for Servo motor.c
 *
 * Created: 12-06-2019 10:08:18
 * Author : Prathima Sreerama
 */ 
#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
int main()
{
	//configure timer-1
	TCCR1A|=(1<<COM1A1)|(1<<COM1B1)|(1<<WGM11); //Non inverted PWM
	TCCR1B|=(1<<WGM13)|(1<<WGM12)|(1<<CS11)|(1<<CS10); //Prescalar=64 Mode 14(fast PWM)
	ICR1=4999; //PWM=50Hz (period=20ms Standard)
	DDRD|=(1<<PD5); //PWM pins as Out
	while(1)
	{
		OCR1A=97; //0 degree
		_delay_ms(500);
		
		OCR1A=280; //90 degree
		_delay_ms(500);
		
		OCR1A=535; //180 degree
		_delay_ms(500);
	}
}
	

