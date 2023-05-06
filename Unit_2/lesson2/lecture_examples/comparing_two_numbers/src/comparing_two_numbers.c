/*
 ============================================================================
 Name        : comparing_two_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int a,b;
printf("Enter the two numbers: ");
fflush(stdout);fflush(stdin);
scanf("%d,%d",&a,&b);
printf("\r\nThe minimum number is %d",(a<b)?a:b);
}
