// import the needed Libraries
#include <avr/io.h>
#include <avr/interrupt.h>
#include "ModeA.h"
#include "ModeB.h"
#include "ModeC.h"

// define Button0_pressed case
#define  Button0_pressed !(PIND & (1 << PIND2))

int main(void)
{
	DDRD &= ~(1 << DDD2); // set PD2 as an input
	PORTD |= (1 << PORTD2); // turn on PullUP resistance
    EICRA |= (1 << ISC00); // Enable Interrupt at any Change
	EIMSK |= (1 << INT0); // Enable external Interrupt Mask
	sei(); // Enable interrupts by setting global interrupt Mask

	while (1)
    {
		// Do Nothing
    }
}

// Interrupt actions
ISR(INT0_vect){

	if (Button0_pressed) {

		if (Button0_pressed){

			if(Button0_pressed){
		// pressed 3 times, Mode A will be executed
				ModeC();
			}
		// pressed 2 times, Mode B will be executed
			ModeB();
		}
		// pressed only one time, Mode A will be executed
		ModeA();
	}
}
