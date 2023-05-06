/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, sum = 0, i = 0;
	printf("Enter the number to count: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &num);
	do {
		sum += i;
		i++;
	} while (i <= num);
	printf("The sum of natural number to %d is %d", num, sum);
}
