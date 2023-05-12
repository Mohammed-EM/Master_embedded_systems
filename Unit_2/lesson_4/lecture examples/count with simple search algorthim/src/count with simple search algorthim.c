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
#include <string.h>

int main(void) {
	char x[10];
	int i = 0, count;
	for (; i < 10; i++) {
		x[i] = rand();
	}
	for (i = 1; i < 9; i++) {
		if (x[i] > x[i - 1] && x[i] > x[i + 1])
			count++;
	}
	printf("%d", count);
}
