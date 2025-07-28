// Write a C program to count the number of digits in a number.
#include <stdio.h>
int main() {
	int n, _n, digits = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	_n = n;
	while(n!=0) {
		n/=10;
		digits++;
	}
	printf("The number of digits in %d is %d.\n", _n, digits);
}
