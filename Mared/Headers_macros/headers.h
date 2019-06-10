/*
 * headers.h
 *
 * Created: 08/09/2018 02:40:54 م
 *  Author: Dell
 */ 


#ifndef HEADERS_H_
#define HEADERS_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 12000000ul
#include <util/delay.h>
#define SETBIT(REG,BIT) (REG |= (1 << BIT))
#define CLRBIT(REG,BIT) (REG &=~ (1 << BIT))
#define TOGBIT(REG,BIT) (REG ^= (1 << BIT))
#define READBIT(REG,BIT) ((REG >> BIT)&1)



#endif /* HEADERS_H_ */