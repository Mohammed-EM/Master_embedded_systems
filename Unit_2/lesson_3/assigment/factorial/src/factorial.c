/*
 ============================================================================
 Name        : factorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned long long int f=1; int i = 1, x;
	printf("Enter the number which you want to calculate the factorial of: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &x);
	for (; i <= x; i++) {
		if (x<0)
			break;
		f *= i;
	}
	printf("The factorial of %d is %llu", x, f);
}
