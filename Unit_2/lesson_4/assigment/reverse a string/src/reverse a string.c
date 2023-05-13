/*
 ============================================================================
 Name        : reverse.c
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
char a[20],b[20];
int i=0;
printf("Enter a string : ");
fflush(stdin);fflush(stdout);
gets(a);
while(a[i])
{b[i]=a[strlen(a)-(i+1)];
i++;
	}
b[i]=0;
printf("The copied string is %s",b);

}
