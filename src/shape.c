/*
 * shape.c
 *
 *  Created on: 11.03.2020
 *      Author: kozlowsg
 */

#include <assert.h>
#include "shape.h"

static uint32_t Shape_area_(Shape const * const me);
static void Shape_draw_(Shape const * const me);

void Shape_ctor(Shape * const me, int16_t x, int16_t y) {
	static struct ShapeVtbl const vbtl = {
			&Shape_area_,
			&Shape_draw_
	};
	me->vptr = &vbtl;
	me->x = x;
	me->y = y;
}

void Shape_moveBy(Shape * const me, int16_t dx, int16_t dy) {
	me->x += dx;
	me->y += dy;
}

static uint32_t Shape_area_(Shape const * const me) {
	assert(0);
	return 0U;
}

static void Shape_draw_(Shape const * const me) {
	assert(0);
}

Shape const *largestShape(Shape const *shapes[], uint32_t nShapes) {
	Shape const *s = (Shape *)0;
	uint32_t max = 0U;
	uint32_t i;

	for (i=0U; i<nShapes; ++i) {
		uint32_t area = Shape_area(shapes[i]);
		if (area > max) {
			max = area;
			s = shapes[i];
		}
	}

	printf("largest area = %d\n", max);
	return s;
}

void drawAllShapes(Shape const *shapes[], uint32_t nShapes) {
	uint32_t i;
	for (i=0U; i<nShapes; ++i)
		Shape_draw(shapes[i]);
}

int16_t Shape_getX(Shape * const me) {
	return me->x;
}

int16_t Shape_getY(Shape * const me) {
	return me->y;
}
