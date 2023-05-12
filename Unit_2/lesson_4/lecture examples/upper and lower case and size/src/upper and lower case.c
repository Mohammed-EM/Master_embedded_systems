/*
 ============================================================================
 Name        : upper.c
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
char a []= "ahmed";
char b []= "HossAM";
strlwr(a);
strupr(&b[0]);
printf("%s\n%s",&a,b);
printf("\nlens of string a is :%d ",strlen(a));
}
