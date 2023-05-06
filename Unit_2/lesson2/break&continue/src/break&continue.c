/*
 ============================================================================
 Name        : break&continue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	for (i = 0; i < 10; i++) {
		if (i == 4) {
			printf("coming out the loop if i = 4\n");
			break;
		}
		printf("%d\n", i);
	}

	for (i = 0; i < 10; i++) {
		if (i == 5 || i == 6) {
			printf("\nSkipping %d from display using continue statement \n", i);
			continue;
		}
		printf("%d", i);
	}
}
