/*
 * WDT_Test.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Mohamed
 */

#include "WDT_Test.h"

STD_Type APP_WDTTest_WDTTestInit() {
	HAL_LED_u8LedInit(LED0_PORT, LED0_PIN);
}

STD_Type APP_WDTTest_WDTTestAPP() {
	MCAL_WDT_u8SetTime(Time_0_52_s);
	MCAL_WDT_u8Enable();
	_delay_ms(200);
	HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, Pin_High);

	//Will Refresh
	_delay_ms(2000);
	MCAL_WDT_u8Disable(); // comiler will not reach here

	//Will Not Refresh
//	_delay_ms(100);
//	MCAL_WDT_u8Disable(); // comiler will  reach here
}
