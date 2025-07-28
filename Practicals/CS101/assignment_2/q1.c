/*
Take an integer from user. Print this integer using following
specifications and record (note) your observations.
a. Using %d
b. Using %6d
c. Using %06d.
*/

#include <stdio.h>
int main() {
	int num;
	printf("Enter an integer number: ");
	scanf("%d", &num);
	printf("Your integer number is %d, %6d, and %06d\n", num, num, num);
}
