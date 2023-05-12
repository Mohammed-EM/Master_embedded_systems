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

int main(void) {
float arr1 [2][2];
float arr2 [2][2];
float sum[2][2] ={{0,0},{0,0}};
int i,j;
for (i=0;i<2;i++)
{for(j=0;j<2;j++)
{printf("please enter element for array_1 (%d,%d): ",i,j);
fflush(stdin);fflush(stdout);
scanf("%f",&arr1[i][j]);
	}
}
for (i=0;i<2;i++)
{for(j=0;j<2;j++)
{printf("\nplease enter element for array_2 (%d,%d): ",i,j);
fflush(stdin);fflush(stdout);
scanf("%f",&arr2[i][j]);
	}
}
for (i=0;i<2;i++)
{for(j=0;j<2;j++)
{sum[i][j]=arr1[i][j]+arr2[i][j];
	}
}
for (i=0;i<2;i++)
{for(j=0;j<2;j++)
{printf("%f",sum[i][j]);
	}
printf("\n");
}
}
