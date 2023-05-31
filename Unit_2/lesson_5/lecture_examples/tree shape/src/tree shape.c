/*
 ============================================================================
 Name        : tree.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void tree ()
{
	int i=0,j=0;
	for (;i<10;i++)
	{
		for (j=9;j-i>=0;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
int main(void) {
tree();
return 0;
}
