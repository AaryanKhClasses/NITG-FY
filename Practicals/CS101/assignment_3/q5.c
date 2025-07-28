// If length of 3 sides of a triangle are input through keyboard, then check wheter the triangle is isosceles, equilateral, or scalene triangle.
#include <stdio.h>
int main() {
	int an1, an2, an3, si1, si2, si3;
	printf("Enter the three angles of a triangle:\n");
	scanf("%d %d %d", &an1, &an2, &an3);
	if(an1 + an2 + an3 == 180){
		if(an1 == 0 || an2 == 0 || an3 == 0) printf("The triangle is invalid.\n");
		else {
			printf("Enter the three sides of a triangle:\n");
			scanf("%d %d %d", &si1, &si2, &si3);
			if(an1 == 90 || an2 == 90 || an3 == 90) printf("The triangle is right angled.\n");
			(si1 == si2 ? (si1 == si3 ? (printf("The triangle is equilateral.\n")) : (printf("The triangle is isosceles.\n"))) : (si2 == si3 ? (printf("The triangle is isosceles.\n")) : (printf("The triangle is scalene.\n"))));
		}
	}
	else printf("The triangle is invalid.\n");
}
