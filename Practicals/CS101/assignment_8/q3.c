/*
Assume there is a 10 element array declared in main. Write a  function “readArray()” to which reference to the starting address  of the array and number of elements need to be passed as  arguments. Inside the function readArray() read the necessary  number of elements from user. From the main() function, print  the elements of the array after the readArray() is executed.  
*/

#include <stdio.h>
void readArray(int *b, int n) {
	for(int i = 0; i < n; i++) printf("%d ", *(b+i));
	printf("\n");
}

int main() {
	int a[10];
	printf("Enter 10 integers: ");
	for(int i = 0; i < 10; i++) scanf("%d", &a[i]);
	printf("The 10 element array is: ");
	readArray(a, 10);
}
