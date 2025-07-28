/*
Assign a pointer to an integer variable, character variable and a  floating-point variable. Let each of these variables are initialised  with a suitable value while declaring. Print the address of the  variables, pointer value and value stored at pointer (using *  operator) to verify pointer concept. Further using the ‘++’ operator increment each pointer and print the pointer value and  value stored at the pointers.
*/

#include <stdio.h>

int main() {
	int i = 3, *ip;
	char c = 'A', *cp;
	float f = 5.25, *fp;

	ip = &i;
	cp = &c;
	fp = &f;
	
	printf("Before Incrementing:\n");
	printf("Addresses of variables are: %u, %u, %u.\n", &i, &c, &f);
	printf("Pointer values of variables are: %u, %u, %u.\n", ip, cp, fp);
	printf("Values stored in pointer are: %d, %c, %f.\n", *ip, *cp, *fp);
	
	ip++; cp++; fp++;
	printf("\nAfter Incrementing:\n");
	printf("Addresses of variables are: %u, %u, %u.\n", &i, &c, &f);
	printf("Pointer values of variables are: %u, %u, %u.\n", ip, cp, fp);
	printf("Values stored in pointer are: %d, %c, %f.\n", *ip, *cp, *fp);
}
