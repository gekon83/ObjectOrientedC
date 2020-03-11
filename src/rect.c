/*
 * rect.c
 *
 *  Created on: 11.03.2020
 *      Author: kozlowsg
 */

#include "rect.h"

static uint32_t Rectangle_area_(Shape const * const me);
static void Rectangle_draw_(Shape const * const me);

void Rectangle_ctor(Rectangle * const me, int16_t x, int16_t y, uint16_t width, uint16_t height) {

	static struct ShapeVtbl const vtbl = {
			&Rectangle_area_,
			&Rectangle_draw_
	};

	Shape_ctor(&me->super, x, y);
	me->super.vptr = &vtbl;
	me->width = width;
	me->height = height;

}

static uint32_t Rectangle_area_(Shape const * const me) {
	Rectangle const * const me_ = (Rectangle const *)me;
	return (uint32_t)me_->width * (uint32_t)me_->height;
}

static void Rectangle_draw_(Shape const * const me) {
	Rectangle const * const me_ = (Rectangle const *)me;
	printf("Rectangle_draw_(x=%d, y=%d, w=%d, h=%d)\n", me_->super.x, me_->super.y, me_->width, me_->height);
}
