/*
Declare a character array as char charArray[10]. Read the array
using scanf() function and %s. Print the same using printf()
function. Observe what happens when scanf() and printf() is used
for reading and printing multi-word strings.
*/

#include <stdio.h>

int main() {
	char charArray[10];
	printf("Enter 10 characters: ");
	scanf("%s", &charArray);
	printf("\nThe given string is: %s.\n", charArray);
}
