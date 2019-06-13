/*
 * keypad.c
 *
 * Created: 29/09/2018 10:16:25
 *  Author: DELL
 */ 
#include "HEADERS.h"
#include "keypad.h"

void keypad_inti()
{
	DDRC=0x0F;
	PORTC=0xF0;
	
}
static const uint8_t keypad_matrix[]=
{
	'7','4','1',
	'o','8','5','2',
	'0','9','6','3',
	'=','/','*','-','+'
};
uint8_t keypad_scan()
{
	PORTC=0b11111111;
	uint8_t i;
	for (i=0;i<4;i++)
	{
		CLRBIT(PORTC,i);
		if (READBIT(PINC,4) == 0) return keypad_matrix[0 + (i*4)];
		if (READBIT(PINC,5) == 0) return keypad_matrix[1 + (i*4)];
		if (READBIT(PINC,6) == 0) return keypad_matrix[2 + (i*4)];
		if (READBIT(PINC,7) == 0) return keypad_matrix[3 + (i*4)];
		SETBIT(PORTC,i);	
	}
	return 0;
}