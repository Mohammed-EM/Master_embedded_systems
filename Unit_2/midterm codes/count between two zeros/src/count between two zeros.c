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
int count_zeros(int x) {
	int count = 0,i,j;
	int a[100];
	for ( i=0;x>0;i++)
	{
		a[i]=x%2;
		x=x/2;
	}
	for (j=i-1;j>=2;j--)
	{
		if (a[j-1]>a[j])
		{
			count++;
			for (int k = j-1;k>=2;k--)
			{

				if(a[k]==a[k-1])
				{
					count++;
				}
				if(a[k-1]>a[k-2])
				{
					break;
				}
			}
		}
//			count++;
//		if(a[j-1]==a[j-2])
//			count++;
//		if(a[j-1]>a[j-2])
//			break;
	}
	return count;
}

int main(void) {
	int x = 110;
	printf("%d", count_zeros(x));

}
