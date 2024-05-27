/*
 * oledController.c
 *
 *  Created on: May 4, 2024
 *      Author: USER-PC
 */

#include "oledController.h"
#include "hsb.h"
#include "heaterController.h"
#include "temperCounter.h"
#include <stdio.h>

static uint8_t m_blink = 0;
static uint8_t m_blink_count = 0;
void printTemperNoUpdate(int temper);

void opening() {

	SSD1306_GotoXY(0, 0);
	SSD1306_Puts("Start!", &Font_11x18, 1);
	SSD1306_GotoXY(10, 20);
	SSD1306_Puts("pepper :)", &Font_11x18, 1);
	SSD1306_GotoXY(22, 40);
	SSD1306_Puts("dryer!!", &Font_11x18, 1);
	SSD1306_UpdateScreen();
	HAL_Delay(1000);

	SSD1306_InvertDisplay(1);

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, HSBLOGO1, 128, 64, 1);
	SSD1306_UpdateScreen();
	HAL_Delay(300);

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, HSBLOGO2, 128, 64, 1);
	SSD1306_UpdateScreen();
	HAL_Delay(300);

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, HSBLOGO3, 128, 64, 1);
	SSD1306_UpdateScreen();
	HAL_Delay(300);

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, HSBLOGO4, 128, 64, 1);
	SSD1306_UpdateScreen();
	HAL_Delay(300);

	SSD1306_Clear();
	SSD1306_DrawBitmap(0, 0, HSBLOGO5, 128, 64, 1);
	SSD1306_UpdateScreen();
	HAL_Delay(500);

	printDefault();
}

void blinkScreen() {
	if (m_blink_count > 0) {
		if (!m_blink) {
			SSD1306_Clear();
			SSD1306_UpdateScreen();
			m_blink = 1;
		} else {
			printBackground();
			printTemper(getFixedTemper()); // heaterController function
			printHeaterState(getHeaterState());
			m_blink = 0;
		}
	}
	if(m_blink_count > 0){
		m_blink_count--;
	}

}

void startBlink() {
	if (m_blink_count == 0) {
		m_blink_count = 4;
	}
}

void printDefault(){

	SSD1306_InvertDisplay(0);
	SSD1306_Clear();
	SSD1306_GotoXY(1, 0);
	SSD1306_Puts("Temper Work", &Font_11x18, 1);
	SSD1306_GotoXY(0, 15);
	SSD1306_Puts("-----------", &Font_11x18, 1);
	SSD1306_GotoXY(14, 38);

	char temper_str[100] = "";
	itoa(DEFAULT_TEMPER,temper_str,10);
	strcat(temper_str,".0");
	SSD1306_Puts(temper_str, &Font_11x18, 1);
	SSD1306_GotoXY(81, 38);
	SSD1306_Puts("Off", &Font_11x18, 1);
	SSD1306_UpdateScreen();

}

void printBackground(){

	SSD1306_InvertDisplay(0);
	SSD1306_Clear();
	SSD1306_GotoXY(1, 0);
	SSD1306_Puts("Temper Work", &Font_11x18, 1);
	SSD1306_GotoXY(0, 15);
	SSD1306_Puts("-----------", &Font_11x18, 1);

}

void printTemperNoUpdate(int temper){

	SSD1306_GotoXY(14, 38);
	char temper_str[100] = "";
	sprintf(temper_str, "%2d.0", temper);
	SSD1306_Puts(temper_str, &Font_11x18, 1);

}

void printTemper(int temper){

	SSD1306_GotoXY(14, 38);
	char temper_str[100] = "";
	sprintf(temper_str, "%2d.0", temper);
	SSD1306_Puts(temper_str, &Font_11x18, 1);
	SSD1306_UpdateScreen();

}

void printHeaterState(ON_OFF_t onOff){
	SSD1306_GotoXY(81, 38);
	if(onOff == ON_t){
		SSD1306_Puts("On ", &Font_11x18, 1);
	}
	else {
		SSD1306_Puts("Off ", &Font_11x18, 1);
	}
	SSD1306_UpdateScreen();
}


void setTemp() {
	SSD1306_Clear();
	SSD1306_GotoXY(1, 0);
	SSD1306_Puts("set Temper", &Font_11x18, 1);
	printTemper(getFixedTemper());
	HAL_Delay(1500);

	printBackground();
	printTemper(getFixedTemper());
	printHeaterState(getHeaterState());
}

