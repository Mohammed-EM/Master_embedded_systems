/*
 ============================================================================
 Name        : simple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, loc, ele;
	int i;
	printf("Enter no of elements : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	printf("\n");
	int x[n];
	for (i = 0; i <= n; i++) {
		x[i] = (i + 1) * 11;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", x[i]);
	}
	printf("\nEnter element to be searched: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &ele);
	for (i = 0; i <= n; i++) {
		if (ele == x[i])
			loc = i + 1;
	}
	printf("\nThe location is %d", loc);
}
