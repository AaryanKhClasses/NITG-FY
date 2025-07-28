/*
Declare a character array as char charArray[10]. Use the gets()
and puts() functions to read and print the string. Compare the
same with scanf() and printf() functions when multi-word strings
are read.
*/

#include <stdio.h>

int main() {
	char charArray[10];
	printf("Enter 10 characters: ");
	gets(charArray);
	printf("\nThe given string is using gets() and puts() is: ");
	puts(charArray);
	printf("Enter 10 characters: ");
	scanf("%s", &charArray);
	printf("\nThe given string is using scanf() and printf() is: ");
	printf("%s", charArray);
	printf("\n");
}
