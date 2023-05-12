/*
 ============================================================================
 Name        : calculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b;
	char x;
	printf("Enter the first number/ operand/ the second number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f/%c/%f", &a, &x, &b);
	if (x == '+')
		printf("%.2f+ %.2f = %.2f", a, b, a + b);
	else if (x == '-')
		printf("%.2f- %.2f = %.2f", a, b, a - b);
	else if (x == '*')
		printf("%.2f* %.2f = %.2f", a, b, a * b);
	else if (x == '/') {
		if (b == 0)
			printf("Division by zero !!!");
		else
			printf("%.2f/ %.2f = %.2f", a, b, a / b);
	} else
		printf("Sorry, Enter the operator again (+ - * /)");

}
