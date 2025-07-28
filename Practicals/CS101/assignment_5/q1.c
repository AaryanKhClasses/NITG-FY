// Write a C program to print all the natural numbers in reverse using while loop.
#include <stdio.h>
int main() {
	int n;
	printf("Enter the value of N: ");
	scanf("%d", &n);
	for(int i = n; i > 0; i--) printf("%d ", i);
	printf("\n");
}
