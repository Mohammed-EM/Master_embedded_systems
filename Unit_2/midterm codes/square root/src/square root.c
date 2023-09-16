/*
 ============================================================================
 Name        : square.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float square_root(int x) {
	float z = 0;
	z = sqrt(x);
	return z;

}
int main(void) {
	while (1) {
		unsigned int x = 0;
		printf("Input-> ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &x);
		printf("Output->%f \n", square_root(x));
	}
}
