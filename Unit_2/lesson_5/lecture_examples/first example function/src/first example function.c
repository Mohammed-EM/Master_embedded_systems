/*
 ============================================================================
 Name        : first.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcum(float x, float y)
{
float m;
m = 5*(x+y)*(x+y) + 3*x + 2*6 + 2;
return m;
}

int main(void) {
float z;
z= (calcum(3,2)+sqrt(pow(calcum(6,1.5), 3.2f) +calcum(5,3.4)))/calcum(13,1.2);
printf("z= %f\n",z);
}
