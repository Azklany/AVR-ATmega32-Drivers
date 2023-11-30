///*
// * SPI_Slave.c
// *
// *  Created on: Nov 2, 2023
// *      Author: Mohamed
// */
//
//#include "SPI_Slave.h"
//
//void APP_SPI_Slave_SlaveInit() {
//	MCAL_SPI_SPIInit();
//	MCAL_DIO_u8SetPinDirection(PortC, 2, Pin_High);
//}
//
//void APP_SPI_Slave_SlaveApp() {
//	u8 Loc_u8Data = 0;
//	//Slave
//	while (1) {
//		Loc_u8Data = MCAL_SPI_SPITranceive(0xff);
//		switch (Loc_u8Data) {
//		case 1:
//			MCAL_DIO_u8SetPinValue(PortC, 2, Pin_High);
//			break;
//		case 2:
//			MCAL_DIO_u8SetPinValue(PortC, 2, Pin_Low);
//			break;
//		}
//	}
//}
