/*
 ============================================================================
 Name        : factorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fact(int a)
{static int i =1,f=1;
f*=i;
i++;
if (i<=a)
	fact(a);
return f;
}
int main(void) {
int x =0,y;
puts("Enter an positive integers : ");
fflush(stdin);fflush(stdout);
scanf("%d",&y);
x=fact(y);
printf("Factorial of %d is %d",y,x);
}
