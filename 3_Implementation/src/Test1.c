/**
 * @file Check1.c
 * @author Janhavi Gomase
 * @brief Chanfes the state of LED
 * @version 0.1
 * @date 2021-08-01
 *
 * @copyright Copyright (c) 2021
 *
 */
// include files
#include<avr/io.h>
#include "Check1.h"
/**
 * @brief Change the state of the LED Pin according to the value of state
 *
 * @param state Pin level to which the LED Pin should be set
 */
void ledstat(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
void InitLED(void)
{
	DDRB|=(1<<PB0);
    DDRD&=~(1<<PD1);
    PORTD|=(1<<PD1);
    PORTD|=(1<<PD4);
}
