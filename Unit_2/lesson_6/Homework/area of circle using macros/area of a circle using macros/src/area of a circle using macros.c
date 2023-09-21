/*
 ============================================================================
 Name        : area.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.14
struct SCircle {
	float radius;
};
float area(struct SCircle S) {
	float circle_area;
	circle_area = PI * S.radius * S.radius;
	return circle_area;
}
int main(void) {
	float radius, area_of_circle;
	printf("Enter the circle radius: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &radius);
	struct SCircle circle_1 = { radius };
	area_of_circle = area(circle_1);
	printf("Area = %f", area_of_circle);
}
// The solution of the next assignment
// size of union = 32
// size of structure = 40
//
