/*
 * Seven_Segment.h
 *
 *  Created on: Sep 25, 2023
 *      Author: Mohamed
 */

#ifndef HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_H_
#define HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_H_
#include "../../MCAL/DIO/DIO.h"


enum {
	Enable_OFF, Enable_ON, Enable_TOG
};

STD_Type HAL_7segment_u87segmentInit(u8);
STD_Type HAL_7segment_u87segmentEnable(u8,u8,u8,u8);
STD_Type HAL_7segment_u87segmentDot(u8,u8,u8);

#define Seven_Segment_Shift 4
#define Max_Display_Num 9

#endif /* HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_H_ */
