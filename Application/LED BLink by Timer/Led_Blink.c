///*
// * Led_Blink.c
// *
// *  Created on: Oct 19, 2023
// *      Author: Mohamed
// */
//
//#include "Led_Blink.h"
//
//u16 Loc_u8Blinkcounter = 0;
//extern u16 Counter;
//extern u16 Start;
//
//void APP_Timer0_u8LedBlinkInit() {
//	HAL_LED_u8LedInit(2, 2);
//	HAL_LED_u8LedInit(2, 7);
//	HAL_LED_u8LedInit(3, 3);
//	MCAL_Timer0_Init(Normal_Mode, Prescaller_8, Disconnected);
//	HAL_7segment_u87segmentInit(PortA);
//}
//
//void APP_Timer0_u8LedBlinkAPP() {
//	MCAL_Timer0_Delayms_NormalMode(1000);
//	MCAL_Timer0_CallBack(BlinkCounterUP);
//	while (1) {
//		s8 LEDCountDown = 5;
//		while (LEDCountDown > 0) {
//			HAL_7segment_u87segmentEnable(1, 1, 1, LEDCountDown);
//			if (Loc_u8Blinkcounter == (Counter / 2)) {
//				HAL_LED_u8LedMode(2, 2, 2);
//				while (1) {
//					if (Loc_u8Blinkcounter == Counter) {
//						HAL_LED_u8LedMode(2, 2, 2);
//						LEDCountDown--;
//						break;
//					}
//				}
//				MCAL_Timer0_SetPreloadValue(Start);
//				Loc_u8Blinkcounter = 0;
//			}
//		}
//		LEDCountDown = 3;
//		while (LEDCountDown > 0) {
//			HAL_7segment_u87segmentEnable(1, 1, 1, LEDCountDown);
//			if (Loc_u8Blinkcounter == (Counter / 2)) {
//				HAL_LED_u8LedMode(2, 7, 2);
//				while (1) {
//					if (Loc_u8Blinkcounter == Counter) {
//						HAL_LED_u8LedMode(2, 7, 2);
//						LEDCountDown--;
//						break;
//					}
//				}
//				MCAL_Timer0_SetPreloadValue(Start);
//				Loc_u8Blinkcounter = 0;
//			}
//		}
//		LEDCountDown = 5;
//		while (LEDCountDown > 0) {
//			HAL_7segment_u87segmentEnable(1, 1, 1, LEDCountDown);
//			if (Loc_u8Blinkcounter == (Counter / 2)) {
//				HAL_LED_u8LedMode(3, 3, 2);
//				while (1) {
//					if (Loc_u8Blinkcounter == Counter) {
//						HAL_LED_u8LedMode(3, 3, 2);
//						LEDCountDown--;
//						break;
//					}
//				}
//				MCAL_Timer0_SetPreloadValue(Start);
//				Loc_u8Blinkcounter = 0;
//			}
//		}
//		LEDCountDown = 3;
//		while (LEDCountDown > 0) {
//			HAL_7segment_u87segmentEnable(1, 1, 1, LEDCountDown);
//			if (Loc_u8Blinkcounter == (Counter / 2)) {
//				HAL_LED_u8LedMode(2, 7, 2);
//				while (1) {
//					if (Loc_u8Blinkcounter == Counter) {
//						HAL_LED_u8LedMode(2, 7, 2);
//						LEDCountDown--;
//						break;
//					}
//				}
//				MCAL_Timer0_SetPreloadValue(Start);
//				Loc_u8Blinkcounter = 0;
//			}
//		}
//	}
//}
//
//void BlinkCounterUP() {
//	Loc_u8Blinkcounter++;
//}
