/* A program to  calculate what year someone will turn a speicific age */
#include <stdio.h>
#define TARGET_AGE 88

int year1, year2;

int calcYear(int year1);

int main(void)
{
	// Ask the user for the birth year
	printf("What year was the subject born? ");
	printf("Enter as a 4-digit year (yyyy): ");
	scanf(" %d", &year1);

	// Calculate the future year and display it
	year2 = calcYear(year1);

	printf("Someoneborn in %d will be %d in %d.", year1, TARGET_AGE, year2);

	return 0;

}

/* The function to get the future year */
int calcYear(int year1)
{
	return(year1+TARGET_AGE);
}
