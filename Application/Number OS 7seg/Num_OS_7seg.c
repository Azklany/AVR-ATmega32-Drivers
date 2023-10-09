/*
 * Num_OS_7seg.c
 *
 *  Created on: Sep 26, 2023
 *      Author: Mohamed
 */

#include "Num_OS_7seg.h"

STD_Type APP__NUM_OS_7SEG_u8Init(void) {
	u8 Loc_u8Return_Value = E_NOT_OK;
	Loc_u8Return_Value = HAL_7segment_u87segmentInit(0);
	Loc_u8Return_Value = HAL_7segment_u87segmentInit(1);
	Loc_u8Return_Value = HAL_PushButton_u8PushButtonInit(1, 0);
	Loc_u8Return_Value = HAL_PushButton_u8PushButtonInit(3, 6);
	Loc_u8Return_Value = HAL_PushButton_u8PushButtonInit(3, 2);
	Loc_u8Return_Value = HAL_Buzzer_u8BuzzerInit(0,3);
	return Loc_u8Return_Value;
}

STD_Type APP__NUM_OS_7SEG_u8APP(void) {
	static s8 Loc_u8DisplayNumLeft = 0;
	static s8 Loc_u8DisplayNumRight = 0;
	u8 Loc_u8Return_Value = E_NOT_OK;
	Loc_u8Return_Value = HAL_7segment_u87segmentEnable(1, 2, 1,
			Loc_u8DisplayNumLeft);
	_delay_ms(1);
	Loc_u8Return_Value = HAL_7segment_u87segmentEnable(1, 2, 0, 0);
	Loc_u8Return_Value = HAL_7segment_u87segmentEnable(1, 1, 1,
			Loc_u8DisplayNumRight);
	_delay_ms(1);
	Loc_u8Return_Value = HAL_7segment_u87segmentEnable(1, 1, 0, 0);

	Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(1, 0);
	Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(3, 6);
	Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(3, 2);

	if (Glob_PB0_u8PinValue == 1) {
		_delay_ms(20);
		Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(1, 0);
		if (Glob_PB0_u8PinValue == 0) {
			++Loc_u8DisplayNumRight;
			if (Loc_u8DisplayNumRight > 9) {
				Loc_u8DisplayNumRight = 0;
				++Loc_u8DisplayNumLeft;
				if (Loc_u8DisplayNumLeft > 9) {
					Loc_u8DisplayNumLeft = 0;
				}
			}
		}
	} else if (Glob_PB1_u8PinValue == 1) {
		_delay_ms(20);
		Loc_u8Return_Value = HAL_PushButton_u8PushButtonCheck(3, 6);
		if (Glob_PB1_u8PinValue == 0) {
			--Loc_u8DisplayNumRight;
			if (Loc_u8DisplayNumRight < 0) {
				--Loc_u8DisplayNumLeft;
				Loc_u8DisplayNumRight = 9;
				if (Loc_u8DisplayNumLeft < 0) {
					Loc_u8DisplayNumLeft = 9;
				}
			}
		}
	} else if (Glob_PB2_u8PinValue) {
		Loc_u8DisplayNumRight = 0;
		Loc_u8DisplayNumLeft = 0;
		Loc_u8Return_Value = HAL_Buzzer_u8BuzzerMode(0,3,1);
		_delay_ms(20);
		Loc_u8Return_Value = HAL_Buzzer_u8BuzzerMode(0,3,0);
	} else {
		//Do Nothing
	}
	return Loc_u8Return_Value;
}
