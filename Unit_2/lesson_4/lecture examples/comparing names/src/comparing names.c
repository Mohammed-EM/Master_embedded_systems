/*
 ============================================================================
 Name        : comparing.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char names[][14] = { "ahmed", "Mona", "hossam", "Ali", "yasser" };
	char name[14];
	int i;
	printf("Enter the name pls: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",name);
	for (i = 0; i < 5; i++) {
		if (stricmp(names[i], name) == 0) {
			printf("Congratulation you Name on the list %s ", name);
			break;
		}
	}
	if (i == 5) {
		printf("sorry your name does not exist ");
	}
}
