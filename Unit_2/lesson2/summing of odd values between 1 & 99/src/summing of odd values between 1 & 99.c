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
int i=1, sum=0;
while(i<=99)
{
	sum+=i;
	i+=2;
}
printf("The summation between 1& 99 equal %d",sum);
}
