/*
 ============================================================================
 Name        : assign.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int xxx=7;
void file1_func();
int main(void) {
	printf("main.c xxx=%d\n",xxx);
	file1_func();
	printf("main.c xxx=%d\n",xxx);
	xxx=8;
	file1_func();
	printf("main.c xxx=%d\n",xxx);
}
