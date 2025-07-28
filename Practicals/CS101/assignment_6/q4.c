// To take a 10-element array and find the maximum value stored in the array

#include <stdio.h>
int main() {
	int a[10], max;
	printf("Enter 10 integers:\n");
	for(int i=0; i<10; i++) scanf("%d", &a[i]);
	printf("\nThe 10 integers are: ");
	for(int i=0; i<10; i++) printf("%d ", a[i]);
	max = a[0];
	for(int i=1; i<10; i++) {
		if(max < a[i]) max = a[i];
	}
	printf("\nThe maximum value stored in the array is: %d.\n", max);
}
