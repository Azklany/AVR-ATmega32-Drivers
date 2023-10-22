/*
 * main.c
 *
 *  Created on: Sep 24, 2023
 *      Author: Mohamed
 */

#include "main.h"
//volatile u16 x;
//volatile u16 counter;

void main(void) {
	u8 Loc_u8Return_Value = E_NOT_OK;

	///////////////////////////////////////////////////
	//                    LCD
//	APP_NameShift_u8NameShiftInit();
//	APP_NameShift_u8NameShiftAPP();

//	APP_CustomChar_u8CustomCharInit();
//	APP_CustomChar_u8CustomCharAPP();
	//////////////////////////////////////////////////

//	                    interrupt
//	APP_InterruptTest_u8InterruptTestInit();
//	APP_InterruptTest_u8InterruptTestAPP();
//	while(1){
//
//	}
	//////////////////////////////////////////////////

	//                    KeyPad
//	APP_Calculator_u8CalculatorInit();
//	APP_Calculator_u8CalculatorAPP();

	///////////////////////////////////////////////////
	//                      ADC
//	APP_PotTest_PotTestInit();
//	APP_PotTest_PotTestAPP();

	//////////////////////////////////////////////////
	//                    Timer 0
//	         Timer Normal
//	APP_Timer0_NMTest_u8NMTestInit();
//	APP_Timer0_NMTest_u8NMTestAPP();

	//Led Blink
//	APP_Timer0_u8LedBlinkInit();
//	APP_Timer0_u8LedBlinkAPP();

	//	       Timer CTC
//	APP_Timer0_CTCTest_u8CTCTestInit();
//	APP_Timer0_CTCTest_u8CTCTestAPP();

	// Led Brightness Control

//	APP_Timer0_u8LedBCInit();
//	APP_Timer0_u8LedBCAPP();

	//         Phase pwm

	//Protues
//	MCAL_Timer0_Init(PWM_Mode,Prescaller_64,Non_Inverted);
//	MCAL_Timer0_SetCompareValue(99);
//	SET_BIT(DDRB,3);
//	while(1);
////////////////////////////////////////////////////////////////////////

	//                     Timer 1
	//     Servo Motor
//	TCCR1A = 0b10000010;
//	TCCR1B = 0b00011010;
//	ICR1 = 39999;
//	OCR1A = 1999;
//	SET_BIT(DDRD, 5);
//	while (1) {
//		OCR1A = 1999;
//		_delay_ms(1000);
//		OCR1A = 2999;
//		_delay_ms(1000);
//		OCR1A = 3999;
//		_delay_ms(1000);
//		OCR1A = 2999;
//		_delay_ms(1000);
//	}

	////////////////////////////////////////

	//                   WDT
//	APP_WDTTest_WDTTestInit();
//	APP_WDTTest_WDTTestAPP();

	/////////////////////////////////////////////

	//                   UART
	APP_UartTest_UartTestInit();
	APP_UartTest_UartTestAPP();

	//////////////////////////////////////////////

	///////////////////////////////////
//		if (Loc_u8Return_Value == E_NOT_OK) {
//			HAL_Buzzer_u8BuzzerInit(PortA, 3);
//			HAL_Buzzer_u8BuzzerMode(PortA, 3, Buzzer_ON);
//		}
//	}
}


