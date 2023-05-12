/*
 ============================================================================
 Name        : coping.c
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
char a[20]= "Ahmed ali";
char b[20];
//int i=0;
//while(a[i] != 0)
//{
//	b[i]=a[i];
//	i++;
//}
//b[i]=0;
//printf("%s\n",b);
strcpy(b,a);
printf("%s",b);
}
