/*
 ============================================================================
 Name        : count.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int ones_in_binary(int x) {
	int count = 0;
	for (int i = x; i > 0; i /= 2) {
		if (i % 2 == 1)
			count++;
	}
	return count;
}
int main(void) {
	while (1) {
		int x;
		printf("Input-> ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &x);
		printf("Output-> %d\n", ones_in_binary(x));
	}
}
