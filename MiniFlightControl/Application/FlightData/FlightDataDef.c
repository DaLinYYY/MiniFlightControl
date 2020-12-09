/*
 * @Author: YangSL
 * @Date: 2020-12-08 21:14:30
 * @LastEditTime: 2020-12-08 21:48:31
 * @Description:  
 */

#include <stddef.h>
#include <string.h>
#include "FlightDataDef.h"


static MPU6050_t    GY521_DEFAULT_PARAM;


Flight_t  FLIGHTT_PARAM = {
		.GY521	= &GY521_DEFAULT_PARAM
};

Flight_t * Flight = &FLIGHTT_PARAM;
