/*
 * @Author: YangSL
 * @Date: 2020-07-12 16:32:44
 * @LastEditTime: 2020-07-12 16:38:13
 * @Description:  
 */ 
#ifndef APPLICATION_TASK_TASK_DATE_TYPE_H_
#define APPLICATION_TASK_TASK_DATE_TYPE_H_

#include <stdint.h>
#include <stdbool.h>

typedef struct TASK_DATE_TYPE
{
    /* data */
    volatile uint32_t task_time_1ms;
    volatile uint32_t task_time_5ms;
    volatile uint32_t task_time_10ms;

};



#endif 