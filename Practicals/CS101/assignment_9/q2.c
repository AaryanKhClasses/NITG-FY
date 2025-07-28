/*
Declare a character array as char charArray[10]; Assign the base
address of the array to a character pointer. Read the elements of
the character array and print the elements of the character array
element by element using the pointer.
*/

#include <stdio.h>

int main() {
	char charArray[10], *p;
	p = &charArray[0];
	printf("Enter 10 characters: ");
	for(int i = 0; i < 10; i++) scanf("%c", p+i);
	printf("\nThe entered string is: ");
	for(int i = 0; i < 10; i++) printf("%c", *(p+i));
	printf("\n");
}
