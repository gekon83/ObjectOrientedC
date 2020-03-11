/*
 * circle.h
 *
 *  Created on: 11.03.2020
 *      Author: kozlowsg
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "shape.h"

typedef struct {
	Shape super;
	uint16_t radius;
} Circle;

void Circle_ctor(Circle * const me, int16_t x, int16_t y, uint16_t radius);

#endif /* CIRCLE_H_ */
