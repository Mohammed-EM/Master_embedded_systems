/*
 ============================================================================
 Name        : power.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int a, int b)
{
static int i =0, m=1;
m*=a;
i++;
if (i<b)
	power(a,b);
return m;
}

int main(void) {
int x,n,result;
printf("Enter the base number : ");
fflush(stdin);fflush(stdout);
scanf("%d",&x);
printf("Enter power number (positive interger) : ");
fflush(stdin);fflush(stdout);
scanf("%d",&n);
result=power(x,n);
printf("%d^%d = %d",x,n,result);
}
