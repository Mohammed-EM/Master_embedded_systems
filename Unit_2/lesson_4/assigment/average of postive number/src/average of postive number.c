/*
 ============================================================================
 Name        : average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i , n;
float average, m, sum;
printf("Enter the maximum no of inputs: ");
fflush(stdin);fflush(stdout);
scanf("%d",&n);
for (i=0; i<n; i++)
{printf("\nEnter the number %d: ",i+1);
fflush(stdin);fflush(stdout);
scanf("%f",&m);
if (m<0)
{break;}
sum+= m;
	}
average = sum/i ;
printf("\nthe average is %f",average);
}
