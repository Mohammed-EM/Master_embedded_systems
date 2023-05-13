/*
 ============================================================================
 Name        : string_len.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char a[20],b[20];
int i=0;
printf("Enter a string : ");
fflush(stdin);fflush(stdout);
scanf("%s",&a);
while(a[i])
{b[i]=a[i];
i++;
	}
b[i]=0;
printf("The copied string is %s",&b);

}
