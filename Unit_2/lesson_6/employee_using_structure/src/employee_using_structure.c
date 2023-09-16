/*
 ============================================================================
 Name        : employee_using_structure.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SEmpolyee {
	char m_Name[50];
	int m_BirthDateYear;
	int m_BirthDateMonth;
	int m_BirthDateDay;
	int m_Salary;
};
int main(void) {
	struct SEmpolyee x, y, z;
	strcpy(x.m_Name, "Ahmed Said");
	x.m_BirthDateDay = 22;
	x.m_BirthDateMonth = 12;
	x.m_BirthDateYear = 1980;
	x.m_Salary = 500;
	printf("x contains(%s, %d/%d/%d, %d)\n", x.m_Name, x.m_BirthDateDay,
			x.m_BirthDateMonth, x.m_BirthDateYear, x.m_Salary);
	strcpy(y.m_Name, x.m_Name);
	y.m_BirthDateDay = x.m_BirthDateDay;
	y.m_BirthDateMonth = x.m_BirthDateMonth;
	y.m_BirthDateYear = x.m_BirthDateYear;
	y.m_Salary = x.m_Salary;

	printf("y contains(%s, %d/%d/%d, %d)\n", y.m_Name, y.m_BirthDateDay,
			y.m_BirthDateMonth, y.m_BirthDateYear, y.m_Salary);

	z = x;

	printf("z contains(%s, %d/%d/%d, %d)\n", z.m_Name, z.m_BirthDateDay,
			z.m_BirthDateMonth, z.m_BirthDateYear, z.m_Salary);

}
