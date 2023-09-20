/*
 ============================================================================
 Name        : adding_using_structure.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Sdistance {
	int feet;
	float inch;
};
struct Sdistance read_structure(char rank [])
{
	struct Sdistance X;
	printf("Enter information for the %s distance \n", rank);
	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &X.feet);
	printf("\nEnter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &X.inch);
	return X;
}
float addTwoDistance(struct Sdistance A, struct Sdistance B)
{
	float distance;
	distance = (A.feet + B.feet) + (A.inch + B.inch)/12;
	return distance;
}
int main(void) {
struct Sdistance X,Y;
float result;
X = read_structure("1st");
Y = read_structure("1st");
result = addTwoDistance(X,Y);
printf("\nSum of distances= %f", result);
}
