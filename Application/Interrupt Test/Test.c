/*
 * Test.c
 *
 *  Created on: Oct 9, 2023
 *      Author: Mohamed
 */

#include "Test.h"

STD_Type APP_InterruptTest_u8InterruptTestInit() {
	MCAL_Interrupt_u8SetRegisterPin(SREG, SREG_Pin, Pin_High);
	MCAL_Interrupt_u8SetRegisterPin(GICR, GICR_Pin, Pin_High);
	MCAL_Interrupt_u8SetRegisterPin(MCUCR, MCUCR_Pin, Pin_High);
	HAL_LED_u8LedInit(3, 3);
	HAL_Buzzer_u8BuzzerInit(0, 3);
}


STD_Type APP_InterruptTest_u8InterruptTestAPP() {
	MCAL_Interrupt_EXIT_CallBack(LEDON);
}


void LEDON(){
	HAL_LED_u8LedMode(3,3,2);
	_delay_ms(2000);
	HAL_Buzzer_u8BuzzerMode(0,3,2);
}
