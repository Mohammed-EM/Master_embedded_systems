/*
 ============================================================================
 Name        : try.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void tryToModify (int x, char text[])
{
x++;
text[0]--;
}
int main(void) {
int v=5;
char name [5]= "Good";
printf("v = %d, name= %s\n",v,name);
tryToModify(v,name);
printf("v = %d, name= %s\n",v,name);
return 0;
}
