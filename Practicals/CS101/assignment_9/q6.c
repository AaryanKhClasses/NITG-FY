/*
Read a string from the user and copy the string using built in
function as well as by copying character by character.
*/

#include <stdio.h>
#include <string.h>

int main() {
	char str[20], cstr1[20], cstr2[20];
	printf("Enter a string: ");
	gets(str);
	int len = strlen(str);
	strcpy(cstr1, str);
	for(int i = 0; i < len; i++) cstr2[i] = str[i];
	printf("\nThe copied strings using strcpy() is: %s", cstr1);
	printf("\nThe copied strings by copying char by char is: %s\n", cstr2);
}
