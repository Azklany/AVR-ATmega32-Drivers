/*
 * FreeRTOS_T1.h
 *
 *  Created on: Nov 26, 2023
 *      Author: Mohamed
 */

#ifndef APPLICATION_FREERTOS_TEST_ONE_FREERTOS_T1_H_
#define APPLICATION_FREERTOS_TEST_ONE_FREERTOS_T1_H_

#include "../../HAL/LED/LED.h"
#include "../../FreeRTOS/FreeRTOS.h"
#include "../../FreeRTOS/task.h"

void APP_FreeRTOS_T1_T1Init();
void APP_FreeRTOS_T1_T1APP();

void task1(void*pt);
void task2(void*pt);
void task3(void*pt);


#endif /* APPLICATION_FREERTOS_TEST_ONE_FREERTOS_T1_H_ */
