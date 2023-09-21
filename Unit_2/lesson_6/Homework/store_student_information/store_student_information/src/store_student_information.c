/*
 ============================================================================
 Name        : store_student_information.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SStudent {
	int roll_number;
	char name[10];
	int marks ;
};
struct SStudent readStructure ()
{
	struct SStudent X;
printf("Enter the roll number ");
fflush(stdin);fflush(stdout);
scanf("%d", &X.roll_number);
printf("\nEnter the name: ");
fflush(stdin);fflush(stdout);
scanf("%s", X.name);
printf("\nEnter the marks: ");
fflush(stdin);fflush(stdout);
scanf("%d", &X.marks);
return X;
}
void printStudentInformation(struct SStudent X)
{
	printf("Information for roll number %d:\nName: %s\nMarks: %d\n", X.roll_number, X.name, X.marks);
}
int main(void) {
struct SStudent student[3];
printf("Enter information of students: \n");
for(int i = 0; i<3; i++)
{
	student[i] = readStructure();
}
printf("\nDisplaying information of students: \n");
for(int i = 0; i<3; i++)
{
	printStudentInformation(student[i]);
}
}
