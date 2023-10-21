/*
 * Led_Blink.h
 *
 *  Created on: Oct 19, 2023
 *      Author: Mohamed
 */

#ifndef APPLICATION_LED_BLINK_BY_TIMER_LED_BLINK_H_
#define APPLICATION_LED_BLINK_BY_TIMER_LED_BLINK_H_

#include "../../HAL/LED/LED.h"
#include "../../HAL/Seven Segment/Seven_Segment.h"
#include "../../MCAL/Timer 0/Timer_0.h"


STD_Type APP_Timer0_u8LedBlinkInit();
STD_Type APP_Timer0_u8LedBlinkAPP();
void BlinkCounterUP();

#endif /* APPLICATION_LED_BLINK_BY_TIMER_LED_BLINK_H_ */
