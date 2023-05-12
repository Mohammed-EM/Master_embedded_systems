/*
 ============================================================================
 Name        : product.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
float pro, result=1;
int i;
for (i=0; i<4; i++)
{printf("Enter the number %d: ",i+1);
fflush(stdout);fflush(stdin);
scanf("%f",&pro);
if (pro == 0)
{continue;}
result*=pro;
}
printf("The result of the product of the 4 numbers is: %f",result);
}
