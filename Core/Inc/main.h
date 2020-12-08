/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define PWM1_Pin GPIO_PIN_0
#define PWM1_GPIO_Port GPIOA
#define PWM2_Pin GPIO_PIN_1
#define PWM2_GPIO_Port GPIOA
#define PWM3_Pin GPIO_PIN_2
#define PWM3_GPIO_Port GPIOA
#define PWM4_Pin GPIO_PIN_3
#define PWM4_GPIO_Port GPIOA
#define GT2401_CSN_Pin GPIO_PIN_4
#define GT2401_CSN_GPIO_Port GPIOA
#define GT2401_SCK_Pin GPIO_PIN_5
#define GT2401_SCK_GPIO_Port GPIOA
#define GT2401_MISO_Pin GPIO_PIN_6
#define GT2401_MISO_GPIO_Port GPIOA
#define GT2401_MOSI_Pin GPIO_PIN_7
#define GT2401_MOSI_GPIO_Port GPIOA
#define ADC_3V3_Pin GPIO_PIN_0
#define ADC_3V3_GPIO_Port GPIOB
#define ADC_POWER_Pin GPIO_PIN_1
#define ADC_POWER_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_9
#define LED1_GPIO_Port GPIOE
#define LED2_Pin GPIO_PIN_10
#define LED2_GPIO_Port GPIOE
#define LED3_Pin GPIO_PIN_11
#define LED3_GPIO_Port GPIOE
#define LED4_Pin GPIO_PIN_12
#define LED4_GPIO_Port GPIOE
#define MPU_SCL_Pin GPIO_PIN_10
#define MPU_SCL_GPIO_Port GPIOB
#define MPU_SDA_Pin GPIO_PIN_11
#define MPU_SDA_GPIO_Port GPIOB
#define MPU_xda_Pin GPIO_PIN_12
#define MPU_xda_GPIO_Port GPIOB
#define MPU_XCL_Pin GPIO_PIN_13
#define MPU_XCL_GPIO_Port GPIOB
#define MPU_ADD_Pin GPIO_PIN_14
#define MPU_ADD_GPIO_Port GPIOB
#define MPU_INT_Pin GPIO_PIN_15
#define MPU_INT_GPIO_Port GPIOB
#define TIM4_CH1_LED5_Pin GPIO_PIN_12
#define TIM4_CH1_LED5_GPIO_Port GPIOD
#define TIM4_CH2_LED6_Pin GPIO_PIN_13
#define TIM4_CH2_LED6_GPIO_Port GPIOD
#define TIM4_CH3_LED7_Pin GPIO_PIN_14
#define TIM4_CH3_LED7_GPIO_Port GPIOD
#define TIM4_CH4_LED8_Pin GPIO_PIN_15
#define TIM4_CH4_LED8_GPIO_Port GPIOD
#define GT2401_IRQ_Pin GPIO_PIN_8
#define GT2401_IRQ_GPIO_Port GPIOA
#define GT2401_CE_Pin GPIO_PIN_11
#define GT2401_CE_GPIO_Port GPIOA
#define MPU_TX_Pin GPIO_PIN_10
#define MPU_TX_GPIO_Port GPIOC
#define MPU_RX_Pin GPIO_PIN_11
#define MPU_RX_GPIO_Port GPIOC
#define MPU_UART_SCL_Pin GPIO_PIN_0
#define MPU_UART_SCL_GPIO_Port GPIOD
#define MPU_UART_SDA_Pin GPIO_PIN_1
#define MPU_UART_SDA_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
