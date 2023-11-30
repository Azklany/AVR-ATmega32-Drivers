/*
 * FreeRTOS_T1.c
 *
 *  Created on: Nov 26, 2023
 *      Author: Mohamed
 */

#include "FreeRTOS_T1.h"

void APP_FreeRTOS_T1_T1Init() {
	HAL_LED_u8LedInit(LED0_PORT, LED0_PIN);
	HAL_LED_u8LedInit(LED1_PORT, LED1_PIN);
	HAL_LED_u8LedInit(LED2_PORT, LED2_PIN);
}

void APP_FreeRTOS_T1_T1APP() {
	xTaskCreate(task1, "task1", 80, 0, 1, 0);
	xTaskCreate(task2, "task2", 80, 0, 2, 0);
	xTaskCreate(task3, "task2", 80, 0, 3, 0);
	vTaskStartScheduler();
}

void task1(void*pt) {
	while (1) {
		HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, LED_TOG);
		vTaskDelay(100);
	}

}

void task2(void*pt) {
	while (1) {
		HAL_LED_u8LedMode(LED1_PORT, LED1_PIN, LED_TOG);
		vTaskDelay(1000);
	}
}

void task3(void*pt) {
	while (1) {
		HAL_LED_u8LedMode(LED2_PORT, LED2_PIN, LED_TOG);
		vTaskDelay(2000);
	}
}
