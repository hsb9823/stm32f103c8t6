/*
 * oledController.h
 *
 *  Created on: May 4, 2024
 *      Author: USER-PC
 */

#ifndef INC_OLEDCONTROLLER_H_
#define INC_OLEDCONTROLLER_H_
#include "ssd1306.h"
#include "controlType.h"

void opening();
void printTemper(int tmeper);
void printDefault();
void blinkScreen();
void startBlink();
void printHeaterState(ON_OFF_t onOff);
void printBackground();


void setTemp();

#endif /* INC_OLEDCONTROLLER_H_ */
