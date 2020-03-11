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

int main(void) {
	puts("Welcome to Object Oriented C");

	Shape s1, s2;

	Shape_ctor(&s1, 0, 2);
	Shape_ctor(&s2, 1, -1);

	printf("Shape s1(x=%d, y=%d)\n", Shape_getX(&s1), Shape_getY(&s1));
	printf("Shape s2(x=%d, y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));

	Shape_moveBy(&s1, -2, 2);
	Shape_moveBy(&s2, 2, 0);

	printf("Shape s1(x=%d, y=%d)\n", Shape_getX(&s1), Shape_getY(&s1));
	printf("Shape s2(x=%d, y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));

	return EXIT_SUCCESS;
}
