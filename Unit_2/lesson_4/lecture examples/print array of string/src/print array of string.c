/*
 ============================================================================
 Name        : print.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char names [][14] = {"Ahmed osama","Mohammed ashraf","mohsen adel","halo game","youssef ali"};
int i;
for (i=0 ; i<5; i++)
{
	printf("%s\n",names[i]);}
}
