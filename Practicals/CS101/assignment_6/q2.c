/* Read a 10-element integer array and search for a user given
number in the array. The index of the user given number must be
printed on the screen as output. */

#include <stdio.h>
int main() {
	int a[10], num, index = 0;
	printf("Enter 10 integers: ");
	for(int i=0; i<10; i++) scanf("%d", &a[i]);
	printf("The 10 integers are: ");
	for(int i=0; i<10; i++) printf("%d ", a[i]);
	printf("\nEnter the number you want to search for: ");
	scanf("%d", &num);
	for(int i=0; i<10; i++) {
		if(num == a[i]) {
			 printf("The index of the element is %d.\n", i+1);
			 index = i+1;
		}
	}
	if(index==0) printf("The number doesn't exist in the array.\n");
}
