/*
 ============================================================================
 Name        : create.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {
	float x, y;
	evaluate_again: printf("Enter x number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &x);
	y = 3 * x * x + 3 * x + 2;
	printf("\r\ny(%f)= %f", x, y);
	printf("\r\ndo you want to evaluate again (y or n):");
	if (getche() == 'y')
		goto evaluate_again;
}
