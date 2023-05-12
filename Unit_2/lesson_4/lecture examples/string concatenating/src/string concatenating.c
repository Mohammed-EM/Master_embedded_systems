/*
 ============================================================================
 Name        : string.c
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
char a[]= "Ahmed ";
char b[]= "Hossam ";
strcat(a," ");
strcat(a,b);
printf("%s",a);
}
