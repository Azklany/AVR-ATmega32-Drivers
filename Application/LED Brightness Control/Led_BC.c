///*
// * Led_BC.c
// *
// *  Created on: Oct 20, 2023
// *      Author: Mohamed
// */
//
//#include "Led_BC.h"
//
//extern u8 Glob_PB0_u8PinValue;
//extern u8 Glob_PB2_u8PinValue;
//
//void APP_Timer0_u8LedBCInit() {
//	HAL_LED_u8LedInit(2, 2);
//	HAL_PushButton_u8PushButtonInit(3, 2);
//	HAL_PushButton_u8PushButtonInit(1, 0);
//	MCAL_Timer0_Init(FastPWM_Mode, Prescaller_1, Non_Inverted);
//}
//
//void APP_Timer0_u8LedBCAPP() {
//	HAL_LED_u8LedMode(2, 2, 1);
//	u8 duty = 30;
//	MCAL_Timer0_SetCompareValue(duty);
//	while (1) {
//		HAL_PushButton_u8PushButtonCheck(3, 2);
//		HAL_PushButton_u8PushButtonCheck(1, 0);
//		if (Glob_PB2_u8PinValue) {
//			_delay_ms(10);
//			duty += 5;
//			if (duty == 255) {
//				duty -= 5;
//			}
//			MCAL_Timer0_SetCompareValue(duty);
//		} else if (Glob_PB0_u8PinValue) {
//			_delay_ms(10);
//			duty -= 5;
//			if (duty == 0) {
//				duty += 5;
//			}
//			MCAL_Timer0_SetCompareValue(duty);
//		}
//	}
//}
