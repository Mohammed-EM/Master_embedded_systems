/*
 ============================================================================
 Name        : finding.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findName(char names [][14],int n, char name[])
{
	int i=0;
	for (;i<5;i++)
	{
		if (strcmp(name,names)==0)
			return 1;
		else
			return 0;
	}

}

int main(void) {
char name[14];
char names [][14]={"Alaa","Osama","Mamdouh","Samy","Hossain"};
puts("Enter your first name: ");
gets(name);
if(findName(names, 5, name)== 1)
	puts("Welcome");
else
	puts("Goodbye");
return 0;
}
