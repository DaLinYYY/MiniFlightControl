/*
 * @Author: YangSL
 * @Date: 2020-12-08 21:15:17
 * @LastEditTime: 2020-12-09 10:15:42
 * @Description:  
 */

#ifndef FLIGHT_TYPE_DEF_H_
#define FLIGHT_TYPE_DEF_H_

#include "define.h"
#include <mpu6050.h>

typedef struct
{
    MPU6050_t*       GY521;
}Flight_t;



#endif
