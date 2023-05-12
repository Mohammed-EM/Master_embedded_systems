/*
 ============================================================================
 Name        : even&odd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter a number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &x);
	if (x % 2 == 0) {
		printf("number %d is even!",x);
	} else {
		printf("number %d is odd!",x);
	}
}
