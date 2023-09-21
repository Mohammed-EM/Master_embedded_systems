/*
 ============================================================================
 Name        : adding_two_complex_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SComplex
{
	float real;
	float img;
};

struct SComplex readStructure(char rank[])
{
	struct SComplex H;
	printf("For %s complex number\n", rank);
	printf("Enter the real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f\n%f",&H.real,&H.img);
	return H;
}
struct SComplex addTwoComplexNumbers(struct SComplex X, struct SComplex Y)
{
	struct SComplex C;
	C.real = X.real + Y.real;
	C.img = X.img + Y.img;
	return C;
}
void printStructure(struct SComplex C)
{
	printf("\nSum=%.1f+%.1fi",C.real,C.img);
}
int main(void) {
struct SComplex A, B, C;
A = readStructure("1st");
B = readStructure("2st");
C = addTwoComplexNumbers(A, B);
printStructure(C);
}
