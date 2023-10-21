/*
 * T0_CTC_Test.h
 *
 *  Created on: Oct 19, 2023
 *      Author: Mohamed
 */

#ifndef APPLICATION_TIMER0_CTCMODE_TEST_T0_CTC_TEST_H_
#define APPLICATION_TIMER0_CTCMODE_TEST_T0_CTC_TEST_H_

#include "../../HAL/LED/LED.h"
#include "../../MCAL/Timer 0/Timer_0.h"

STD_Type APP_Timer0_CTCTest_u8CTCTestInit();
STD_Type APP_Timer0_CTCTest_u8CTCTestAPP();
void CTCCounterUP();

#endif /* APPLICATION_TIMER0_CTCMODE_TEST_T0_CTC_TEST_H_ */
