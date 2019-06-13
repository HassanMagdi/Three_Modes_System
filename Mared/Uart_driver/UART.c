/*
 * UART.c
 *
 * Created: 6/8/2019 11:47:41 PM
 *  Author: Ahmed Alaa
 */ 
#include "UART.h"
void UART_init()
{	
	SETBIT(UCSR0B,RXEN0);
	SETBIT(UCSR0B,TXEN0);
	SETBIT(UCSR0B,UCSZ02);
	SETBIT(UCSR0C,UCSZ01);
	SETBIT(UCSR0C,UCSZ00);
	UBRR0L=51;
}
void UART_TX(uint8_t data)
{
	while(!READBIT(UCSR0A,UDRE0));
	UDR0=data;
	//while(!READBIT(UCSR0A,TXC0));
}
uint8_t UART_RX()
{
	uint8_t data;
	while(!READBIT(UCSR0A,RXC0));
	data= UDR0;
	return data;
}