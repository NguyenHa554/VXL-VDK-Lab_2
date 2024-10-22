/*
 * softwareTimer.h
 *
 *  Created on: Oct 8, 2024
 *      Author: ADMIN
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_


#include "main.h"

void setTimer0 (int duration);
void setTimer1 (int duration);
void setTimer2 (int duration);
void setTimer3 (int duration);

void timer_run();
int getFlag0();
int getFlag1();
int getFlag2();
int getFlag3();



#endif /* INC_SOFTWARETIMER_H_ */
