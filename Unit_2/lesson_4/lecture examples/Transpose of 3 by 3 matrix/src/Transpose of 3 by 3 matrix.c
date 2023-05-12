/*
 ============================================================================
 Name        : Transpose.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[3][3];
	float t[3][3];
	int r, c;
	for (r = 0; r < 3; r++) {
		for (c = 0; c < 3; c++) {
			printf("Enter element (%d,%d): ", r, c);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &a[r][c]);
		}
	}
	printf("The matrix is \n ");
	for (r = 0; r < 3; r++) {
		for (c = 0; c < 3; c++) {
			printf("%2.2f\t", a[r][c]);
		}
		printf("\n");
	}
	printf("Calculating the transpose\n");
	for (r = 0; r < 3; r++) {
		for (c = 0; c < 3; c++) {
			t[c][r] = a[r][c];
		}
	}
	for (r = 0; r < 3; r++) {
		for (c = 0; c < 3; c++) {
			printf("%2.2f\t", t[r][c]);
		}
		printf("\n");
	}
}
