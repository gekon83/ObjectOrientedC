/*
 * circle.c
 *
 *  Created on: 11.03.2020
 *      Author: kozlowsg
 */

#include "circle.h"

static uint32_t Circle_area_(Shape const * const me);
static void Circle_draw_(Shape const * const me);

void Circle_ctor(Circle * const me, int16_t x, int16_t y, uint16_t radius) {

	static struct ShapeVtbl const vtbl = {
			&Circle_area_,
			&Circle_draw_
	};

	Shape_ctor(&me->super, x, y);
	me->super.vptr = &vtbl;
	me->radius = radius;
}

static uint32_t Circle_area_(Shape const * const me) {
	Circle const * const me_ = (Circle *)me;
	// pi = 3.1415 ~ 3 (unsigned)
	return 3U * (uint16_t)me_->radius * (uint16_t)me_->radius;
}
static void Circle_draw_(Shape const * const me) {
	Circle const * const me_ = (Circle const *)me;
	printf("Circle_draw_(x=%d, y=%d, r=%d)\n", me_->super.x, me_->super.y, me_->radius);
}
