/*
 * Pot_Test.c
 *
 *  Created on: Oct 14, 2023
 *      Author: Mohamed
 */

#include "Pot_Test.h"

APP_PotTest_PotTestInit() {
	HAL_LCD_u8LCDInit();
	HAL_LED_u8LedInit(2, 2);
	HAL_LED_u8LedInit(2, 7);
	HAL_LED_u8LedInit(3, 3);
	HAL_Potentiometer_PotentiometerInit(PortA, 1);
}

APP_PotTest_PotTestAPP() {
	u16 POT_Value;
//	u8 str[10];
	while (1) {
		HAL_Potentiometer_PotentiometerValue(&POT_Value);
		if (POT_Value <= 1500) {
			HAL_LED_u8LedMode(2, 2, 1);
			HAL_LED_u8LedMode(2, 7, 0);
			HAL_LED_u8LedMode(3, 3, 0);
		} else if (POT_Value <= 3000 && POT_Value > 1500) {
			HAL_LED_u8LedMode(2, 2, 0);
			HAL_LED_u8LedMode(2, 7, 1);
			HAL_LED_u8LedMode(3, 3, 0);
		} else if (POT_Value <= 5000 && POT_Value > 3000) {
			HAL_LED_u8LedMode(2, 2, 0);
			HAL_LED_u8LedMode(2, 7, 0);
			HAL_LED_u8LedMode(3, 3, 1);
		}
//		itoa(x, str, 10);
		HAL_LCD_u8Clear();
		HAL_LCD_u8SendString("POT Value : ");
		HAL_LCD_u8SendNumber(POT_Value);
		_delay_ms(500);
	}

}
