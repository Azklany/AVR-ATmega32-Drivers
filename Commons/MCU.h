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

#define SREG (*(volatile u8*)0x5F)
#define GICR (*(volatile u8*)0x5B)
#define MCUCR (*(volatile u8*)0x55)

//#define GIE (*(volatile u8*)0x5f)


#endif /* COMMONS_MCU_H_ */
