///*
// * UART_APP.c
// *
// *  Created on: Oct 25, 2023
// *      Author: Mohamed
// */
//
//#include "UART_APP.h"
//
//void APP_UartAPP_UartAPPInit() {
//	HAL_LED_u8LedInit(2, 2);
//	HAL_LED_u8LedInit(2, 7);
//	HAL_LED_u8LedInit(3, 3);
//	MCAL_UART_UARTInit();
//}
//
//void APP_UartAPP_UartAPP() {
//	u8 Char;
//	while (1) {
//		MCAL_UART_UARTReceive(&Char);
//		if (Char == 'A') {
//			MCAL_UART_UARTTransmit('A');
//			HAL_LED_u8LedMode(2, 7, 1);
//		} else if (Char == 'B') {
//			MCAL_UART_UARTTransmit('B');
//			HAL_LED_u8LedMode(2, 7, 0);
//		}
//	}
//}
