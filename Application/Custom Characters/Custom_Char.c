///*
// * Custom_Char.c
// *
// *  Created on: Oct 2, 2023
// *      Author: Mohamed
// */
//
//#include "Custom_Char.h"
//
//u8 char1[8] = { 0x00, 0x0A, 0x15, 0x11, 0x0A, 0x04, 0x00, 0x00 };
//u8 char2[8] = { 0x07, 0x04, 0x1F, 0x00, 0x04, 0x04, 0x04, 0x04 };
//u8 char3[8] = { 0x00, 0x00, 0x1F, 0x01, 0x01, 0x1E, 0x00, 0x00 };
//u8 char4[8] = { 0x00, 0x00, 0x00, 0x00, 0x0E, 0x1B, 0x0E, 0x00 };
//u8 char5[8] = { 0x00, 0x00, 0x02, 0x02, 0x02, 0x1F, 0x00, 0x00 };
//
//void APP_CustomChar_u8CustomCharInit() {
//	u8 Loc_u8Return_Value = E_NOT_OK;
//	HAL_LCD_u8LCDInit();
//	HAL_LCD_u8CustomChar(0, char1);
//	HAL_LCD_u8CustomChar(1, char2);
//	HAL_LCD_u8CustomChar(2, char3);
//	HAL_LCD_u8CustomChar(3, char4);
//	HAL_LCD_u8CustomChar(4, char5);
//}
//
//void APP_CustomChar_u8CustomCharAPP() {
//	HAL_LCD_u8Clear();
//	HAL_LCD_u8GoTo(Right_Shift, 5);
//	HAL_LCD_u8SendChar(0);
//	HAL_LCD_u8SendChar(4);
//	HAL_LCD_u8SendChar(3);
//	HAL_LCD_u8SendChar(2);
//	HAL_LCD_u8SendChar(1);
//	HAL_LCD_u8SendChar(0);
////		HAL_LCD_u8SendString("Ahmed");
//
//}
