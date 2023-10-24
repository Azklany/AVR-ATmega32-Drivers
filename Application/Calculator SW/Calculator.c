/*
 * Calculator.c
 *
 *  Created on: Oct 3, 2023
 *      Author: Mohamed
 */

#include "../Calculator SW/Calculator.h"

APP_SWCalculator_u8CalculatorInit() {
	HAL_LCD_u8LCDInit();
	HAL_KeyPad_u8KeyPadInit();
	HAL_LED_u8LedInit(3, 3);
	HAL_Buzzer_u8BuzzerInit(0, 3);
}

APP_SWCalculator_u8CalculatorAPP() {
	u8 Button = 11;
	u16 counter = 0;
	s16 num1;
	s16 num2;
	s16 result;
	u8 method;
	while (1) {
		HAL_KeyPad_u8GetKeyPressed(&Button);
		if (Button == '1') {
			HAL_LCD_u8SendChar('1');
			if (counter == 0) {
				num1 = 1;
				counter++;
			} else {
				num2 = 1;
				counter--;
			}
			Button = 11;
		} else if (Button == '2') {
			HAL_LCD_u8SendChar('2');
			if (counter == 0) {
				num1 = 2;
				counter++;
			} else {
				num2 = 2;
				counter--;
			}
			Button = 11;
		} else if (Button == '3') {
			HAL_LCD_u8SendChar('3');
			if (counter == 0) {
				num1 = 3;
				counter++;
			} else {
				num2 = 3;
				counter--;
			}
			Button = 11;
		} else if (Button == '4') {
			HAL_LCD_u8SendChar('4');
			if (counter == 0) {
				num1 = 4;
				counter++;
			} else {
				num2 = 4;
				counter--;
			}
			Button = 11;
		} else if (Button == '5') {
			HAL_LCD_u8SendChar('5');
			if (counter == 0) {
				num1 = 5;
				counter++;
			} else {
				num2 = 5;
				counter--;
			}
			Button = 11;
		} else if (Button == '6') {
			HAL_LCD_u8SendChar('6');
			if (counter == 0) {
				num1 = 6;
				counter++;
			} else {
				num2 = 6;
				counter--;
			}
			Button = 11;
		} else if (Button == '7') {
			HAL_LCD_u8SendChar('7');
			if (counter == 0) {
				num1 = 7;
				counter++;
			} else {
				num2 = 7;
				counter--;
			}
			Button = 11;
		} else if (Button == '8') {
			HAL_LCD_u8SendChar('8');
			if (counter == 0) {
				num1 = 8;
				counter++;
			} else {
				num2 = 8;
				counter--;
			}
			Button = 11;
		} else if (Button == '9') {
			HAL_LCD_u8SendChar('9');
			if (counter == 0) {
				num1 = 9;
				counter++;
			} else {
				num2 = 9;
				counter--;
			}
			Button = 11;
		} else if (Button == '0') {
			HAL_LCD_u8SendChar('0');
			if (counter == 0) {
				num1 = 0;
				counter++;
			} else {
				num2 = 0;
				counter--;
			}
			Button = 11;
		} else if (Button == '+') {
			//+
			HAL_LCD_u8SendChar(0b00101011);
			method = '+';
			Button = 11;
		} else if (Button == '-') {
			//-
			HAL_LCD_u8SendChar(0b00101101);
			method = '-';
			Button = 11;
		} else if (Button == '/') {
			// /
			HAL_LCD_u8SendChar(0b00101111);
			method = '/';
			Button = 11;
		} else if (Button == 'D') {
			// =
			HAL_LCD_u8Clear();
			Button = 11;
		} else if (Button == '*') {
			HAL_LCD_u8SendChar(0b00101010);
			method = '*';
			Button = 11;
		} else if (Button == '=') {
			// =
			HAL_LCD_u8SendChar(0b00111101);
			switch (method) {
			case '-':
				result = num1 - num2;
				HAL_LCD_u8SendNumber(result);
				break;
			case '+':
				result = num1 + num2;
				HAL_LCD_u8SendNumber(result);
				break;
			case '/':
				result = num1 / num2;
				HAL_LCD_u8SendNumber(result);
				break;
			case '*':
				result = num1 * num2;
				HAL_LCD_u8SendNumber(result);
				break;
			}
			Button = 11;
		}
	}
}

