/*
 ============================================================================
 Name        : unique.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int unique(int a[], int len) {
	int z = 0;
	int count = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			if (a[i] == a[j])
				count++;
		}
		if (count == 1) {
			z = a[i];
			break;
		}
		count = 0;
	}
	return z;
}
int main(void) {
	while (1) {
		int len;
		printf("Enter array length ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &len);
		int a[100];

		for (int i = 0; i < len; i++) {
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &a[i]);

		}
		printf("int a[%d]={", len);
		for (int i = 0; i < len; i++) {
			if (i == len - 1) {
				printf("%d", a[i]);
				break;
			}
			printf("%d,", a[i]);
		}
		printf("}");
		printf("\nOutput-> %d\n", unique(a, len));
		memset(a, 0, sizeof(a));
	}
}
