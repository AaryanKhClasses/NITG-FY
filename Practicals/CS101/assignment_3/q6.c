// Write a program using the ternary operator to check whether the character entered through keyboard is lowercase or not.

#include <stdio.h>
int main() {
	char letter;
	printf("Enter a letter: ");
	scanf("%c", &letter);
	if(letter >= 'a' && letter <= 'z') printf("The letter is lowercase.\n");
	else if(letter >= 'A' && letter <= 'Z') printf("The letter is uppercase.\n");
	else printf("The input is invalid.\n");
}
