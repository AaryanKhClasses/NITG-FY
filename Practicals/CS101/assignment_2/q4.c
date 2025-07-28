// Take a number from user and check a number is even or odd.

#include <stdio.h>
int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num % 2 == 0) printf("The number is even.\n");
	else printf("The number is odd.\n");
}
