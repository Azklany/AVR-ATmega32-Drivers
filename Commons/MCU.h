/*
 * MCU.h
 *
 *  Created on: Sep 24, 2023
 *      Author: Mohamed
 */

#ifndef COMMONS_MCU_H_
#define COMMONS_MCU_H_

#include "STD_Types.h"

#define DDRA (*(volatile u8*)0x3A)
#define DDRB (*(volatile u8*)0x37)
#define DDRC (*(volatile u8*)0x34)
#define DDRD (*(volatile u8*)0x31)

#define PORTA (*(volatile u8*)0x3B)
#define PORTB (*(volatile u8*)0x38)
#define PORTC (*(volatile u8*)0x35)
#define PORTD (*(volatile u8*)0x32)

#define PINA (*(volatile u8*)0x39)
#define PINB (*(volatile u8*)0x36)
#define PINC (*(volatile u8*)0x33)
#define PIND (*(volatile u8*)0x30)

//interrupt
#define SREG (*(volatile u8*)0x5F)
#define GICR (*(volatile u8*)0x5B)
#define GIFR (*(volatile u8*)0x5A)
#define MCUCR (*(volatile u8*)0x55)
#define MCUCSR (*(volatile u8*)0x54)

//ADC
#define ADMUX (*(volatile u8*)0x27)
#define ADCSRA (*(volatile u8*)0x26)
#define ACDH (*(volatile u8*)0x25)
#define ACDL (*(volatile u8*)0x24)
#define SFIOR (*(volatile u8*)0x50)

//Timer0
#define TIMSK (*(volatile u8*)0x59)
#define OCR0 (*(volatile u8*)0x5c)
#define TCCR0 (*(volatile u8*)0x53)
#define TCNT0 (*(volatile u8*)0x52)


//#define GIE (*(volatile u8*)0x5f)


#endif /* COMMONS_MCU_H_ */
