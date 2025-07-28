// Write a program to check wheter a triangle is valid or not if the three angles are input through keyboard.

#include <stdio.h>
int main() {
	int an1, an2, an3;
	printf("Enter the three angles of a triangle:\n");
	scanf("%d %d %d", &an1, &an2, &an3);
	if(an1 + an2 + an3 == 180) printf("The triangle is valid.\n");
	else printf("The triangle is invalid.\n");
}
