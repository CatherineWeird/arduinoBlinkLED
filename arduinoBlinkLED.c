//Author: C. Jones
//Date: 22/03/2016

//Filename: arduinoBlinkLED.clock
//Version: 0.1

//Processor Atmel ATMega328

//tell the Compiler what speed the clock is running at

#define F_CPU 20000000UL
#include <avr/io.h>
#include <util/delay.h>

//PB5 is pin 13 on the arduino Uno and Duemilanove board
//It already has a LED connected to it
#define LED PB5

//Define the register to be used
#define LED_DDR DDRB

//Define the port to be used
#define LED_PORT PORTB

#define DELAYTIME 1000

#define setBit(sfr,bit)  (_SFR_BYTE(sfr) |=(1<<bit))
#define clearBit(sft,bit) (_SFR_BYTE(sfr) &= ~(1<<bit))

int main void(){

	//Init
	setBit(LED_DDR,LED);

	//Main Loop
	while(1){
		setBit(LED_DDR,LED);
		_delay_ms(DELAYTIME);

		clearBit(LED_DDR,LED);
		_delay_ms(DELAYTIME);
	}

}