/*
 ============================================================================
 Name        : switch_case_example.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
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
	switch (choice) {
	case 'a':
	case 'A': {
		area = 3.14 * radius * radius;
		printf("\r\narea is %f\r\n", area);
	}
		break;
	case 'c':
	case 'C': {
		circumference = 2 * 3.14 * radius;
		printf("\r\ncircumference is %f\r\n", circumference);
	}
		break;
	default: {
		printf("\r\nWrong Choice\r\n");
	}
		break;
	}
}
