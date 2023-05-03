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
int i, nstudents;
float degree, sum;
printf("Enter the number of the students: ");
fflush(stdout);fflush(stdin);
scanf("%d",&nstudents);
for(i=1, sum=0; i<=nstudents; i++)
{
	printf("Enter the student degree: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&degree);
	sum+=degree;
}
printf("The average degree of (%d) students is :%f",nstudents,sum/nstudents);
}
