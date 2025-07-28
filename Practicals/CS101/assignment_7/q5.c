/*
Write a function called isPrime() that returns 1 if the number
passed from main() function is a prime number.
*/

#include <stdio.h>

int isPrime(int);
int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Value returned by the isPrime() function is: %d.\n", isPrime(num));
}

int isPrime(int n) {
	int is = 1;
	if(n < 2) { printf("Invalid number provided.\n"); is = 0; }
	for(int i=2; i<n; i++) {
		if(n%i==0) is=0;
	}
	return is;
}
