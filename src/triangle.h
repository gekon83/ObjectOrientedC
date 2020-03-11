/*
 * triangle.h
 *
 *  Created on: 11.03.2020
 *      Author: kozlowsg
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "shape.h"

typedef struct {
	Shape super;
	uint16_t width;
	uint16_t height;
} Triangle;

void Triangle_ctor(Triangle * const me, int16_t x, int16_t y, uint16_t width, uint16_t height);

#endif /* TRIANGLE_H_ */
