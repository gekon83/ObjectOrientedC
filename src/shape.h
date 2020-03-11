/*
 * shape.h
 *
 *  Created on: 11.03.2020
 *      Author: kozlowsg
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include "stdint.h"

typedef struct {
	int16_t x;
	int16_t y;
} Shape;

void Shape_ctor(Shape * const me, int16_t x, int16_t y);
void Shape_moveBy(Shape * const me, int16_t dx, int16_t dy);

int16_t Shape_getX(Shape * const me);
int16_t Shape_getY(Shape * const me);

#endif /* SHAPE_H_ */
