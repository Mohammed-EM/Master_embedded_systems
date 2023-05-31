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
void reverse(char text[])
{
static int i=0;
static char reversed [100];
reversed[i]=text[strlen(text)-i-1];
i++;
if (i < strlen(text))
{
	reverse(text);
}
reversed [i]='\0';
printf("\nString len of reversed is %d",strlen(reversed));
printf("%s",reversed);
//return reversed;
}

int main(void) {
char text [100]="moh";
//char result [100];
//printf("Enter a sentence : ");
//fflush(stdin);fflush(stdout);
//scanf("%s",text);
reverse(text);
//strcpy(result, reverse(text));
//printf("\nString len of text is %d",strlen(text));
//printf("\n%s",result);
}
