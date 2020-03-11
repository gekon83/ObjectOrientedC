/*
 ============================================================================
 Name        : ObjectOrientedC.c
 Author      : gekon83
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "shape.h"
#include "rect.h"
#include "triangle.h"
#include "circle.h"

int main(void) {
	puts("Welcome to Object Oriented C");

	// ---- part 1 ---- //
	/*
	Shape s1, s2;
	Shape_ctor(&s1, 0, 2);
	Shape_ctor(&s2, 1, -1);

	printf("Shape s1(x=%d, y=%d)\n", Shape_getX(&s1), Shape_getY(&s1));
	printf("Shape s2(x=%d, y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));

	Shape_moveBy(&s1, -2, 2);
	Shape_moveBy(&s2, 2, 0);

	printf("Shape s1(x=%d, y=%d)\n", Shape_getX(&s1), Shape_getY(&s1));
	printf("Shape s2(x=%d, y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));
	/**/

	// ---- part 2 ---- //
	/*
	Rectangle r1, r2;

	Rectangle_ctor(&r1, -1, 2, 2, 3);
	Rectangle_ctor(&r2, 1, 1, 3, 1);

	printf("Rectangle r1(x=%d, y=%d, w=%d, h=%d)\n", Shape_getX(&r1.super), Shape_getY(&r1.super), r1.width, r1.height);
	printf("Rectangle r2(x=%d, y=%d, w=%d, h=%d)\n", r2.super.x, r2.super.y, r2.width, r2.height);

	Shape_moveBy((Shape *)&r1, -2, -1);
	Shape_moveBy(&r2.super, 1, 1);

	printf("Rectangle r1(x=%d, y=%d, w=%d, h=%d)\n", Shape_getX(&r1.super), Shape_getY(&r1.super), r1.width, r1.height);
	printf("Rectangle r2(x=%d, y=%d, w=%d, h=%d)\n", r2.super.x, r2.super.y, r2.width, r2.height);
	/**/

	Rectangle r1, r2;
	Triangle t1, t2;
	Circle c1, c2;

	Shape const *shapes[] = {
			&r1.super,
			&t1.super,
			&c1.super,
			&t2.super,
			&c2.super,
			&r2.super
	};

	Shape const *s;

    Rectangle_ctor(&r1, 0, 2, 3, 4);
    Rectangle_ctor(&r2, -1, 3, 5, 1);

    Triangle_ctor(&t1, -2, 5, 4, 6);
    Triangle_ctor(&t2, 0, 0, 8, 2);

    Circle_ctor(&c1, 4, 1, 5);
    Circle_ctor(&c2, -4, -1, 3);

	s = largestShape(shapes, sizeof(shapes)/sizeof(shapes[0]));
	printf("largestShape s(x=%d, y=%d)\n", Shape_getX(s), Shape_getY(s));

	drawAllShapes(shapes, sizeof(shapes)/sizeof(shapes[0]));

	return EXIT_SUCCESS;
}
