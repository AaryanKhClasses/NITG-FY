/*
To swap the values of two numbers in a function called
swapNumbers(). The main must call this function. The values of
the numbers must be printed in main () before and after calling
swapNumbers() function. The numbers must be printed in the
swapNumbers() function before returning from function.
*/

// Call by Value
#include <stdio.h>

void swapNumbers(int, int);
int main() {
	int a, b;
	printf("Enter the values of a and b: ");
	scanf("%d %d", &a, &b);
	printf("Before calling swapNumbers(): a = %d, b = %d.\n", a, b);
	swapNumbers(a, b);
	printf("After calling swapNumbers(): a = %d, b = %d.\n", a, b);
}

void swapNumbers(int x, int y) {
	int t = x;
	x = y;
	y = t;
	printf("During calling swapNumbers(): a = %d, b = %d.\n", x, y);
}
