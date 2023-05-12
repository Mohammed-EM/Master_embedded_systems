/*
 ============================================================================
 Name        : String.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
//char a []= "100Ahmed";
//int x= 100;
//int y;
//y= x+atoi(a);
//printf("%d",y);
char text [20];
int x,y,z;
printf("Enter the first number: ");
gets(text);
x=atoi(text);
printf("Enter the second number: ");
gets(text);
y=atoi(text);
z=x+ y;
printf("The sum result is : %d",z);
}
