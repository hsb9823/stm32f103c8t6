/*
 * ledController.c
 *
 *  Created on: May 4, 2024
 *      Author: USER-PC
 */

#include "ledController.h"

void led1_OnOff(ON_OFF_t on_off){
	if(on_off == ON_t){
		HAL_GPIO_WritePin(PB6_LED1_GPIO_Port, PB6_LED1_Pin, 0);
	}
	else if(on_off == OFF_t){
		HAL_GPIO_WritePin(PB6_LED1_GPIO_Port, PB6_LED1_Pin, 1);
	}
}


void led2_OnOff(ON_OFF_t on_off){
	if(on_off == ON_t){
		HAL_GPIO_WritePin(PB7_LED2_GPIO_Port, PB7_LED2_Pin, 0);
	}
	else if(on_off == OFF_t){
		HAL_GPIO_WritePin(PB7_LED2_GPIO_Port, PB7_LED2_Pin, 1);
	}
}


