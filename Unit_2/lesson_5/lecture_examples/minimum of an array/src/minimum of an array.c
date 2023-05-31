/*
 ============================================================================
 Name        : minimum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float minarr(float arr[], int n);

int main(void) {
	float arrx[] = { 10, 2, 55, 10, 33, 22, 33 };
	float arry[] = { 2.2, 55, 8.8, 0, 99, 9.2 };
	printf("The minimum of x, y is (%f,%f)", minarr(arrx, 7), minarr(arry, 6));

}
float minarr(float arr[], int n) {
	int i, minval = arr[0];
	for (i = 0; i < n; i++) {
		if (minval > arr[i]) {
			minval = arr[i];
		}
	}
	return minval;
}
