/*
 ============================================================================
 Name        : comparing.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, c;
	printf("Enter the three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d/%d/%d", &a, &b, &c);
	if (a > b) {
		if (a > c) {
			printf("The largest number is: %d", a);
		} else {
			printf("The largest number is: %d", c);
		}
	} else {
		if (b > c) {
			printf("The largest number is: %d", b);
		} else {
			printf("The largest number is: %d", c);
		}
	}
}
