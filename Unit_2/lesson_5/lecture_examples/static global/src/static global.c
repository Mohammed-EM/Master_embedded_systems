/*
 ============================================================================
 Name        : static.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
static int xxx;
int main(void) {
printf("main.c xxx=%d\n",xxx);
file1_func();
printf("main.c xxx=%d\n",xxx);
xxx=8;
file1_func();
printf("main.c xxx=%d\n",xxx);

}
