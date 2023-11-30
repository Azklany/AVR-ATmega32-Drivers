///*
// * From_0_To_99.c
// *
// *  Created on: Sep 25, 2023
// *      Author: Mohamed
// */
//
//#include "From_0_To_99.h"
//
//STD_Type APP_0_99_7segment_u8Init(void) {
//	u8 Loc_u8Return_Value = E_NOT_OK;
//	Loc_u8Return_Value = HAL_7segment_u87segmentInit(0);
//	Loc_u8Return_Value = HAL_7segment_u87segmentInit(1);
//	return Loc_u8Return_Value;
//}
//
//STD_Type APP_0_99_7segment_u8APP(void) {
//	u8 Loc_u8Return_Value = E_NOT_OK;
//	static u8 Loc_u8DisplayNumLeft = 0;
//	static s8 Loc_u8DisplayNumRight = 0;
//	u32 counter = 0;
//	while (counter < 100) {
//		Loc_u8Return_Value = HAL_7segment_u87segmentEnable(1, 2, 1,
//				Loc_u8DisplayNumLeft);
//		_delay_ms(2);
//		Loc_u8Return_Value = HAL_7segment_u87segmentEnable(1, 2, 0, 0);
//		Loc_u8Return_Value = HAL_7segment_u87segmentEnable(1, 1, 1,
//				Loc_u8DisplayNumRight);
//		_delay_ms(2);
//		Loc_u8Return_Value = HAL_7segment_u87segmentEnable(1, 1, 0, 0);
//		counter++;
//	}
//	++Loc_u8DisplayNumRight;
//	if (Loc_u8DisplayNumRight > 9 && Loc_u8DisplayNumLeft == 9) {
//		Loc_u8Return_Value = HAL_Buzzer_u8BuzzerMode(0, 3, 1);
//		_delay_ms(250);
//		Loc_u8Return_Value = HAL_Buzzer_u8BuzzerMode(0, 3, 0);
//		Loc_u8DisplayNumRight = 0;
//		Loc_u8DisplayNumLeft = 0;
//	} else if (Loc_u8DisplayNumRight > 9) {
//		Loc_u8DisplayNumRight = 0;
//		++Loc_u8DisplayNumLeft;
//	} else {
//		//Do Nothing
//	}
//	return Loc_u8Return_Value;
//}
