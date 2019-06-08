# Three_Mode_System
# About this repository
  This is a micro-controller project at FEHU "Facutly of Engineering Helwan University". 
# Project Details
  There are three modes, we choose the target mode by pressing on button 0, Button 0 by default
connected with external interrupt at PD2.
Any press on the Button will update the Mode and send the updating mode via UART
First press will switch to Mode A, second press will switch to Mode B and the 3rd press will switch to
Mode C
e.g: we need mode C so we will press on the button 2 times, first time the button will send Mode C via
UART then Microcontroller will receive mode C and will enter to mode C immediately 
## Mode A: **alarm system for an oven**
  A led and buzzer will change their values based on the value of ADC0
  * If ADC0 > 100 buzzer duty = 20 led duty = 100
  * If ADC0 > 300 buzzer duty = 40 led duty = 70
  * If ADC0 > 600 buzzer duty = 60 led duty = 30
  * If ADC0 > 900 buzzer duty = 80 led duty = 10
## Mode B:
   if LDR value is less than 300, the lamp which connected to relay, will be turned on
(you can use ADC1 as LDR sensor)
## Mode C:
  use the kit as a calculator in the second line of LCD, Number should be from 0 to 9, and the
operation is + - * /
e.g : 1+3=4 

#### NOTES:
  * Current mode should be appeared in LCD of the kit at first line.
  * Assume any variables not given.

# PREREQUISITES
  1. A good knowledge to UART, Timer, GPIO, interrupt, PWM, ADC, LCD, EEPROM and keypad.
  2. Good knowledge in C programming, Embedded C.
  3. Atmel AVR studio , khazam or extreme burner.
