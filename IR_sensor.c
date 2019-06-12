/*
 * Infrared Sensor.c
 *
 * Created: 11-06-2019 15:07:21
 * Author : Prathima Sreerama
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>

#define LED_OUTPUT PORTB
#define PIR_INPUT PINC


int main(void)
{
	DDRC = 0x00; //input port
	DDRB = 0xff; //output port
	while(1)
	{
		LED_OUTPUT=PIR_INPUT;//when sensor detected ,LED is high
	}
}
