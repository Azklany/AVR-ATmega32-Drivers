/*
 * T0_NM_Test.h
 *
 *  Created on: Oct 19, 2023
 *      Author: Mohamed
 */

#ifndef APPLICATION_TIMER0_NORMALMODE_TEST_T0_NM_TEST_H_
#define APPLICATION_TIMER0_NORMALMODE_TEST_T0_NM_TEST_H_

#include "../../HAL/LED/LED.h"
#include "../../MCAL/Timer 0/Timer_0.h"

STD_Type APP_Timer0_NMTest_u8NMTestInit();
STD_Type APP_Timer0_NMTest_u8NMTestAPP();
void CounterUP();

#endif /* APPLICATION_TIMER0_NORMALMODE_TEST_T0_NM_TEST_H_ */
