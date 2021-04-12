/*	Author: Skyler Saltos 
 *  Partner(s) Name: 
 *	Lab Section:022
 *	Assignment: Lab #4  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
   	 DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0

	
       


    /* Insert your solution below */
    while (1) {
	
	char door_sensor = PINA & 0x01;
        char light_sensor = PINA & 0x02;
	
	char lightON = 0x01;
	char lightOFF = 0x00;	
	
	if( (light_sensor == 0x00) && (door_sensor == 0x01) ){
	
		PORTB =  lightON;
		
	
	}//dark and door open so light garage
	
	else {

		PORTB = lightOFF;

	}//light is not on
	
    }
    return 1;
}

