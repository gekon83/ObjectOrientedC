/*
 * rect.c
 *
 *  Created on: 11.03.2020
 *      Author: kozlowsg
 */

#include "rect.h"

void Rectangle_ctor(Rectangle * const me, int16_t x, int16_t y, uint16_t width, uint16_t height) {
	Shape_ctor(&me->super, x, y);
	me->width = width;
	me->height = height;
}
