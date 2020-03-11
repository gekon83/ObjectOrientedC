/*
 * rect.h
 *
 *  Created on: 11.03.2020
 *      Author: kozlowsg
 */

#ifndef RECT_H_
#define RECT_H_

#include "shape.h"

typedef struct {
	Shape super;
	uint16_t width;
	uint16_t height;
} Rectangle;

void Rectangle_ctor(Rectangle * const me, int16_t x, int16_t y, uint16_t width, uint16_t height);

#endif /* RECT_H_ */
