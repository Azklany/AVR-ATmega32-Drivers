/*
 * TWI_Master.c
 *
 *  Created on: Dec 1, 2023
 *      Author: Mohamed
 */

#include "TWI_Master.h"

void APP_SPI_Master_MasterInit() {
	MCAL_TWI_Master_Init();
}

void APP_SPI_Master_MasterAPP() {
	u8 Address = 0x08;
	while (1) {
		MCAL_TWI_Master_SendStartCondition();
		MCAL_TWI_Master_SendSlaveAddWithWrite(Address);
		MCAL_TWI_SendData(1);
		MCAL_TWI_Master_SendStopCondition();
		_delay_ms(1000);
		MCAL_TWI_Master_SendStartCondition();
		MCAL_TWI_Master_SendSlaveAddWithWrite(Address);
		MCAL_TWI_SendData(2);
		MCAL_TWI_Master_SendStopCondition();
		_delay_ms(1000);
	}
}
