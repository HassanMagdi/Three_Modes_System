/*
 * UART.h
 *
 * Created: 6/8/2019 11:48:01 PM
 *  Author: Ahmed Alaa
 */ 
#include "headers.h"

#ifndef UART_H_
#define UART_H_
void UART_init();
void UART_TX(uint8_t data);
uint8_t UART_RX();




#endif /* UART_H_ */