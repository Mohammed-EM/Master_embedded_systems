/*
 ============================================================================
 Name        : reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse_string(char x[], int len) {
	char y[len];
	char z[len];
	int k =0;
	int l=0;
	for (int i = 0; i<len; i++)
	{

		if (x[i]==32)
		{break;}
		z[l]=x[i];
		l++;
	}
	for (int i = 0; i <= len; i++) {

		if (x[i] == 32) {
			for (int j = i + 1; j <= len; j++) {
				y[k] = x[j];
				k++;
			}
printf("%s",y);
printf(" %s",z);
		}
	}

}
int main(void) {
	char x[] = "mohamed gamal";
	int len = strlen(x);

	reverse_string(x, len);
}
