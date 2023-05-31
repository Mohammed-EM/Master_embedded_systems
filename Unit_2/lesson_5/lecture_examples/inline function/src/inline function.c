/*
 ============================================================================
 Name        : inline.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void file1_func (int x);
__inline int example(int x)
{
x+=3;
return x;
}
int main(void) {
int y = 7;
y = example(y);
printf("%d",y);
return 0;
}
