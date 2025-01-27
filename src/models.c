/* ======================= Microscheme =======================
 * Definitions for specific hardware models
 * (C) 2014-2021 Ryan Suchocki, et al.
 * http://github.com/ryansuchocki/microscheme
 */

#include "models.h"

#include <stdbool.h>

model_info models[] = {
    {"MEGA",

     "atmega2560",
     "wiring",
     "115200",

     false,

     ".EQU	PORT13,	0x05	\n"
     ".EQU	DDR13,	0x04	\n"
     ".EQU	P13,	7		\n"

     // This is necessary to stay within 13-bit addresses!
     ".EQU	_ms_stack,	0x2000\n"

     ".EQU	UDR0,	0xC6	\n"
     ".EQU	UBRR0H,	0xC5	\n"
     ".EQU	UBRR0L,	0xC4	\n"
     ".EQU	UCSR0C,	0xC2	\n"
     ".EQU	UCSR0B,	0xC1	\n"
     ".EQU	UCSR0A,	0xC0	\n"
     ".EQU	TXEN0,	3		\n"
     ".EQU	RXEN0,	4		\n"
     ".EQU	UDRE0,	5		\n"
     ".EQU	TXC0,	6		\n"
     ".EQU	RXC0,	7		\n"
     ".EQU	BAUD_9600, 103	\n"

     ".EQU	ADMUX,	0x7C	\n"
     ".EQU	ADCSRA,	0x7A	\n"
     ".EQU	ADCH,	0x79	\n"
     ".EQU	ADCL,	0x78	\n"
     ".EQU	REFS0,	6	\n"
     ".EQU	ADSC,	6	\n"},
    {"UNO",

     "atmega328p",
     "arduino",
     "115200",

     false,

     ".EQU	PORT13,	0x05	\n"
     ".EQU	DDR13,	0x04	\n"
     ".EQU	P13,	5		\n"

     ".EQU	_ms_stack,	__stack\n"

     ".EQU	UDR0,	0xC6	\n"
     ".EQU	UBRR0H,	0xC5	\n"
     ".EQU	UBRR0L,	0xC4	\n"
     ".EQU	UCSR0C,	0xC2	\n"
     ".EQU	UCSR0B,	0xC1	\n"
     ".EQU	UCSR0A,	0xC0	\n"
     ".EQU	TXEN0,	3		\n"
     ".EQU	RXEN0,	4		\n"
     ".EQU	UDRE0,	5		\n"
     ".EQU	TXC0,	6		\n"
     ".EQU	RXC0,	7		\n"
     ".EQU	BAUD_9600, 103	\n"

     ".EQU	ADMUX,	0x7C	\n"
     ".EQU	ADCSRA,	0x7A	\n"
     ".EQU	ADCH,	0x79	\n"
     ".EQU	ADCL,	0x78	\n"
     ".EQU	REFS0,	6	\n"
     ".EQU	ADSC,	6	\n"},
    {"LEO",

     "atmega32u4",
     "avr109",
     "57600",

     true,

     ".EQU	PORT13,	0x08	\n"
     ".EQU	DDR13,	0x07	\n"
     ".EQU	P13,	7		\n"

     ".EQU	_ms_stack,	__stack\n"

     ".EQU	ADMUX,	0x7C	\n"
     ".EQU	ADCSRA,	0x7A	\n"
     ".EQU	ADCH,	0x79	\n"
     ".EQU	ADCL,	0x78	\n"
     ".EQU	REFS0,	6	\n"
     ".EQU	ADSC,	6	\n"}};

int numModels = sizeof(models) / sizeof(model_info);
