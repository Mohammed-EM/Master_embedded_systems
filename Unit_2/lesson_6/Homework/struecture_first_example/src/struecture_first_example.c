/*
 ============================================================================
 Name        : struecture_first_example.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Sstudent {
	char name[6];
	int roll_number;
	float marks;
};
int main(void) {

	struct Sstudent student_1;
	char first_name[6];
	printf("Enter information of students: \n\n");
	fflush(stdin);
	fflush(stdout);
	printf("Enter name: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s", first_name);
	strcpy(student_1.name, first_name);
	fflush(stdin);
	fflush(stdout);
	printf("\nEnter roll number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &student_1.roll_number);
	printf("\nEnter marks: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &student_1.marks);
	fflush(stdin);
	fflush(stdout);
	printf("\nDisplaying Information\n");
	printf("name:%s\nRoll:%d\nMarks:%f", student_1.name, student_1.roll_number,
			student_1.marks);

}
