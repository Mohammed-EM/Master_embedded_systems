/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int xxx=1;
void file1_func(int x)
{
	x+=3;
	printf("file1_func x = %d ",x);

	__asm__("movl $10, %eax;"
			"movl $20, %ebx;"
			"addl %ebx,%eax;");

}
int main(void) {
int x =10;
file1_func(x);
}
