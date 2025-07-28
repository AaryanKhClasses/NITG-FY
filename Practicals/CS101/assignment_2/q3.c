// Take a number from the user and check if the number is positive or negative.

#include <stdio.h>
int main() {
	float num;
	printf("Enter a number: ");
	scanf("%f", &num);
	if(num > 0) printf("The number is positive.\n");
	else if(num < 0) printf("The number is negative.\n");
	else printf("The number is zero.\n");
}
