///*
// * TrafficLight.c
// *
// *  Created on: Sep 24, 2023
// *      Author: Mohamed
// */
//#include "Traffic_Light.h"
//
//STD_Type APP_TL_u8TLInit(void) {
//	u8 Loc_u8Return_Value = E_NOT_OK;
//	Loc_u8Return_Value = HAL_LED_u8LedInit(LED0_PORT, LED0_PIN);
//	Loc_u8Return_Value = HAL_PushButton_u8PushButtonInit(PushButton0_PORT,
//			PushButton0_PIN);
//	return Loc_u8Return_Value;
//}
//
//STD_Type APP_TL_u8TLAPP(void) {
//	u8 Loc_u8Return_Value = E_NOT_OK;
////	Loc_u8Return_Value=HAL_PushButton_u8PushButtonCheck(PushButton0_PORT, PushButton0_PIN);
////	if (Glob_PB0_u8PinValue) {
////		_delay_ms(5);
////		Loc_u8Return_Value=HAL_PushButton_u8PushButtonCheck(PushButton0_PORT, PushButton0_PIN);
////		if (!Glob_PB0_u8PinValue) {
////			Loc_u8Return_Value=HAL_LED_u8LedMode(LED0_PORT,LED0_PIN,LED_ON);
////		}
////	}
//	HAL_PushButton_u8PushButtonCheck(1,0);
//	if(Glob_PB0_u8PinValue){
//		HAL_LED_u8LedMode(2,2,1);
//	}
//	else{
//		HAL_LED_u8LedMode(2,2,0);
//
//	}
//	return Loc_u8Return_Value;
//}
