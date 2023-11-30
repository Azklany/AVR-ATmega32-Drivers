/*
 * FreeRTOS_T2.c
 *
 *  Created on: Nov 30, 2023
 *      Author: Mohamed
 */

#include "FreeRTOS_T2.h"

extern u8 Glob_PB2_u8PinValue;

void APP_FreeRTOS_T2_T2Init() {
	HAL_LED_u8LedInit(LED0_PORT, LED0_PIN);
	HAL_LED_u8LedInit(LED1_PORT, LED1_PIN);
	HAL_PushButton_u8PushButtonInit(PushButton2_PORT, PushButton2_PIN);
}

void APP_FreeRTOS_T2_T2APP() {
	xTaskCreate(task1_T2, "task1", 80, 0, 1, 0);
	xTaskCreate(task2_T2, "task2", 80, 0, 2, 0);
	vTaskStartScheduler();
}

void task1_T2(void*pt) {
	while (1) {
		HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, LED_TOG);
		vTaskDelay(100);
	}

}

void task2_T2(void*pt) {
	while (1) {
		HAL_PushButton_u8PushButtonCheck(PushButton2_PORT, PushButton2_PIN);
		if (Glob_PB2_u8PinValue == 1)
			HAL_LED_u8LedMode(LED1_PORT, LED1_PIN, LED_ON);
		else
		HAL_LED_u8LedMode(LED1_PORT, LED1_PIN, LED_OFF);
		vTaskDelay(100);
	}
}

