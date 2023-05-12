/*
 ============================================================================
 Name        : largest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
float a,b,c;
printf("Enter 3 numbers: ");
fflush(stdout);fflush(stdin);
scanf("%f/%f/%f",&a,&b,&c);
if(a>b && a>c)
{printf("%.2f is the largest",a);
}
if(b>a && b>c)
{printf("%.2f is the largest",b);
}
if(c>a && c>b)
{printf("%.2f is the largest",c);
}
}
