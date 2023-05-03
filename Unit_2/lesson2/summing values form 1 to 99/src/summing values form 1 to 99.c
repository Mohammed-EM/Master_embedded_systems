/*
 ============================================================================
 Name        : summing.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i, sum=0;
for(i=1; i<=99; i++)
{
	sum+=i;
}
printf("summation between 1 & 99 equal: %d",sum);
}
