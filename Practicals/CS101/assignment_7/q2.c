/*
Let there be 4 functions written corresponding to the arithmetic
operations: addNum (), subNum(), mulNum() and divNum(). The
main () function reads two numbers from user and the choice of
the arithmetic operation that user desires to apply on two
numbers. Accordingly the corresponding function must be
invoked and result must be returned to main () function where it
is displayed.[Here assume that situation of divide by zero case is
verified before calling divNum() function]
*/

#include <stdio.h>
float addNum(float x, float y) { return (x+y); }
float subNum(float x, float y) { return (x-y); }
float mulNum(float x, float y) { return (x*y); }
float divNum(float x, float y) { return (x/y); }
int main() {
	float a, b;
	int op, repeat=1;
	while(repeat == 1) {
		printf("\nEnter two numbers: ");
		scanf("%f %f", &a, &b);
		printf("[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\nEnter the arithmetic operation: ");
		scanf("%d", &op);
		switch(op) {
			case 1:
				printf("The addition of %.2f and %.2f is: %.2f.\n", a, b, addNum(a, b)); break;
			case 2:
				printf("The subtraction of %.2f and %.2f is: %.2f.\n", a, b, subNum(a, b)); break;
			case 3:
				printf("The multiplication of %.2f and %.2f is: %.2f.\n", a, b, mulNum(a, b)); break;
			case 4:
				if(b == 0) printf("Division by zero is not allowed.\n");
				else printf("The division of %.2f and %.2f is: %.2f.\n", a, b, divNum(a, b));
				break;
			default:
				printf("Invalid operation.\n"); break;
		}
		
		printf("\nRepeat the program?\n [0] No [1] Yes: ");
		scanf("%d", &repeat);
	}
}
