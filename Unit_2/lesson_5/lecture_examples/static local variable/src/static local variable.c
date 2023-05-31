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
void my_print()
{
static int x=0;
int y=0;
x++;
y++;
printf("x value is %d && y value is %d\n",x,y);
}
int main(void) {
for(int i=0; i<10;i++)
	my_print();
}
