/**
 * @file Check3.h
 * @author Janhavi Gomase
 * @brief Display the output of the temperature sensor
 * @version 0.1
 * @date 2021-08-01
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef __Check3_H__
#define __Check3_H__
#include<avr/io.h>
/**
 * @brief Function definition
 *
 * @param temp_value
 * @return char
 */
char OutPWM(uint16_t temp_value);
void InitPWM(void);
#endif
