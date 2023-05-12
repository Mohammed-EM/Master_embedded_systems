/*
 ============================================================================
 Name        : insert.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int n,element,loc,arrloc;
int i;
printf("Enter no of elements : ");
fflush(stdin);fflush(stdout);
scanf("%d",&n);
printf("\n");
int x[n];
for (i=0;i<n;i++)
{
	x[i]=i;
}
for (i=0;i<n;i++)
{
	printf("%d ",x[i]);
}
int y[n+1];

printf("\nEnter the element to be inserted : ");
fflush(stdin);fflush(stdout);
scanf("%d",&element);
printf("\nEnter the location : " );
fflush(stdin);fflush(stdout);
scanf("%d",&loc);
arrloc=loc-1;
for (i=0;i<arrloc;i++)
{
	y[i]=x[i];
}
y[arrloc]=element;
for (i=arrloc;i<n;i++)
{y[i+1]=x[i];
}
for (i=0;i<n+1;i++)
{
	printf("%d ",y[i]);
}
}
