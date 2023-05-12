/*
 ============================================================================
 Name        : vowel&consonant.c
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
	printf("Enter a character: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &c);
	switch (c) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': {
		printf("%C is vowel", c);
		break;
	}
	default: {
		printf("%c is consonant", c);
	}

	}
}
