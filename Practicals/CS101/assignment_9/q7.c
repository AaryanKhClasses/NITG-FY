/*
Read 2 strings from user and compare the two strings, character
by character. Perform the same using built in function.
*/

#include <stdio.h>
#include <string.h>

int main() {
	char str1[20], str2[20];
	printf("Enter a string: ");
	gets(str1);
	printf("Enter another string: ");
	gets(str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int l = strcmp(str1, str2), is = 1;
	if(len1 != len2) return printf("The strings are not the same!\n");
	for(int i = 0; i < len1; i++) {
		if(str1[i] != str2[i]) is = 0;
	}
	
	if(is == 1) printf("The strings are the same!\n");
	else printf("The strings are not the same!\n");
}
