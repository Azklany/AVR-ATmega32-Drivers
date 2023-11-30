/*
 * Test.h
 *
 *  Created on: Oct 9, 2023
 *      Author: Mohamed
 */

#ifndef APPLICATION_INTERRUPT_TEST_INTERRUPT_TEST_H_
#define APPLICATION_INTERRUPT_TEST_INTERRUPT_TEST_H_

#include "../../MCAL/Interrupt/Interrupt.h"
#include "../../HAL/Buzzer/Buzzer.h"
#include "../../HAL/LED/LED.h"

void APP_InterruptTest_u8InterruptTestInit();
void APP_InterruptTest_u8InterruptTestAPP();

void LEDON();

#endif /* APPLICATION_INTERRUPT_TEST_INTERRUPT_TEST_H_ */
