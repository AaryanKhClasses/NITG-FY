/*
To use the built in mathematical functions sin (), cos(), tan(),
pow(), sqrt() from math.h. Write a menu driven program that calls
any of these functions based on user choice
*/

#include "stdio.h"
#include "math.h"

int main() {
	int op, a, b, repeat=1;
	while(repeat == 1) {
		printf("\n[1] Calculate sine\n[2] Calculate cosine\n[3] Calculate tangent\n[4] Calculate power\n[5] Calculate square root\nEnter the operation to perform: ");
		scanf("%d", &op);
		if(op == 4) {
			printf("Enter the base and the exponent respectively: ");
			scanf("%d %d", &a, &b);
			printf("The value of %d^%d is %d.\n", a, b, (int)pow(a, b));
		} else {
			printf("Enter a number: ");
			scanf("%d", &a);
			switch(op) {
				case 1:
					printf("The value of sin(%d) is %.5f.\n", a, sin(a)); break;
				case 2:
					printf("The value of cos(%d) is %.5f.\n", a, cos(a)); break;
				case 3:
					printf("The value of tan(%d) is %.5f.\n", a, tan(a)); break;
				case 5:
					printf("The value of sqrt(%d) is %.5f.\n", a, sqrt(a)); break;
				default:
					printf("Invalid operation\n"); break;
			}
		}
		
		printf("\nRepeat the program?\n [0] No [1] Yes: ");
		scanf("%d", &repeat);
	}
}
