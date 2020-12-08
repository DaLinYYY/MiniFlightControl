/*
 * @Author: YangSL
 * @Date: 2020-07-12 14:03:20
 * @LastEditTime: 2020-07-15 21:18:20
 * @Description:  
 */ 
#include "gpio.h"
#include "led.h"
#include "main.h"
#include "stm32f1xx_hal_gpio.h"
#include <stdint.h>
/**
 * @Date: 2020-07-13 20:21:17
 * @Description:  打开LED
 */
void led_open(void)
{
    HAL_GPIO_WritePin(GPIOE, LED1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, LED2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, LED3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOE, LED4_Pin, GPIO_PIN_RESET);
}

/**
 * @Date: 2020-07-13 20:21:33
 * @Description:  关闭led
 */
void led_off(void)
{
    HAL_GPIO_WritePin(GPIOE, LED1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOE, LED2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOE, LED3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOE, LED4_Pin, GPIO_PIN_SET);
}

/**
 * @Date: 2020-07-13 20:25:57
 * @Description:  led闪烁
 */
void led_flicker(void)
{
    HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
    HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
    HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
    HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
}

/**
 * @Date: 2020-07-15 20:02:04
 * @Description:  enable pwm led
 */
void led_pwm_enable(void)
{

}

/**
 * @Date: 2020-07-15 20:14:04
 * @Description:  disable pwm led
 */
void led_pwm_disable(void)
{

}


void set_led_pwm_duty(uint8_t channel, uint32_t pwm_duty)
{

    
}
