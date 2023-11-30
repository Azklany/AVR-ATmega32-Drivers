///*
// * Calculator.c
// *
// *  Created on: Oct 3, 2023
// *      Author: Mohamed
// */
//
//#include "../Calculator HW/Calculator.h"
//
//APP_HWCalculator_u8CalculatorInit() {
//	HAL_LCD_u8LCDInit();
//	HAL_KeyPad_u8KeyPadInit();
//	HAL_LED_u8LedInit(3, 3);
//	HAL_Buzzer_u8BuzzerInit(0, 3);
//}
//
//APP_HWCalculator_u8CalculatorAPP() {
//	u8 Button = 11;
//	while (1) {
//		HAL_KeyPad_u8GetKeyPressed(&Button);
//		if (Button == '1') {
//			HAL_LCD_u8SendChar('1');
//			Button = 11;
//		} else if (Button == '2') {
//			HAL_LCD_u8SendChar('2');
//			Button = 11;
//		} else if (Button == '3') {
//			HAL_LCD_u8SendChar('3');
//			Button = 11;
//		} else if (Button == '4') {
//			HAL_LCD_u8SendChar('4');
//			Button = 11;
//		} else if (Button == '5') {
//			HAL_LCD_u8SendChar('5');
//			Button = 11;
//		} else if (Button == '6') {
//			HAL_LCD_u8SendChar('6');
//			Button = 11;
//		} else if (Button == '7') {
//			HAL_LCD_u8SendChar('7');
//			Button = 11;
//		} else if (Button == '8') {
//			HAL_LCD_u8SendChar('8');
//			Button = 11;
//		} else if (Button == '9') {
//			HAL_LCD_u8SendChar('9');
//			Button = 11;
//		} else if (Button == '0') {
//			HAL_LCD_u8SendChar('0');
//			Button = 11;
//		} else if (Button == 'A') {
//			//+
//			HAL_LCD_u8SendChar(0b00101011);
//			Button = 11;
//		} else if (Button == 'B') {
//			//-
//			HAL_LCD_u8SendChar(0b00101101);
//			Button = 11;
//		} else if (Button == 'C') {
//			// /
//			HAL_LCD_u8SendChar(0b00101111);
//			Button = 11;
//		} else if (Button == 'D') {
//			// =
////			HAL_LCD_u8Clear();
//			Button = 11;
//		} else if (Button == '*') {
//			HAL_LCD_u8SendChar(0b00101010);
//			Button = 11;
//		} else if (Button == '#') {
//			// =
//			HAL_LCD_u8SendChar(0b00111101);
//			Button = 11;
//		}
//	}
//}
//
