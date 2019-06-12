/*
 * Seven segment display.c
 *
 * Created: 10-06-2019 09:56:07
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
			 PORTD = 0x3F;
			 _delay_ms(220);
			 PORTD = 0x00;
			 _delay_ms(220);
			 PORTD = 0x06;
			 _delay_ms(220);
			 PORTD = 0x00;
			 _delay_ms(220);
			 PORTD = 0x5B;
			 _delay_ms(220);
			 PORTD = 0x00;
			 _delay_ms(220);
			 PORTD = 0x4F;
			 _delay_ms(220);
			 PORTD = 0x00;
			 _delay_ms(220);
			 PORTD = 0x66;
			 _delay_ms(220);
			 PORTD = 0x00;
			 _delay_ms(220);
			 PORTD = 0x6D;
			 _delay_ms(220);
			 PORTD = 0x00;
			 _delay_ms(220);
			 PORTD = 0x7D;
			 _delay_ms(220);
			 PORTD = 0x00;
			 _delay_ms(220);
			 PORTD = 0x07;
			 _delay_ms(220);
			 PORTD = 0x00;
			 _delay_ms(220);
			 PORTD = 0x7F;
			 _delay_ms(220);
             PORTD = 0x00;
			 _delay_ms(220);
			 PORTD = 0x67;
			 _delay_ms(220);
			 PORTD = 0x00;
			 _delay_ms(220);
			  PORTD = 0x77;
			  _delay_ms(220);
			  PORTD = 0x00;
			  _delay_ms(220);
			  PORTD = 0x7C;
			  _delay_ms(220);
			   PORTD = 0x00;
			   _delay_ms(220);
			   PORTD = 0x39;
			   _delay_ms(220);
			   PORTD = 0x00;
			   _delay_ms(220);
			    PORTD = 0x5E;
			    _delay_ms(220);
			    PORTD = 0x00;
			    _delay_ms(220);
			    PORTD = 0x79;
			    _delay_ms(220);
				 PORTD = 0x00;
				 _delay_ms(220);
				 PORTD = 0xF1;
				 _delay_ms(220);
				 PORTD = 0x00;
		 }

	 }
 }