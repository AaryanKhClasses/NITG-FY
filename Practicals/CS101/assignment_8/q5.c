/*
From questions 3 and 4 you have 2 functions: readArray() and  printArray(). Same functions need to be used for this question  also. In main() function asks the user to enter the index of the  array at which the value to be modified. Pass this index and  reference to the array to third function scaleElement() that adds a  constant to the mentioned element of the array. Before calling  scaleElement() use printArray() to print the array. After calling  scaleElement(), use printArray() again to print the array in main()  function.
*/

#include <stdio.h>
void printArray(int x) {
	printf("%d ", x);
}

void readArray(int *b, int n) {
	for(int i = 0; i < n; i++) printArray(*(b+i));
	printf("\n");
}

void scaleElement(int *b, int n, int index, int cst) {
	*(b+index) += cst; 
	for(int i = 0; i < n; i++) printArray(*(b+i));	
	printf("\n");
}

int main() {
	int a[10], index, cst;
	printf("Enter 10 integers: ");
	for(int i = 0; i < 10; i++) scanf("%d", &a[i]);
	printf("The 10 element array is: ");
	readArray(a, 10);
	
	printf("Enter the index of element to scale: ");
	scanf(" %d", &index);
	printf("Enter the constant to scale: ");
	scanf(" %d", &cst);
	printf("The new 10 element array is: ");
	scaleElement(a, 10, index, cst);
}
