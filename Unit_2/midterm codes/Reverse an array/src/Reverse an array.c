/*
 ============================================================================
 Name        : Reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void reverse(int x[],int len)
{
int y[len];
printf("Output-> ");
for (int i=0;i<len;i++)
{
y[i]=x[len-i-1];
if(i==len-1)
{
printf("%d",y[i]);
break;
}
printf("%d,",y[i]);
}
}

int main(void) {
int x[100];
int len;
printf("Enter array length ");
fflush(stdin);fflush(stdout);
scanf("%d",&len);
printf("Enter array elements ");
for (int i =0;i<len; i++)
{
	fflush(stdin);fflush(stdout);
	scanf("%d",&x[i]);
}
printf("a[%d]={",len);
for (int i =0 ; i< len; i++)
{
if(i==len-1)
{
printf("%d",x[i]);
break;
}
printf("%d,",x[i]);
}
printf("}\n");
reverse(x,len);
}
