/*
 ============================================================================
 Name        : reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void reverse(int x[], int size) {
	int y[10];
	for (int i = 0; i < size; i++) {
		y[size - i - 1] = x[i];
	}
	printf("\nOutput-> ");
	for (int i = 0; i < size; i++) {
		printf("%d", y[i]);
	}

}
int main(void) {
	int x[] = { 2, 4, 5, 7 };
	int y[] = { 1, 0, 5, 7 };
	int sizex = sizeof(x) / sizeof(x[0]);
	int sizey = sizeof(y) / sizeof(y[0]);
	printf("Input-> ");
	for (int i = 0; i < sizex; i++) {
		printf("%d", x[i]);
	}
	reverse(x, sizex);
	printf("\n");
	printf("Input-> ");
	for (int i = 0; i < sizey; i++) {
		printf("%d", y[i]);
	}

	reverse(y, sizey);
}
