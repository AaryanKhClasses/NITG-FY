// To read a 10-element integer array and print the array.

#include <stdio.h>
int main() {
	int a[10];
	printf("Enter 10 integers:\n");
	for(int i=0; i<10; i++) scanf("%d", &a[i]);
	printf("\nThe 10 integers are: ");
	for(int i=0; i<10; i++) printf("%d ", a[i]);
	printf("\n");
}
