/*
Read a string from the user and find length of the string using
built in function as well as by counting the characters in the string.
*/

#include <stdio.h>
#include <string.h>

int main() {
	char str[20];
	printf("Enter a string: ");
	gets(str);
	int len1 = strlen(str), len2 = 0;
	printf("\nThe length of given string using strlen() is %d.", len1);
	for(int i = 0; str[i] != '\0'; i++) len2++;
	printf("\nThe length of given string using loop is %d.\n", len2);
}

