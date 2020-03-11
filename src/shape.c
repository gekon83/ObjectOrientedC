/*
 * shape.c
 *
 *  Created on: 11.03.2020
 *      Author: kozlowsg
 */

#include "shape.h"

void Shape_ctor(Shape * const me, int16_t x, int16_t y) {
	me->x = x;
	me->y = y;
}

void Shape_moveBy(Shape * const me, int16_t dx, int16_t dy) {
	me->x += dx;
	me->y += dy;
}

int16_t Shape_getX(Shape * const me) {
	return me->x;
}

int16_t Shape_getY(Shape * const me) {
	return me->y;
}
