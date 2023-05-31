/*
 ============================================================================
 Name        : reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Reverse() {
	char c;
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);
	if (c != '\n') {
		Reverse();
		printf("%c", c);
	}

}
int main(void) {
	printf("Enter a sentence : ");
	Reverse();
	return 0;
}
