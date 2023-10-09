/*
 * main.c
 *
 *  Created on: Sep 24, 2023
 *      Author: Mohamed
 */

#include "main.h"
//#include <avr/interrupt.h>

//volatile u16 x;

void LEDON();

void main(void) {
	u8 Loc_u8Return_Value = E_NOT_OK;


	///////////////////////////////////////////////////
	//                    LCD
//	APP_NameShift_u8NameShiftInit();
//	APP_NameShift_u8NameShiftAPP();

//	APP_CustomChar_u8CustomCharInit();
//	APP_CustomChar_u8CustomCharAPP();
	//////////////////////////////////////////////////

//	                    intrupt
	APP_InterruptTest_u8InterruptTestInit();
	APP_InterruptTest_u8InterruptTestAPP();
	while(1){
	}
	//////////////////////////////////////////////////

	//                      KeyPad
//	APP_Calculator_u8CalculatorInit();
//	APP_Calculator_u8CalculatorAPP();

	///////////////////////////////////////////////////
	//ADC
//	sei();
//	HAL_LED_u8LedInit(2, 2);
//	HAL_LED_u8LedInit(2, 7);
//	HAL_LED_u8LedInit(3, 3);
//	ADMUX = 0b01000001;
//	ADCSRA = 0b10001111;
//	CLR_BIT(SFIOR, 7);
//	CLR_BIT(SFIOR, 6);
//	CLR_BIT(SFIOR, 5);

//	while (1) {
//		SET_BIT(ADCSRA, 6);
//		if (x <= 1000 && x>0) {
//			HAL_LED_u8LedMode(2, 2, 1);
//			HAL_LED_u8LedMode(2, 7, 0);
//			HAL_LED_u8LedMode(3, 3, 0);
//		} else if (x <= 2000 && x > 1000) {
//			HAL_LED_u8LedMode(2, 2, 0);
//			HAL_LED_u8LedMode(2, 7, 1);
//			HAL_LED_u8LedMode(3, 3, 0);
//		} else if (x <= 5000 && x > 2000) {
//			HAL_LED_u8LedMode(2, 2, 0);
//			HAL_LED_u8LedMode(2, 7, 0);
//			HAL_LED_u8LedMode(3, 3, 1);
//		}
//	}
	//////////////////////////////////////////////////

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

