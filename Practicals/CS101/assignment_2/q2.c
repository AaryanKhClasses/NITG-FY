/*
Take a floating-point number from user. Print this number using
following specifications and record (note) your observations.
a. Using %f
b. Using %.2f
c. Using %5.2f
d. Using %05.2f
*/

#include <stdio.h>
int main() {
	float num;
	printf("Enter a floating point number: ");
	scanf("%f", &num);
	printf("The floating point number is %f, %.2f, %5.2f, and %05.2f\n", num, num, num, num);
}
