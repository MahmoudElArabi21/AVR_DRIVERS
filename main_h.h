/*
 * main_h.h
 *
 *  Created on: Oct 23, 2023
 *      Author: Mahmoud El Arabi
 */

#ifndef MAIN_H_H_
#define MAIN_H_H_

#include "HAL/7SEGMENTS/7SEG_Interface.h"
#include "HAL/LCD/LCD_Interface.h"
#include "HAL/DCMotor/DCM_Interface.h"
#include "HAL/KEYPAD/KEYPAD_Interface.h"

#include "MCAL/GI/GI_Interface.h"
#include "MCAL/EXTI/EXTI_Interface.h"
#include "MCAL/PORT/PORT_Interface.h"
#include "MCAL/TIMER0/TMR0_Interface.h"
#include "MCAL/TIMER2/TMR2_Interface.h"
#include "MCAL/ADC/ADC_Interface.h"
#include "MCAL/UART/UART_Interface.h"

/******************* PORT Configuration *******************/
Pin_ConfigType pins[] =	{
//			{Dio_PORTA, pin_0, STD_OUT},
//			{Dio_PORTA, pin_1, STD_OUT},
//			{Dio_PORTA, pin_2, STD_OUT},
//			{Dio_PORTA, pin_3, STD_OUT},
			{Dio_PORTA, pin_4, STD_OUT},
//			{Dio_PORTA, pin_5, STD_OUT},
			{Dio_PORTA, pin_6, STD_OUT},
//			{Dio_PORTA, pin_7, STD_OUT},

//			{Dio_PORTB, pin_0, STD_OUT},
//			{Dio_PORTB, pin_1, STD_OUT},
//			{Dio_PORTB, pin_2, STD_OUT},
//			{Dio_PORTB, pin_3, STD_OUT},
//			{Dio_PORTB, pin_4, STD_OUT},
//			{Dio_PORTB, pin_5, STD_OUT},
//			{Dio_PORTB, pin_6, STD_OUT},
			{Dio_PORTB, pin_7, STD_OUT},

//			{Dio_PORTC, pin_0, STD_OUT},
//			{Dio_PORTC, pin_1, STD_OUT},
//			{Dio_PORTC, pin_2, STD_OUT},
//			{Dio_PORTC, pin_3, STD_OUT},
//			{Dio_PORTC, pin_4, STD_OUT},
//			{Dio_PORTC, pin_5, STD_OUT},
//			{Dio_PORTC, pin_6, STD_OUT},
//			{Dio_PORTC, pin_7, STD_OUT},

//			{Dio_PORTD, pin_0, STD_OUT},
//			{Dio_PORTD, pin_1, STD_OUT},
//			{Dio_PORTD, pin_2, STD_OUT},
//			{Dio_PORTD, pin_3, STD_OUT},
//			{Dio_PORTD, pin_4, STD_OUT},
//			{Dio_PORTD, pin_5, STD_OUT},
//			{Dio_PORTD, pin_6, STD_OUT},
			{Dio_PORTD, pin_7, STD_OUT},

/*************** 7_Segment ***************/
//			{Dio_PORTB, pin_0, STD_OUT },
//			{Dio_PORTB, pin_1, STD_OUT },
//			{Dio_PORTB, pin_2, STD_OUT },
//			{Dio_PORTB, pin_4, STD_OUT },
//			{Dio_PORTA, pin_2, STD_OUT },
//			{Dio_PORTA, pin_3, STD_OUT },
//			{Dio_PORTB, pin_5, STD_OUT },
//			{Dio_PORTB, pin_6, STD_OUT },

/*************** LCD ***************/
//			{Dio_PORTB, pin_0, STD_OUT },
//			{Dio_PORTB, pin_1, STD_OUT },
//			{Dio_PORTB, pin_2, STD_OUT },
//			{Dio_PORTB, pin_4, STD_OUT },
//			{Dio_PORTA, pin_2, STD_OUT },
//			{Dio_PORTA, pin_3, STD_OUT },

/*************** KEYPAD ***************/
//			{Dio_PORTD, pin_3, STD_IN},	// Column 1
//			{Dio_PORTD, pin_5, STD_IN},	// Column 2
//			{Dio_PORTD, pin_6, STD_IN},	// Column 3
//			{Dio_PORTD, pin_7, STD_IN},	// Column 4
//			{Dio_PORTC, pin_2, STD_OUT},// Row 1
//			{Dio_PORTC, pin_3, STD_OUT},// Row 2
//			{Dio_PORTC, pin_4, STD_OUT},// Row 3
//			{Dio_PORTC, pin_5, STD_OUT},// Row 4

/*************** Terminate ***************/
			{-1}
	};

#endif /* MAIN_H_H_ */
