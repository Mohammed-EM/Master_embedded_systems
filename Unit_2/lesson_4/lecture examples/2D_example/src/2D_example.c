/*
 ============================================================================
 Name        : 2D_example.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int degrees [4][6]={{36,28,76,47,82,33},{75,49,38,98,59,83},
		{82,65,10,21,86,22},
		{25,63,65,76,37,21}};
int x = 9;
int y;
//assign  x to the value (2,3)
degrees[2][3]= x;
//assign (2,3) to y
y= degrees[2][3];
//scan item (1,4) from user
fflush(stdout);fflush(stdin);
scanf("%d",&degrees[1][4]);
// print item (1,4) from user
printf("The provided values is %d",degrees[1][4]);
}
