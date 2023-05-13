/*
 ============================================================================
 Name        : frequency.c
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
char a;
int i=0;
int count=0;
char line[100];
printf("Enter the string : ");
fflush(stdin);fflush(stdout);
gets(line);
printf("\nEnter a character to find: ");
fflush(stdin);fflush(stdout);
scanf("%c",&a);
while(line[i])
{
	if(line[i]==a)
		count++;
i++;
}
printf("The count is : %d",count);
}
