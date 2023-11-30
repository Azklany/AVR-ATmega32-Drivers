///*
// * Ping_Pong.c
// *
// *  Created on: Sep 25, 2023
// *      Author: Mohamed
// */
//
//#include "Ping_Pong.h"
//
//STD_Type APP_PP_u8PPInit(void) {
//	u8 Loc_u8Return_Value = E_NOT_OK;
//	Loc_u8Return_Value = HAL_LED_u8LedInit(2, 2);
//	Loc_u8Return_Value = HAL_LED_u8LedInit(2, 7);
//	Loc_u8Return_Value = HAL_LED_u8LedInit(3, 3);
//	Loc_u8Return_Value = HAL_PushButton_u8PushButtonInit(1, 0);
//	Loc_u8Return_Value = HAL_PushButton_u8PushButtonInit(3, 6);
//	Loc_u8Return_Value = HAL_PushButton_u8PushButtonInit(3, 2);
//	Loc_u8Return_Value = HAL_Buzzer_u8BuzzerInit(0, 3);
//	return Loc_u8Return_Value;
//}
//
//STD_Type APP_PP_u8PPAPP(void) {
//	u8 Loc_u8Return_Value = E_NOT_OK;
//	Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(1, 0);
//	Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(3, 6);
//	Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(3, 2);
//	if (Glob_PB0_u8PinValue) {
//		while (1) {
//			Loc_u8Return_Value = HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, LED_ON);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(LED1_PORT, LED1_PIN, LED_ON);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(LED2_PORT, LED2_PIN, LED_ON);
//			_delay_ms(1000);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(LED0_PORT, LED0_PIN,
//					LED_OFF);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(LED1_PORT, LED1_PIN,
//					LED_OFF);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(LED2_PORT, LED2_PIN,
//					LED_OFF);
//			_delay_ms(1000);
//			Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(3, 6);
//			Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(3, 2);
//			if (Glob_PB1_u8PinValue || Glob_PB2_u8PinValue) {
//				break;
//			} else {
//				//Do Nothing
//			}
//		}
//	} else if (Glob_PB1_u8PinValue) {
//		while (1) {
//			Loc_u8Return_Value = HAL_LED_u8LedMode(2, 2, 1);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(2, 7, 0);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(3, 3, 0);
//			_delay_ms(1000);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(2, 2, 0);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(2, 7, 1);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(3, 3, 0);
//			_delay_ms(1000);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(2, 2, 0);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(2, 7, 0);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(3, 3, 1);
//			Loc_u8Return_Value = HAL_Buzzer_u8BuzzerMode(0, 3, 1);
//			_delay_ms(2000);
//			Loc_u8Return_Value = HAL_Buzzer_u8BuzzerMode(0, 3, 0);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(2, 2, 0);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(2, 7, 1);
//			Loc_u8Return_Value = HAL_LED_u8LedMode(3, 3, 0);
//			_delay_ms(1000);
//			Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(1, 0);
//			Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(3, 2);
//			if (Glob_PB0_u8PinValue || Glob_PB2_u8PinValue) {
//				break;
//			} else {
//				//Do Nothing
//			}
//		}
//	} else if (Glob_PB2_u8PinValue) {
//		Loc_u8Return_Value = HAL_LED_u8LedMode(2, 2, 0);
//		Loc_u8Return_Value = HAL_LED_u8LedMode(2, 7, 0);
//		Loc_u8Return_Value = HAL_LED_u8LedMode(3, 3, 0);
//	}
//	return Loc_u8Return_Value;
//}
