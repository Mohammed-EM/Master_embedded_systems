/*
 ============================================================================
 Name        : primary.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void prime_num(int a, int b) {
	int i = a;
	int x = 0;
	printf("prime numbers between %d and %d are :  ", a, b);
	for (; i <= b; i++) {
		for (int j = 2; j < i; j++) {
		 if (i % j == 0) {
			x++;
		}
	}
	if (x == 0) {
		if (i == 1) {
			continue;
		}
		printf("%d ", i);
	}
	x = 0;
}
}
int main(void) {
int x, y;
printf("Enter two numbers(intervals): ");
fflush(stdin);
fflush(stdout);
scanf("%d\n%d", &x, &y);
prime_num(x, y);
}
