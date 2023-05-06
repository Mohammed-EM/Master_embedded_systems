/*
 ============================================================================
 Name        : alphabet.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("Enter the character or other: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &c);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		printf("The character is %c", c);
	} else {
		printf("%c That is not a character ", c);
	}
}
