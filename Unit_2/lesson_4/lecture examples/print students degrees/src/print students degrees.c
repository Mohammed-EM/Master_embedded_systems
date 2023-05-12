/*
 ============================================================================
 Name        : print.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i;
float degrees[10];
for (i=0;i<10;i++)
{
	printf("Enter student %d degree: ",i+1);
	fflush(stdin);fflush(stdout);
	scanf("%f",&degrees[i]);
}
for (i=0;i<10;i++)
{
	printf("student %d degree is %f\n",i+1,degrees[i]);
}
}
