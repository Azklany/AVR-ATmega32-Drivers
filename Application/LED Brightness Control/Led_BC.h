/*
 * Led_BC.h
 *
 *  Created on: Oct 20, 2023
 *      Author: Mohamed
 */

#ifndef APPLICATION_LED_BRIGHTNESS_CONTROL_LED_BC_H_
#define APPLICATION_LED_BRIGHTNESS_CONTROL_LED_BC_H_

#include "../../HAL/LED/LED.h"
#include "../../HAL/Push Button/PushButton.h"
#include "../../MCAL/Timer 0/Timer_0.h"

void APP_Timer0_u8LedBCInit();
void APP_Timer0_u8LedBCAPP();

#endif /* APPLICATION_LED_BRIGHTNESS_CONTROL_LED_BC_H_ */
