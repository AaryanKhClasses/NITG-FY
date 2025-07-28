/*
Let main() function have a variable “num”. Write 2 functions.  First one to which “num” being passed by value. For the second  function “num” to be passed by reference. Add a constant inside  the functions to the number passed as argument. Print the value of the resulting number inside the function before and after  adding constant. Also print “num” in main() function after the  function calls are done. Observe the output. 
*/

#include <stdio.h>
void byValue(int n) {
	printf("\nCalling by Value:\n");
	printf("Before Incrementing, num = %d.\n", n);
	n++;
	printf("After Incrementing, num = %d.\n", n);
}

void byRef(int *n) {
	printf("\nCalling by Reference:\n");
	printf("Before Incrementing, num = %d.\n", *n);
	(*n)++;
	printf("After Incrementing, num = %d.\n", *n);
}

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	byValue(num);
	printf("After Calling Function, num = %d.\n", num);
	byRef(&num);
	printf("After Calling Function, num = %d.\n", num);
}
