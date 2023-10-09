/*
 * Seven_Segment.c
 *
 *  Created on: Sep 25, 2023
 *      Author: Mohamed
 */

#include "Seven_Segment.h"

STD_Type HAL_7segment_u87segmentInit(
		u8 Loc_u87segmentPortID/* ,u8 Loc_u87segmentPinID*/) {
	u8 Loc_u8Return_Value = E_NOT_OK;
	if (Loc_u87segmentPortID
			<= PortD /*&& Loc_u87segmentPinID <= Num_Of_Pins*/) {
//		Loc_u8Return_Value = MCAL_DIO_u8SetPinDirection(Loc_u87segmentPortID,
//				Loc_u87segmentPinID, PIN_OUTPUT);
		Loc_u8Return_Value = MCAL_DIO_u8SetPortDirection(Loc_u87segmentPortID,
		PORT_OUTPUT);
	} else {
		//Do Nothing
	}
	return Loc_u8Return_Value;
}

STD_Type HAL_7segment_u87segmentEnable(u8 Loc_u8EnablePortID,
		u8 Loc_u8EnablePinID, u8 Loc_u8EnableMode, u8 Loc_u8DisplayNum) {
	u8 Loc_u8Return_Value = E_NOT_OK;
	if (Loc_u8EnablePortID <= PortD&& Loc_u8EnablePinID <= Num_Of_Pins
	&& Loc_u8EnableMode <= Enable_TOG && Loc_u8DisplayNum<=Max_Display_Num) {
		if (Loc_u8EnableMode == Enable_ON) {
			Loc_u8Return_Value = MCAL_DIO_u8SetPinValue(Loc_u8EnablePortID,
					Loc_u8EnablePinID, Pin_High);
			PORTA = Loc_u8DisplayNum << Seven_Segment_Shift;
		} else if (Loc_u8EnableMode == Enable_OFF) {
			Loc_u8Return_Value = MCAL_DIO_u8SetPinValue(Loc_u8EnablePortID,
					Loc_u8EnablePinID, Pin_Low);
		} else if (Loc_u8EnableMode == Enable_TOG) {
			Loc_u8Return_Value = MCAL_DIO_u8TogglePinValue(Loc_u8EnablePortID,
					Loc_u8EnablePinID);
		} else {
			//Do Nothing
		}
	} else {
		//Do Nothing
	}
	return Loc_u8Return_Value;
}

STD_Type HAL_7segment_u87segmentDot(u8 Loc_u8DotPortID, u8 Loc_u8DotPinID,
		u8 Loc_u8DotMode) {
	u8 Loc_u8Return_Value = E_NOT_OK;
	if (Loc_u8DotPortID <= PortD && Loc_u8DotPinID <= Num_Of_Pins
			&& Loc_u8DotMode <= Enable_TOG) {
		if (Loc_u8DotMode == Enable_ON) {
			Loc_u8Return_Value = MCAL_DIO_u8SetPinValue(Loc_u8DotPortID,
					Loc_u8DotPinID, Pin_High);
		} else if (Loc_u8DotMode == Enable_OFF) {
			Loc_u8Return_Value = MCAL_DIO_u8SetPinValue(Loc_u8DotPortID,
					Loc_u8DotPinID, Pin_Low);
		} else if (Loc_u8DotMode == Enable_TOG) {
			Loc_u8Return_Value = MCAL_DIO_u8TogglePinValue(Loc_u8DotPortID,
					Loc_u8DotPinID);
		} else {
			//Do Nothing
		}
	} else {
		//Do Nothing
	}
	return Loc_u8Return_Value;
}

