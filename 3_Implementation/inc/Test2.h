/**
 * @file Check2.h
 * @author Janhavi Gomase
 * @brief Check2 function definition
 * @version 0.1
 * @date 2021-08-01
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef __Check2_H__
#define __Check2_H__
/**
 * @brief Reading the analog input and returning a digital 8bit value
 *
 * @param ch
 * @return uint16_t
 */
uint16_t ReadADC(uint8_t ch);
void InitADC();
#endif
