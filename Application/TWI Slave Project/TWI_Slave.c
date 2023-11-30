/*
 * TWI_Slave.c
 *
 *  Created on: Dec 1, 2023
 *      Author: Mohamed
 */

#include "TWI_Slave.h"

u8 Address = 0x08;
void APP_SPI_Slave_MasterInit() {
	MCAL_TWI_Slave_Init(Address);
	HAL_LED_u8LedInit(LED0_PORT, LED0_PIN);
}
void APP_SPI_Slave_MasterAPP() {
	u8 data;
	while (1) {
		MCAL_TWI_Slave_Listen();
		MCAL_TWI_RecieveData(&data);
		switch (data) {
		case 1:
			HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, Pin_High);
			break;
		case 2:
			HAL_LED_u8LedMode(LED0_PORT, LED0_PIN, Pin_Low);
			break;
		}

	}
}
