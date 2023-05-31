/*
 ============================================================================
 Name        : local.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int my_add(int x,int y)
{
int z;
z= x + y;
return z;
}
int my_mull(int x,int y)
{
int z;
z= x * y;
return z;
}
int main(void) {
int a=5,b=6;
printf("The add of %d and %d is %d \n",a,b,my_add(a,b));
printf("The mult of %d and %d is %d",a,b,my_mull(a,b));
}
