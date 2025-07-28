/*
Take a number from user in the main function. A function called
factorial () that is invoked in main () function passing the number
by value. The factorial () function must return the factorial value
of the number passed. The factorial value returned from main ()
function must be printed in main () function.
*/

#include <stdio.h>
int factorial(int);
int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("The factorial of %d is %d.\n", num, factorial(num));
}

int factorial(int n) {
	int res = 1;
	for(int i=n; i>0; i--) res*=i;
	return res;
}
