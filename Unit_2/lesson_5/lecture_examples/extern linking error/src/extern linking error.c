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
extern int yyy;
int main(void) {
yyy=1;
printf("%d",yyy);
}
int yyy;
