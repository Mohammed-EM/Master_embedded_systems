/*
 ============================================================================
 Name        : print_name.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char text[100];
printf("Enter your name: ");
//scan the first name only
fflush(stdout);fflush(stdin);
scanf("%s",text);
printf("Your name is %s\n",text);
printf("Enter your name: ");
//scan the first name only
fflush(stdout);fflush(stdin);
gets(text);
printf("Your name is %s\n",text);
}
