/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SDIO_INPUT_Pin GPIO_PIN_13
#define SDIO_INPUT_GPIO_Port GPIOC
#define N_sense_b_Pin GPIO_PIN_0
#define N_sense_b_GPIO_Port GPIOC
#define N_USERL1_Pin GPIO_PIN_1
#define N_USERL1_GPIO_Port GPIOC
#define N_USERL2_Pin GPIO_PIN_2
#define N_USERL2_GPIO_Port GPIOC
#define N_sense_a_Pin GPIO_PIN_2
#define N_sense_a_GPIO_Port GPIOA
#define N_98PW_RST_Pin GPIO_PIN_3
#define N_98PW_RST_GPIO_Port GPIOA
#define N_98PW_NSS_Pin GPIO_PIN_4
#define N_98PW_NSS_GPIO_Port GPIOA
#define N_98PW_SCK_Pin GPIO_PIN_5
#define N_98PW_SCK_GPIO_Port GPIOA
#define N_98PW_MISO_Pin GPIO_PIN_6
#define N_98PW_MISO_GPIO_Port GPIOA
#define N_98PW_MOSI_Pin GPIO_PIN_7
#define N_98PW_MOSI_GPIO_Port GPIOA
#define N_98PW_DIO0_Pin GPIO_PIN_4
#define N_98PW_DIO0_GPIO_Port GPIOC
#define N_98PW_DIO0_EXTI_IRQn EXTI4_IRQn
#define N_98PW_DIO1_Pin GPIO_PIN_5
#define N_98PW_DIO1_GPIO_Port GPIOC
#define N_98PW_DIO1_EXTI_IRQn EXTI9_5_IRQn
#define N_BUZZER_Pin GPIO_PIN_15
#define N_BUZZER_GPIO_Port GPIOA
#define N_USER_BUTTON_Pin GPIO_PIN_5
#define N_USER_BUTTON_GPIO_Port GPIOB
#define N_fire_b_Pin GPIO_PIN_8
#define N_fire_b_GPIO_Port GPIOB
#define N_fire_a_Pin GPIO_PIN_9
#define N_fire_a_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
