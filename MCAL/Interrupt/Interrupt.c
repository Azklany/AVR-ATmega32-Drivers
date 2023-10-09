/*
 * interrupt.c
 *
 *  Created on: Oct 9, 2023
 *      Author: Mohamed
 */

#include "Interrupt.h"

void (*Gptr)(void)= '\0' ;

STD_Type MCAL_Interrupt_u8SetRegister(u8 Loc_u8PortID, u8 Loc_u8PortValue) {
	if (Loc_u8PortValue == PORT_OUTPUT) {
		if (Loc_u8PortID == SREG) {
			SREG = PORT_OUTPUT;
		} else if (Loc_u8PortID == GICR) {
			GICR = PORT_OUTPUT;
		} else if (Loc_u8PortID == MCUCR) {
			MCUCR = PORT_OUTPUT;
		} else {
			//Do Nothing
		}
	} else if (Loc_u8PortValue == PORT_INPUT) {
		if (Loc_u8PortID == SREG) {
			SREG = PORT_INPUT;
		} else if (Loc_u8PortID == GICR) {
			GICR = PORT_INPUT;
		} else if (Loc_u8PortID == MCUCR) {
			MCUCR = PORT_INPUT;
		} else {
			//Do Nothing
		}
	} else {
		if (Loc_u8PortID == SREG) {
			SREG = Loc_u8PortValue;
		} else if (Loc_u8PortID == GICR) {
			GICR = Loc_u8PortValue;
		} else if (Loc_u8PortID == MCUCR) {
			MCUCR = Loc_u8PortValue;
		}
	}
}

STD_Type MCAL_Interrupt_u8SetRegisterPin(u8 Loc_u8PortID, u8 Loc_u8PinID,
		u8 Loc_u8PinValue) {
	if (Loc_u8PinValue == Pin_High) {
		if (Loc_u8PortID == SREG) {
			SET_BIT(SREG, Loc_u8PinID);
		} else if (Loc_u8PortID == GICR) {
			SET_BIT(GICR, Loc_u8PinID);
		} else if (Loc_u8PortID == MCUCR) {
			SET_BIT(MCUCR, Loc_u8PinID);
		} else {
			//Do Nothing
		}
	} else if (Loc_u8PinValue == Pin_Low) {
		if (Loc_u8PortID == SREG) {
			CLR_BIT(SREG, Loc_u8PinID);
		} else if (Loc_u8PortID == GICR) {
			CLR_BIT(GICR, Loc_u8PinID);
		} else if (Loc_u8PortID == MCUCR) {
			CLR_BIT(MCUCR, Loc_u8PinID);
		} else {
			//Do Nothing
		}
	} else {
		//Do Nothing
	}
}

void MCAL_Interrupt_EXIT_CallBack(void (*ptr)(void)) {
	if (ptr != '\0')
		Gptr = ptr;
}

ISR(VECT_INT0) {
	if (Gptr != '\0')
		Gptr();
}
