/*
 * T0_NM_Test.c
 *
 *  Created on: Oct 19, 2023
 *      Author: Mohamed
 */

#include "T0_NM_Test.h"

volatile u16 Loc_u8counter=0;
extern u16 Start;
extern 	u16 Counter;

STD_Type APP_Timer0_NMTest_u8NMTestInit() {
	HAL_LED_u8LedInit(2,2);
	MCAL_Timer0_Init(Normal_Mode,Prescaller_8,Disconnected);
}

STD_Type APP_Timer0_NMTest_u8NMTestAPP() {
	MCAL_Timer0_Delayms_NormalMode(1000);
	MCAL_Timer0_CallBack(CounterUP);
	while(1){
		if (Loc_u8counter == Counter) {
			HAL_LED_u8LedMode(2, 2, 2);
			MCAL_Timer0_SetPreloadValue(Start);
			Loc_u8counter = 0;
		}
	}
}

void CounterUP(){
	Loc_u8counter++;
}
