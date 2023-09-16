/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum_digits(int x)
{int z =0, sum =0;
for(int i = x; i>0 ; i/=10)
{
	z=i%10;
	sum+=z;
	}
return(sum);

}

int main(void) {
while(1)
{
unsigned int x = 0;
printf("\nInput-> ");
fflush(stdin);fflush(stdout);
scanf("%d",&x);
printf("\nOutput-> %d",sum_digits(x));
}
}
