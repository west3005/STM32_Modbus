/*
 * mt_port.h
 *
 *  Created on: Jan 6, 2024
 *      Author: Мой
 */

#ifndef MT_PORT_H
#define MT_PORT_H
/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
/* Declarations and definitions ----------------------------------------------*/
/* Functions -----------------------------------------------------------------*/
extern void MT_PORT_SetTimerModule(TIM_HandleTypeDef* timer);
extern void MT_PORT_SetUartModule(UART_HandleTypeDef* uart);
#endif // #ifndef MT_PORT_H
