/*
 ============================================================================
 Name        : prime.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime_no(int a, int b) {
	int k = 0;
	for (int i = a; i <= b; i++) {
		if (i == 1) {
			printf("1 ");
			continue;
		}
		for (int j = 2; j < i; j++) {
			if (i % j == 0)
				k++;
		}
		if (k == 0) {
			printf("%d ", i);
		} else if (k > 0) {
			k = 0;
		}
	}
}

int main(void) {
	int a, b;
	printf("input:n1=");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &a);
	printf(",n2=");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &b);
	prime_no(a, b);
}
