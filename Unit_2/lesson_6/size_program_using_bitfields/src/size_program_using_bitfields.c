/*
 ============================================================================
 Name        : size_program_using_bitfields.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct status_type
{
float pay;
unsigned cts:1;
unsigned dsr:1;
unsigned ring:1;
unsigned rec_line:1;
} status;
int main(int argt, char** argv) {

	status.cts = 1;
	printf("size of structure = %d ", sizeof(status));
}
