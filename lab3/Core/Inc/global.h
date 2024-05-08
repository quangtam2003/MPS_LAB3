/*
 * global.h
 *
 *  Created on: May 7, 2024
 *      Author: ACER
 */

#ifndef __GLOBAL_H_
#define __GLOBAL_H_


#define RED_INIT		30
#define YELLOW_INIT		5
#define GREEN_INIT		25

void LedTimeDurationInit();
extern int mode;
extern int red_value, yellow_value, green_value;
extern int red_draft, yellow_draft, green_draft;

#endif /* INC_GLOBAL_H_ */
