// Print all the even numbers between 1 to 100 using while loop.
#include <stdio.h>
int main() {
	for(int i=0; i<101; i++) {
		if(i%2 == 0) printf("%d ", i);
	}
	printf("\n");
}
