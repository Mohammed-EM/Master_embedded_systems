/*
 ============================================================================
 Name        : add_complex_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SComplex
{
	double m_R; // real part
	double m_I; // Imaginary part
};
struct SComplex readComplex(char name[])
{
struct SComplex complex;
printf("Enter %s complex number (Ex: 5, -3): ",name);
fflush(stdin);fflush(stdout);
scanf("%lf, %lf",&complex.m_R, &complex.m_I);
return complex;
}
struct SComplex addComplex(struct SComplex A, struct SComplex B)
{
struct SComplex com_sum;
com_sum.m_R = A.m_R + B.m_R;
com_sum.m_I = A.m_I + B.m_I;
return com_sum;
}
void printComplex (char name [], struct SComplex C)
{
printf("%s = (%lf) + j(%lf) \n", name , C.m_R, C.m_I);
}
int main(void) {
struct SComplex X, Y, Z;
X = readComplex("X");
Y = readComplex("Y");
Z = addComplex(X, Y);
printComplex("Z", Z);
}
