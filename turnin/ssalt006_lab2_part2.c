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

	//port A as input
	DDRA = 0x00;
	PORTA = 0xFF;

	//port C as output
	DDRC = 0xFF;
	PORTC = 0x00;

	//variable to hold count of available car spaces 
	unsigned char cntTaken;

	//variables used in for loop to count through lower nibble of A input
	unsigned char currBit;
	unsigned char i = 0;
       
	while(1){

		cntTaken = 0;
		for( i = 0; i < 4; ++i){
			
			
			currBit = (PINA >> i) & 0x01;		
			cntTaken = currBit + cntTaken;
	
		

		}//end for to iterate through PINA
		
		unsigned char cntavail = 4 - cntTaken;

		PORTC = cntavail;

	}//end while loop
	
	


    return 1;
}

