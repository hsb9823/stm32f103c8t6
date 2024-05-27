#include "temperCounter.h"
#include "oledController.h"
#include "heaterController.h"

#include <stdio.h>
#include "main.h"
int count = 0;

void tempCount(){

	/* LED + Temperature Count */
	if (g_f_sw_up) {
		printf("push sw_up\r\n");
		g_f_sw_up = 0;
//		count++;
		temper_up();
	}

	if (g_f_sw_down) {
		printf("push sw_down\r\n");
		g_f_sw_down = 0;
		temper_down();
	}

	if (g_f_sw_fix) {
		printf("push sw_fix\r\n");
		g_f_sw_fix = 0;
//		HAL_GPIO_TogglePin(PB5_RELAY_ON_OFF_CTRL_GPIO_Port, PB5_RELAY_ON_OFF_CTRL_Pin);
//		startBlink();
		setTemp();
		setFixedTemper();
	}

//	if (g_f_sw_on) {
//		printf("push sw_on\r\n");
//		g_f_sw_on = 0;
//	}

}

ON_OFF_t getSwState(){
	if(HAL_GPIO_ReadPin(PB12_START_SW_PIN_GPIO_Port, PB12_START_SW_PIN_Pin)){
		return OFF_t;
	}else{
		return ON_t;
	}
}
