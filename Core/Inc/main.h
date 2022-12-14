/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32wlxx_hal.h"

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
#define LED_Pin GPIO_PIN_3
#define LED_GPIO_Port GPIOB
#define INT_IMU_Pin GPIO_PIN_5
#define INT_IMU_GPIO_Port GPIOA
#define nRESET_IMU_Pin GPIO_PIN_6
#define nRESET_IMU_GPIO_Port GPIOA
#define GPS_RESET_Pin GPIO_PIN_7
#define GPS_RESET_GPIO_Port GPIOA
#define Camera_2_Pin GPIO_PIN_8
#define Camera_2_GPIO_Port GPIOA
#define Camera_1_Pin GPIO_PIN_9
#define Camera_1_GPIO_Port GPIOA
#define COTS1_Pin GPIO_PIN_2
#define COTS1_GPIO_Port GPIOB
#define COTS1B12_Pin GPIO_PIN_12
#define COTS1B12_GPIO_Port GPIOB
#define nBOOT_IMU_Pin GPIO_PIN_12
#define nBOOT_IMU_GPIO_Port GPIOA
void   MX_SUBGHZ_Init(void);
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
