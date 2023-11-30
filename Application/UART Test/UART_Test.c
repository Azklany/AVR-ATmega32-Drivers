///*
// * UART_Test.c
// *
// *  Created on: Oct 22, 2023
// *      Author: Mohamed
// */
//
//#include "UART_Test.h"
//
//void APP_UartTest_UartTestInit() {
//	HAL_LED_u8LedInit(2, 7);
//	MCAL_UART_UARTInit();
//}
//
//void APP_UartTest_UartTestAPP() {
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
