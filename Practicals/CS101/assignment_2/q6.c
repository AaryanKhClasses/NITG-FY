/*
Declare a character variable and set an integer value to it. Print
the variable by “%c” and “%d”. Check the difference. [NOTE:
Ensure the number assigned is a value from ASCII table]
*/

#include <stdio.h>
int main() {
	char num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	printf("ASCII value of %c is %d\n", num, num);
}
