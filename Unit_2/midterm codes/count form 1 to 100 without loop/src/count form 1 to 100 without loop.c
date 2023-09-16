/*
 ============================================================================
 Name        : count.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int print_count()
{
static int i =0;
static int sum =0;
sum+=i;
i++;
if(i<=100)
	print_count();
return sum;

}
int main(void) {
print_count();
printf("%d",print_count());
}
