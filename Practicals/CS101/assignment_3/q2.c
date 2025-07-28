// Write a program to determine wheter a year entered is leap or not.

#include <stdio.h>
int main() {
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);
	if(year % 4 == 0) {
		if(year % 100 == 0) {
			if(year % 400 == 0) printf("The year %d is a leap year.\n", year);
			else printf("The year %d is not leap.\n", year);
		} else printf("The year %d is a leap year.\n", year);
	} else printf("The year %d is not leap.\n", year);
}
