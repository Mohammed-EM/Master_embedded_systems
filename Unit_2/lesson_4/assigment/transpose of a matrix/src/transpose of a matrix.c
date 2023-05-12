/*
 ============================================================================
 Name        : transpose.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, k;
	int i, j;
	printf("please enter the size of the matrix (i,j) :");
	fflush(stdin);
	fflush(stdout);
	scanf("(%d,%d)", &n, &k);
	int x[n][k];
	int y[k][n];
	for (i = 0; i < n; i++) {
		for (j = 0; j < k; j++) {
			printf("\nPlease enter element (%d,%d): ", i, j);
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &x[i][j]);
		}
	}
	printf("\n");

	for (i = 0; i < n; i++) {
		for (j = 0; j < k; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < k; j++) {
			y[j][i] = x[i][j];
		}
	}
	printf("\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < k; j++) {
			printf("%d ", y[i][j]);
		}
		printf("\n");
	}

}
