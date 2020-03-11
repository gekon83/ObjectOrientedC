/*
 * triangle.c
 *
 *  Created on: 11.03.2020
 *      Author: kozlowsg
 */

#include "triangle.h"

static uint32_t Triangle_area_(Shape const * const me);
static void Triangle_draw_(Shape const * const me);

void Triangle_ctor(Triangle * const me, int16_t x, int16_t y, uint16_t width, uint16_t height) {

	static struct ShapeVtbl const vtbl = {
			&Triangle_area_,
			&Triangle_draw_
	};

	Shape_ctor(&me->super, x, y);
	me->super.vptr = &vtbl;
	me->width = width;
	me->height = height;

}

static uint32_t Triangle_area_(Shape const * const me) {
	Triangle const * const me_ = (Triangle *)me;
	return (uint16_t)me_->width * (uint16_t)me_->height * 0.5;
}

static void Triangle_draw_(Shape const * const me) {
	Triangle const * const me_ = (Triangle const *)me;
	printf("Triangle_draw_(x=%d, y=%d, w=%d, h=%d)\n", me_->super.x, me_->super.y, me_->width, me_->height);
}
