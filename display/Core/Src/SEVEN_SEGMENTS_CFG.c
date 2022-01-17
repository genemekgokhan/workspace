/*
 * seven_segment_cfg.c
 *
 *  Created on: Jan 14, 2022
 *      Author: gokhan.tekinok
 */
#include "SEVEN_SEGMENTS.h"

const SEVEN_SEG_CfgType SEVEN_SEG_CfgParam[SEVEN_SEG_UNITS] =
{
	// 7-Segments Display Unit 1 Configurations
    {
    	/* Seven Segments Pins Info */
	    {GPIOA, GPIOA, GPIOA, GPIOA, GPIOA, GPIOA, GPIOA},
		{GPIO_PIN_0, GPIO_PIN_1, GPIO_PIN_2, GPIO_PIN_3, GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_6},
		/* Enable Control Signal's Pins */
		{GPIOB, GPIOB, GPIOB},
		{GPIO_PIN_14, GPIO_PIN_13, GPIO_PIN_12}
	}
};

