/*
 ============================================================================
 Name        : structure_with_function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct SDate {
	int m_Day;
	int m_Month;
	int m_Year;
};
struct SEmployee {
	char m_Name[50];
	struct SDate m_BirthDate;
	struct SDate m_GraduationDate;
	int m_Salary;
};
struct SDate readDate(char dateName[]) {
	struct SDate date;
	printf("Enter %s (day/month/year) example (12/3/2020)", dateName);
	fflush(stdin);
	fflush(stdout);
	scanf("%d/%d/%d", &date.m_Day, &date.m_Month, &date.m_Year);
	return date;
}
struct SEmployee readEmployee() {
	struct SEmployee employee;
	char firstName[50], secondName[50];

	printf("Enter the first name: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s", firstName);
	printf("Enter the second name: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s", secondName);

	strcpy(employee.m_Name, strcat(strcat(firstName, " "), secondName));
	employee.m_BirthDate = readDate("the birth date");
	employee.m_GraduationDate = readDate("the Graduation date");

	printf("Enter the employee salary: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &employee.m_Salary);

	return employee;
}

void printEmployee(struct SEmployee employee) {
	printf("%s\t%d/%d/%d\t%d/%d/%d\t/%d\n", employee.m_Name,
			employee.m_BirthDate.m_Day, employee.m_BirthDate.m_Month,
			employee.m_BirthDate.m_Year, employee.m_GraduationDate.m_Day,
			employee.m_GraduationDate.m_Month, employee.m_GraduationDate.m_Year,
			employee.m_Salary);
}
int main(void) {
struct SEmployee x = readEmployee();
printEmployee(x);
}
