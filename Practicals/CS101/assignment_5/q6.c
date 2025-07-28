// Write a C Program to calculate product of digits of a number.
#include <stdio.h>
int main() {
	int n, _n, prod = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	_n = n;
	while(n!=0) {
		prod *= n%10;
		n/=10;
	}
	printf("The product of digits of %d is %d.\n", _n, prod);
}
