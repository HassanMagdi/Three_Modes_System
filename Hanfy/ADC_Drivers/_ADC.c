/*
 * _ADC.c
 *
 * Created: 6/13/2019 6:36:39 PM
 *  Author: Abdullah
 */ 
#include "_ADC.h"
#include <avr/io.h>


void adc_init(){
	ADMUX = (1<<REFS0);
	ADCSRA = (1<<ADEN)| (1<<ADPS1)|(1<<ADPS0);
	}
	
unsigned intadc_read(unsigned char ch)
{
	ADMUX |= ch;
	ADCSRA |= (1<<ADSC);
	while(ADCSRA & (1<<ADSC));
	return ADC;
	}
