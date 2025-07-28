/*
Add a function “printArray()” to the program written to question  3 above that takes responsibility of printing the elements of the  array. 
*/

#include <stdio.h>
void printArray(int x) {
	printf("%d ", x);
}

void readArray(int *b, int n) {
	for(int i = 0; i < n; i++) printArray(*(b+i));
	printf("\n");
}

int main() {
	int a[10];
	printf("Enter 10 integers: ");
	for(int i = 0; i < 10; i++) scanf("%d", &a[i]);
	printf("The 10 element array is: ");
	readArray(a, 10);
}
