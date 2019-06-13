/*
 * Bluetooth.c
 *
 * Created: 13-06-2019 11:15:24
 * Author : Prathima Sreerama
 */

 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <inttypes.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define LED PORTB
char buffer[10];
 void USARTInit(uint16_t ubrr_value)
 {
	 //set Baud rate
	 UBRRL = ubrr_value;
	 UBRRH = (ubrr_value>>8);
	 UCSRC = (1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	 //enable the receiver and transmitter
	 UCSRB=(1<<RXEN)|(1<<TXEN);
 }

char USARTReadChar()
{
	//Wait until data is available
	while(!(UCSRA & (1<<RXC)))
	{
		//do nothing
	}
	return UDR;
}
void USARTWriteChar(char data)
{
	while(!(UCSRA & (1<<UDRE)))
	{
		//do nothing
	}
	UDR=data;
}
int main()
{
	USARTInit(77);
	DDRB=0xff; //PortB as output
	char data;
	LED=0;
	while(1)
	{
		data=USARTReadChar();
		if(data == '1')
		{
			LED |=0xff; //turn on LED
			//USART_SendString("LED_ON"); //send status of LED
		}
		else if(data == '2')
		{
			LED=0x00; //turn Off LED
			//USART_SendString("LED_OFF"); // Send status of LED
		}
		//else
		//USART_SendString("Select Proper option");//send message
	}
		return 0;
	
}