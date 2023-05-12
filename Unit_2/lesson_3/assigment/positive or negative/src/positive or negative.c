/*
 ============================================================================
 Name        : positive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int x;
printf("Enter the number: ");
fflush(stdout);fflush(stdin);
scanf("%d",&x);
if(x==0)
	printf("You entered zero");
else if (x>0)
	printf("you entered positive number : %d",x);
else
	printf("You entered negative number : %d",x);
}
