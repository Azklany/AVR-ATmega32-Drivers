/*
 * Name_Shift.c
 *
 *  Created on: Oct 1, 2023
 *      Author: Mohamed
 */

#include "Name_Shift.h"

STD_Type APP_NameShift_u8NameShiftInit() {
	u8 Loc_u8Return_Value = E_NOT_OK;
	Loc_u8Return_Value = HAL_LCD_u8LCDInit();
	return Loc_u8Return_Value;
}

STD_Type APP_NameShift_u8NameShiftAPP() {
	while(1){
		HAL_LCD_u8SendString("Ahmed");
		_delay_ms(2000);
		HAL_LCD_u8GoTo(Right_Shift, 5);
		_delay_ms(2000);
		HAL_LCD_u8GoTo(Right_Shift, 5);
		_delay_ms(2000);
		HAL_LCD_u8Clear();
		HAL_LCD_u8GoTo(Second_Line,0);
		HAL_LCD_u8SendString("Ahmed");
		_delay_ms(2000);
		HAL_LCD_u8GoTo(Right_Shift, 5);
		_delay_ms(2000);
		HAL_LCD_u8GoTo(Right_Shift, 5);
		_delay_ms(2000);
		HAL_LCD_u8Clear();
		HAL_LCD_u8GoTo(First_Line,0);
	}
//	HAL_LCD_u8SendString("Ahmed");
//	_delay_ms(2000);
//	HAL_LCD_u8SendCommands(beginning_2stLine);
//	HAL_LCD_u8SendString("Hoda");
}
