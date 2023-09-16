/*
 ============================================================================
 Name        : sort_employee_using_sturcture.c
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
struct SEmployee {
	char m_Name[50];
	int m_BirthDateDay;
	int m_BirthDateMonth;
	int m_BirthDateYear;
	int m_Salary;
};
struct SDate {
	int m_Day;
	int m_Month;
	int m_Year;
};
struct SWorker {
	char name[50];
	struct SDate m_BirhtDate;
	struct SDate m_GraduationDate;
	int m_Salary;
};
int main(void) {
	struct SEmployee employee[100], tempEmployee;
	struct SEmployee x = { "Mohammed", 22, 3, 1992, 5000 };
	struct SWorker y = { "mohammed", { 22, 10, 2020 }, { 23, 11, 2023 }, 500 };
	printf(
			"%s\t birthdate: %d/%d/%d \t Graduationdate: %d/%d/%d \t Salary: %d \n",
			y.name, y.m_BirhtDate.m_Day, y.m_BirhtDate.m_Month,
			y.m_BirhtDate.m_Year, y.m_GraduationDate.m_Day,
			y.m_GraduationDate.m_Month, y.m_GraduationDate.m_Year, y.m_Salary);
	printf("%s\t%d/%d/%d\t%d\t\n", x.m_Name, x.m_BirthDateDay,
			x.m_BirthDateMonth, x.m_BirthDateYear, x.m_Salary);
	int count = 0, i, j;
	char firstName[50], secondName[50];
	char continueAdding;
	do {
		printf("Enter employee first name : ");
		fflush(stdin);
		fflush(stdout);
		scanf("%s", firstName);

		printf("Enter employee second name : ");
		fflush(stdin);
		fflush(stdout);
		scanf("%s", secondName);

		strcpy(employee[count].m_Name, firstName);
		strcat(employee[count].m_Name, " ");
		strcpy(employee[count].m_Name, secondName);

		printf(
				"Enter employee birthdate (Day/Month/Year) for example (14/3/1993): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d/%d/%d", &employee[count].m_BirthDateDay,
				&employee[count].m_BirthDateMonth,
				&employee[count].m_BirthDateYear);

		printf("Enter employee salary :");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &employee[count].m_Salary);
		count++;
		if (count == 100)
			break;
		printf("Do you want to continue y or n ?\n");
		fflush(stdin);
		fflush(stdout);
		continueAdding = getchar();
	} while (continueAdding == 'y' || continueAdding == 'Y');

	for (i = 0; i < count - 1; i++) {
		for (j = i + 1; j < count; j++) {
			if (employee[i].m_BirthDateYear > employee[j].m_BirthDateYear
					|| (employee[i].m_BirthDateYear
							== employee[j].m_BirthDateYear
							&& employee[i].m_BirthDateMonth
									> employee[j].m_BirthDateMonth)
					|| (employee[i].m_BirthDateYear
							== employee[j].m_BirthDateYear
							&& employee[i].m_BirthDateYear
									== employee[j].m_BirthDateYear
							&& employee[i].m_BirthDateDay
									== employee[j].m_BirthDateDay)) {
				tempEmployee = employee[i];
				employee[i] = employee[j];
				employee[j] = tempEmployee;

			}

		}
	}

	for (i = 0; i < count; i++) {
		printf("%s\t%d/%d/%d\t%d\n", employee[i].m_Name,
				employee[i].m_BirthDateDay, employee[i].m_BirthDateMonth,
				employee[i].m_BirthDateYear, employee[i].m_Salary);
	}
}
