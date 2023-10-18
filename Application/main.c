/*
 * main.c
 *
 *  Created on: Sep 24, 2023
 *      Author: Mohamed
 */

#include "main.h"
//#include <avr/interrupt.h>


//volatile u16 x;
volatile u16 counter;

//void LEDON();

void main(void) {
	u8 Loc_u8Return_Value = E_NOT_OK;

	///////////////////////////////////////////////////
	//                    LCD
//	APP_NameShift_u8NameShiftInit();
//	APP_NameShift_u8NameShiftAPP();

//	APP_CustomChar_u8CustomCharInit();
//	APP_CustomChar_u8CustomCharAPP();
	//////////////////////////////////////////////////

//	                    intrrupt
	APP_InterruptTest_u8InterruptTestInit();
	APP_InterruptTest_u8InterruptTestAPP();
	while(1){
//
	}
	//////////////////////////////////////////////////

	//          KeyPad
//	APP_Calculator_u8CalculatorInit();
//	APP_Calculator_u8CalculatorAPP();

	///////////////////////////////////////////////////
	//ADC

//	APP_PotTest_PotTestInit();
//	APP_PotTest_PotTestAPP();

	//////////////////////////////////////////////////
//	  Timer Normal
//	TCCR0 = 0b00000101;
//	TIMSK = 0b00000001;
//	MCAL_Interrupt_u8SetRegisterPin(SREG,7,1)
//	TCNT0 = 247;
//	HAL_LED_u8LedInit(3, 3);
//	while (1) {
//		if (counter == 62) {
//			HAL_LED_u8LedMode(3, 3, 2);
//			TCNT0 = 247;
//			counter = 0;
//		}
//	}
	//	  Timer CTC
//	TCCR0 = 0b00001011;
//	TIMSK = 0b00000010;
//	MCAL_Interrupt_u8SetRegisterPin(SREG, 7, 1);
//	HAL_LED_u8LedInit(3, 3);
//	OCR0 = 199;
//	while (1) {
//		if (counter == 1250) {
//			HAL_LED_u8LedMode(3, 3, 2);
//			counter = 0;
//		}
//	}

	// Fast
//	TCCR0 = 0b01001011;
//	TIMSK = 0b00000010;
//	MCAL_Interrupt_u8SetRegisterPin(SREG, 7, 1);
//	HAL_LED_u8LedInit(3, 3);
//	OCR0 = 199;
//	TCCR0 = 0b00001011;
//	while (1) {
//		if (counter == 1250) {
//			HAL_LED_u8LedMode(3, 3, 2);
//			counter = 0;
//		}
//	}

	///////////////////////////////////
//		if (Loc_u8Return_Value == E_NOT_OK) {
//			HAL_Buzzer_u8BuzzerInit(PortA, 3);
//			HAL_Buzzer_u8BuzzerMode(PortA, 3, Buzzer_ON);
//		}
//	}
}

//ISR(ADC_vect) {
////	u32 y = (ADCH << 2) | (ADCL >> 6);
//	 x = (((u32)ADC*5000) / 1024);
//
//}
//ISR(TIMER0_OVF_vect) {
//	counter++;
//}
//ISR(TIMER0_COMP_vect) {
//	counter++;
//}

