///*
// * T0_CTC_Test.c
// *
// *  Created on: Oct 19, 2023
// *      Author: Mohamed
// */
//#include "T0_CTC_Test.h"
//
//volatile u16 Loc_u8CTCcounter = 0;
//extern u16 Counter;
//
//void APP_Timer0_CTCTest_u8CTCTestInit() {
//	HAL_LED_u8LedInit(2, 2);
//	MCAL_Timer0_Init(CTC_Mode, Prescaller_1024, Disconnected);
//}
//
//void APP_Timer0_CTCTest_u8CTCTestAPP() {
//	MCAL_Timer0_Delayms_CTCMode(1000);
//	MCAL_Timer0_CallBack(CTCCounterUP);
//	while (1) {
//		if (Loc_u8CTCcounter == Counter) {
//			HAL_LED_u8LedMode(2, 2, 2);
//			Loc_u8CTCcounter = 0;
//		}
//	}
//}
//
//void CTCCounterUP() {
//	Loc_u8CTCcounter++;
//}
