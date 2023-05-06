/*
 ============================================================================
 Name        : create.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
float x,y;
do
{
	printf("Enter a value: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&x);
	y= 5 * x * x+ 3 * x+ 2;
	printf("\r\n y(%f)=%f",x,y);
	printf("\r\n do you want to continue (y or n)?: ");
}
while(getche()=='y');
}
