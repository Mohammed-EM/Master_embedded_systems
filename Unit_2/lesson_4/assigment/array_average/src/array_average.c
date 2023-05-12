/*
 ============================================================================
 Name        : array_average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int n,i;
float sum=0;
float average;
printf("Enter the number of elements: ");
fflush(stdout);fflush(stdin);
scanf("%d",&n);
float arr1 [n];
for (i=0;i<n;i++)
{
printf("Enter element number %d : ",i+1);
fflush(stdin);fflush(stdin);
scanf("%f",&arr1[i]);
sum += arr1[i];
}
average=sum/n;
printf("The average is : %f",average);
}
