/*
 ============================================================================
 Name        : extern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char gname[50];
void welcome()
{
printf("\n Welcome mr %s",gname);
}
void goodbye()
{
printf("\n goodbye mr %s",gname);
}
int main(void) {
puts("please enter your name :");
gets(gname);
welcome();
goodbye();
}
