/*
Declare a pair of character arrays as char charArray1[10],
charArray2[10]; Initialise the elements of charArray1 while
declaring. Read the elements of charArray2 character by
character from user. Print the elements of both the character
arrays using a loop.
*/

#include <stdio.h>

int main() {
	char charArray1[10] = "AaryanKh07", charArray2[10];
	printf("Enter 10 characters: ");
	for(int i = 0; i < 10; i++) scanf("%c", &charArray2[i]);
	printf("\nThe strings are: ");
	for(int i = 0; i < 10; i++) printf("%c", charArray1[i]);
	printf(" ");
	for(int i = 0; i < 10; i++) printf("%c", charArray2[i]);
	printf("\n");
}
