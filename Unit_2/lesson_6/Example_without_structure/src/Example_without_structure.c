/*
 ============================================================================
 Name        : Example_without_structure.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void) {
// variables defination
	char names[100][50];
	int birthDateYears[100];
	int birthDateMonths[100];
	int birthDateDays[100];
	int salaries[100];
	int count = 0;
	char firstName[50], secondName[50];
	char tempName[50];
	int tempbirthDateYears;
	int tempbirthDateMonths;
	int tempbirthDateDays;
	int tempsalaries;
	int i = 0, j = 0;
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
//		strcpy(names[count], firstName);
//		strcat(names[count], " ");
//		strcpy(names[count], secondName);
		// Combine first and second names using sprintf
		sprintf(names[count], "%s %s", firstName, secondName);

		printf("Enter employee birthdate (day/month/year) : ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d/%d/%d", &birthDateDays[count], &birthDateMonths[count],
				&birthDateYears[count]);
		printf("Enter employee salary : ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &salaries[count]);

		count++;
		if (count == 100) {
			break;
		}
//		printf("If you want to add more press 'y' to continue \n");
//
//	} while (getch() == 'y');
		fflush(stdin);
		fflush(stdout);
		continueAdding = getchar(); // Read the character to continue

	} while (continueAdding == 'y' || continueAdding == 'Y');
	for (i = 0; i < count - 1; i++) {
		for (j = i + 1; j < count; j++) {
			if ((birthDateYears[j] < birthDateYears[i])
					|| ((birthDateYears[j] == birthDateYears[i])
							&& (birthDateMonths[j] < birthDateMonths[i]))
					|| (((birthDateYears[j] == birthDateYears[i])
							&& (birthDateMonths[j] == birthDateMonths[i]))
							&& (birthDateDays[j] < birthDateDays[i]))) {
				strcpy(tempName, names[i]);
				tempbirthDateYears = birthDateYears[i];
				tempbirthDateMonths = birthDateMonths[i];
				tempbirthDateDays = birthDateDays[i];
				tempsalaries = salaries[i];

				strcpy(names[i], names[j]);
				birthDateYears[i] = birthDateYears[j];
				birthDateMonths[i] = birthDateMonths[j];
				birthDateDays[i] = birthDateDays[j];
				salaries[i] = salaries[j];

				strcpy(names[j], tempName);
				birthDateYears[j] = tempbirthDateYears;
				birthDateMonths[j] = tempbirthDateMonths;
				birthDateDays[j] = tempbirthDateDays;
				salaries[j] = tempsalaries;
			}
		}
	}
	for (i = 0; i < count; i++) {
		printf("%s\t%d\t%d\t%d\t%d", names[i], birthDateDays[i],
				birthDateMonths[i], birthDateYears[i], salaries[i]);
	}
	return 0;
}
