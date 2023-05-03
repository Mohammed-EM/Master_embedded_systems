/*
 ============================================================================
 Name        : calculation_of_area_or_circumference_of_a.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

	char choice;
	float radius;
	float area, circumference;
	printf("Enter your circle radius: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &radius);
	printf("Enter your choice (a for area, c for circumference): ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &choice);
	if (choice == 'a') {
		area = 3.14 * radius * radius;
		printf("\r\narea is %f\r\n", area);
	} else if (choice == 'c') {
		circumference = 2 * 3.14 * radius;
		printf("\r\ncircumference is %f\r\n", circumference);
	} else {
		printf("\r\nWrong choice\r\n");
	}
}
