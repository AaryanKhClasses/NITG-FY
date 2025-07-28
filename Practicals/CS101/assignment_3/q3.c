// Take an integer input from the user and check if the number is divisble by 3.

#include <stdio.h>
int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num % 3 == 0) printf("The number %d is divisble by 3.\n", num);
	else printf("The number %d is not divisble by 3.\n", num);
}
