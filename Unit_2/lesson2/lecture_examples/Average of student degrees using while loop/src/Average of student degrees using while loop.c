/*
 ============================================================================
 Name        : Average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nstudents = 1;
	float degree, sum;
	printf("Enter negative value to exit the loop\r\n");
	while (1) {
		printf("Enter the student (%d) degree: ", nstudents);
		fflush(stdout);
		fflush(stdin);
		scanf("%f", &degree);
		if (degree < 0)
			break;
		sum += degree;
		nstudents++;
	}
	printf("The average degree of the students is : %f", sum / nstudents);
}
