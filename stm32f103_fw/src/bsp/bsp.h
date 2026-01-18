/*
 * bsp.h
 *
 *  Created on: 2025. 12. 26.
 *      Author: Sunbi
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_


#include "def.h"

#include "stm32f1xx_hal.h"


void bspInit(void);

void delay(uint32_t t_ms);
uint32_t mullis(void);
void Error_handler(void);

#endif /* SRC_BSP_BSP_H_ */
