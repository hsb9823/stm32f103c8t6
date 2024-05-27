/*
 * heaterController.h
 *
 *  Created on: Apr 25, 2024
 *      Author: USER-PC
 */

#ifndef INC_HEATERCONTROLLER_H_
#define INC_HEATERCONTROLLER_H_
#include "main.h"
#include "controlType.h"
#include "defines.h"

uint8_t getHeaterState();
void heaterOnOff(uint8_t OnOff);
void setDesiredTemper(void);
int getDesiredTemper(void);
void heaterControl(float temper);
void temper_up(void);
void temper_down(void);
void setFixedTemper(void);
int getFixedTemper(void);
void initHeater(void);
void setDesiredTemper(void);
void setBackTemper(void);
#endif /* INC_HEATERCONTROLLER_H_ */
