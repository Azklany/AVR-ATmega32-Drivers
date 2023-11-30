///*
// * SPI_Master.c
// *
// *  Created on: Nov 2, 2023
// *      Author: Mohamed
// */
//
//#include "SPI_Master.h"
//
//void APP_SPI_Master_MasterInit() {
//	MCAL_SPI_SPIInit();
//}
//
//void APP_SPI_Master_MasterApp() {
//	while (1) {
//		//SS Enable
//		MCAL_DIO_u8SetPinValue(PortB, Pin4, Pin_Low);
//		MCAL_SPI_SPITranceive(1);
//		//SS Disable
//		MCAL_DIO_u8SetPinValue(PortB, Pin4, Pin_High);
//		_delay_ms(1000);
//		//SS Enable
//		MCAL_DIO_u8SetPinValue(PortB, Pin4, Pin_Low);
//		MCAL_SPI_SPITranceive(2);
//		//SS Disable
//		MCAL_DIO_u8SetPinValue(PortB, Pin4, Pin_High);
//		_delay_ms(1000);
//	}
//}
