/*
 * FreeRTOS_T2.h
 *
 *  Created on: Nov 30, 2023
 *      Author: Mohamed
 */

#ifndef APPLICATION_FREERTOS_TEST_TWO_FREERTOS_T2_H_
#define APPLICATION_FREERTOS_TEST_TWO_FREERTOS_T2_H_

#include "../../HAL/LED/LED.h"
#include "../../HAL/Push Button/PushButton.h"
#include "../../FreeRTOS/FreeRTOS.h"
#include "../../FreeRTOS/task.h"

void APP_FreeRTOS_T2_T2Init();
void APP_FreeRTOS_T2_T2APP();

void task1_T2(void*pt);
void task2_T2(void*pt);

#endif /* APPLICATION_FREERTOS_TEST_TWO_FREERTOS_T2_H_ */
