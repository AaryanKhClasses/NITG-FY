/*
Take a character variable and convert its case.(If the character is
in capital make it small or if the character is in small then make it
capital) [Note: For Capital letter the ASCII value is 65 to 90 and
for small letter 97 to 122].
*/

#include <stdio.h>
int main() {
	char letter;
	printf("Enter an alphabet: ");
	scanf("%c", &letter);
	if(letter>=65 && letter<=90) printf("The small letter of %c is %c\n", letter, letter+32);
	else if(letter>=97 && letter<=122) printf("The capital letter of %c is %c\n", letter, letter-32);
	else printf("You have entered an invalid character.\n");
}
