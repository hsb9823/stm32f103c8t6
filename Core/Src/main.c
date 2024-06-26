/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include "ds18b20.h"
#include "fnd_controller.h"
#include "heaterController.h"

/* OLED header files */
#include "fonts.h"
#include "ssd1306.h"
#include "test.h"
#include "bitmap.h"
#include "horse_anim.h"

#include "oledController.h"
#include "g_var.h"
#include "temperCounter.h"
#include "defines.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
#include <stdio.h>
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
I2C_HandleTypeDef hi2c2;

SPI_HandleTypeDef hspi2;

TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim3;

UART_HandleTypeDef huart1;

/* USER CODE BEGIN PV */
//static uint32_t m_button_before_time = 0;
//static int m_desired_temper;
//static int m_fixed_temper;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
static void MX_USART1_UART_Init(void);
static void MX_TIM3_Init(void);
static void MX_I2C2_Init(void);
static void MX_SPI2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
int _write(int file, char * p, int len) {
	HAL_UART_Transmit(&huart1, (uint8_t*)p, len, 10);
	return len;
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
	float temper = 0.0;
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM2_Init();
  MX_USART1_UART_Init();
  MX_TIM3_Init();
  MX_I2C2_Init();
  MX_SPI2_Init();
  /* USER CODE BEGIN 2 */

  /* OLED Start */
  SSD1306_Init();
  opening();

  /* Timer Interrupt (Temperature) */
  HAL_TIM_Base_Start_IT(&htim3);

  /* FND Start */
  init_fnd(&hspi2);

  /* Temperature Sensor Start */
  Ds18b20_Init_Simple();


  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  static int m_count = 0;
  static int m_first = 0;
  while (1)
  {

		tempCount();

		/* Temperature */
		if ((m_count > 50) || !m_first) {
			if (!isConverting()) {
				StartConverting();
			}
			CheckConverting();

			if (!isConverting()) {
				temper = getTemper();
				if(getSwState() == ON_t){ /* heater On/Off */
					heaterControl(temper);
					setBackTemper();
				}else {
					if(getHeaterState() == ON_t){
						heaterOnOff(OFF_t);
					}
				}
				m_count = 0;
				m_first = 1;
			}
		}

		m_count++;
//		HAL_Delay(10);

	  /* PB0 interrupt Switch */
//	  if(g_f_sw_up){
//		  printf("push sw_up\r\n");
//		  g_f_sw_up = 0;
//	  }
//	  if(g_f_sw_fix){
//		  printf("push sw_fix\r\n");
//		  g_f_sw_fix = 0;
//	  }
//	  if(g_f_sw_down){
//		  printf("push sw_down\r\n");
//		  g_f_sw_down = 0;
//	  }
//	  if(g_f_sw_on){
//		  printf("push sw_on\r\n");
//		  g_f_sw_on = 0;
//	  }


	  /* PB0 Switch TEST */
//	  if(!HAL_GPIO_ReadPin(PB12_START_SW_PIN_GPIO_Port, PB12_START_SW_PIN_Pin)){
//		  printf("1\r\n");
//	  }else{
//		  printf("0\r\n");
//	  }
//	  HAL_Delay(1000);

	  /* UART */
//	  printf("hello! final!!\r\n");
//	  HAL_Delay(1000);


//	  HAL_I2C_Master_Transmit(hi2c, DevAddress, pData, Size, Timeout);



//	  /* Test SSD1306 */

//	  SSD1306_Clear();
//	  SSD1306_DrawBitmap(0,0,HSBLOGO1,128,64,1);
//	  SSD1306_UpdateScreen();
//	  HAL_Delay(500);
//
//	  SSD1306_Clear();
//	  SSD1306_DrawBitmap(0,0,HSBLOGO2,128,64,1);
//	  SSD1306_UpdateScreen();
//	  HAL_Delay(500);
//
//	  SSD1306_Clear();
//	  SSD1306_DrawBitmap(0,0,HSBLOGO3,128,64,1);
//	  SSD1306_UpdateScreen();
//	  HAL_Delay(500);
//
//	  SSD1306_Clear();
//	  SSD1306_DrawBitmap(0,0,HSBLOGO4,128,64,1);
//	  SSD1306_UpdateScreen();
//	  HAL_Delay(500);
//
//	  SSD1306_Clear();
//	  SSD1306_DrawBitmap(0,0,HSBLOGO5,128,64,1);
//	  SSD1306_UpdateScreen();
//	  HAL_Delay(500);


	  /* toggle heater */
//	  if(getCurrentTemper() > 50 && getHeaterState() == t_ON){
//		  heaterControll(t_OFF);
//	  }else if(getCurrentTemper() < 45 && getHeaterState() == t_OFF) {
//		  heaterControll(t_ON);
//	  }

	  /* Temperature */
//	  Ds18b20_ManualConvert();

	  /* FND -> Temper */
//	  digit4_temper((int)(ds18b20[0].Temperature * 10), 10000);
//	  send_port(0xF8, 0b0011);




	  /* FND Test */
//	  for(int i = 0; i<=9999; i++){
//	  		  digit4_temper(i, 450); //send counter 0-9999 with delay 50 cicles and hide zero
//	    }

	  /* Test 7 Segment */
//	  send_port(0b11111110, 0b0001);
//	  HAL_Delay(1000);
//
//	  send_port(0b11111101, 0b0001);
//	  HAL_Delay(1000);
//
//	  send_port(0b11111011, 0b0001);
//	  HAL_Delay(1000);
//
//	  send_port(0b11110111, 0b0001);
//	  HAL_Delay(1000);
//
//	  send_port(0b11101111, 0b0001);
//	  HAL_Delay(1000);
//
//	  send_port(0b11011111, 0b0001);
//	  HAL_Delay(1000);
//
//	  send_port(0b10111111, 0b0001);
//	  HAL_Delay(1000);
//
//	  send_port(0b01111111, 0b0001);
//	  HAL_Delay(1000);


//	  for(int i = 0; i<=99; i++){
//		  digit2(i, 0b0001, 50); //send counter 0-99 with delay 50 cicles int 1st and 2nd view ports
//	  }

//	  for(int i = 0; i<=9999; i++){
//		  digit4_replay(i, 50); //send counter 0-9999 with delay 50 cicles and hide zero
//  }

//	  for(int i = 0; i<=9999; i++){
//		  digit4showZero_replay(i, 50); //send counter 0-9999 with delay 50 cicles and hide zero
//  }


/*
	  send_port(0x89, 0b0001);
	  HAL_Delay(500);
	  send_port(0x86, 0b0001);
	  HAL_Delay(500);
	  send_port(0xC3, 0b0001);
	  HAL_Delay(500);
	  send_port(0xC3, 0b0001);
	  HAL_Delay(500);
	  send_port(0xC0, 0b0001);
	  HAL_Delay(500);
*/




    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief I2C2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C2_Init(void)
{

  /* USER CODE BEGIN I2C2_Init 0 */

  /* USER CODE END I2C2_Init 0 */

  /* USER CODE BEGIN I2C2_Init 1 */

  /* USER CODE END I2C2_Init 1 */
  hi2c2.Instance = I2C2;
  hi2c2.Init.ClockSpeed = 400000;
  hi2c2.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c2.Init.OwnAddress1 = 0;
  hi2c2.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c2.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c2.Init.OwnAddress2 = 0;
  hi2c2.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c2.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C2_Init 2 */

  /* USER CODE END I2C2_Init 2 */

}

/**
  * @brief SPI2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SPI2_Init(void)
{

  /* USER CODE BEGIN SPI2_Init 0 */

  /* USER CODE END SPI2_Init 0 */

  /* USER CODE BEGIN SPI2_Init 1 */

  /* USER CODE END SPI2_Init 1 */
  /* SPI2 parameter configuration*/
  hspi2.Instance = SPI2;
  hspi2.Init.Mode = SPI_MODE_MASTER;
  hspi2.Init.Direction = SPI_DIRECTION_2LINES;
  hspi2.Init.DataSize = SPI_DATASIZE_8BIT;
  hspi2.Init.CLKPolarity = SPI_POLARITY_HIGH;
  hspi2.Init.CLKPhase = SPI_PHASE_2EDGE;
  hspi2.Init.NSS = SPI_NSS_SOFT;
  hspi2.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_32;
  hspi2.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi2.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi2.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi2.Init.CRCPolynomial = 10;
  if (HAL_SPI_Init(&hspi2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SPI2_Init 2 */

  /* USER CODE END SPI2_Init 2 */

}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = (72-1);
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 0xFFFF;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief TIM3 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM3_Init(void)
{

  /* USER CODE BEGIN TIM3_Init 0 */

  /* USER CODE END TIM3_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM3_Init 1 */

  /* USER CODE END TIM3_Init 1 */
  htim3.Instance = TIM3;
  htim3.Init.Prescaler = 71;
  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Init.Period = 49;
  htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim3.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim3) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim3, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM3_Init 2 */

  /* USER CODE END TIM3_Init 2 */

}

/**
  * @brief USART1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 115200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIO_LED_GPIO_Port, GPIO_LED_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, PA3_TEMP_DATA_Pin|PA6_TEST_LED_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, FND_RCLK_Pin|PB6_LED1_Pin|PB7_LED2_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(PB5_RELAY_ON_OFF_CTRL_GPIO_Port, PB5_RELAY_ON_OFF_CTRL_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : GPIO_LED_Pin */
  GPIO_InitStruct.Pin = GPIO_LED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIO_LED_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : GPIO_Switch_Pin */
  GPIO_InitStruct.Pin = GPIO_Switch_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIO_Switch_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PA3_TEMP_DATA_Pin PA6_TEST_LED_Pin */
  GPIO_InitStruct.Pin = PA3_TEMP_DATA_Pin|PA6_TEST_LED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PB0_TEMP_SET_UP_Pin PB1_TEMP_SET_FIX_Pin PB2_TEMP_SET_DOWN_Pin */
  GPIO_InitStruct.Pin = PB0_TEMP_SET_UP_Pin|PB1_TEMP_SET_FIX_Pin|PB2_TEMP_SET_DOWN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PB12_START_SW_PIN_Pin */
  GPIO_InitStruct.Pin = PB12_START_SW_PIN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(PB12_START_SW_PIN_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : FND_RCLK_Pin PB6_LED1_Pin PB7_LED2_Pin */
  GPIO_InitStruct.Pin = FND_RCLK_Pin|PB6_LED1_Pin|PB7_LED2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PB5_RELAY_ON_OFF_CTRL_Pin */
  GPIO_InitStruct.Pin = PB5_RELAY_ON_OFF_CTRL_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(PB5_RELAY_ON_OFF_CTRL_GPIO_Port, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI0_IRQn, 9, 0);
  HAL_NVIC_EnableIRQ(EXTI0_IRQn);

  HAL_NVIC_SetPriority(EXTI1_IRQn, 9, 0);
  HAL_NVIC_EnableIRQ(EXTI1_IRQn);

  HAL_NVIC_SetPriority(EXTI2_IRQn, 9, 0);
  HAL_NVIC_EnableIRQ(EXTI2_IRQn);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */
//void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin){
//	if(GPIO_Pin == PB0_TEMP_SET_UP_Pin){
//		HAL_GPIO_TogglePin(PA6_TEST_LED_GPIO_Port, PA6_TEST_LED_Pin);
//	}
//	if(GPIO_Pin == PB0_TEMP_SET_UP_Pin){
//		tempCount();
//		if ((HAL_GetTick() - m_button_before_time) > BUTTON_GAP) {
//			g_f_sw_up = 1;
//		}
//
//		m_button_before_time = HAL_GetTick();
//
//		if (g_f_sw_up) {
//			printf("push sw_up\r\n");
//			g_f_sw_up = 0;
//			//count++;
//			temper_up();
//		}
//	}
//
//	if (GPIO_Pin == PB1_TEMP_SET_FIX_Pin) {
//		tempCount();
//		if ((HAL_GetTick() - m_button_before_time) > BUTTON_GAP) {
//			g_f_sw_fix = 1;
//		}
//
//		m_button_before_time = HAL_GetTick();
//
//		if (g_f_sw_fix) {
//			printf("push sw_fix\r\n");
//			g_f_sw_fix = 0;
//			setTemp();
//			setFixedTemper();
//		}
//	}
//
//	if (GPIO_Pin == PB2_TEMP_SET_DOWN_Pin) {
//		tempCount();
//		if ((HAL_GetTick() - m_button_before_time) > BUTTON_GAP) {
//			g_f_sw_down = 1;
//		}
//
//		m_button_before_time = HAL_GetTick();
//
//		if (g_f_sw_down) {
//			printf("push sw_up\r\n");
//			g_f_sw_down = 0;
//			//count++;
//			temper_down();
//		}
//
//	}
//}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
