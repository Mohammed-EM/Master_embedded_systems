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
int factorial(int x);
int main(void) {
	printf("The factorial of %d is %d ", 10, factorial(10));
	printf("The factorial of %d is %d ", 0, factorial(0));
	printf("The factorial of %d is %d ", 5, factorial(5));

}
int factorial(int x) {
	int f = 1;
	int i = x;
	for (; i > 0; i--) {
		f *= i;
	}
	if (x == 0)
		f = 1;
	return f;
}
