/*
Pattern:
1       1
 2     2
  3   3
   4 4
    5
   4 4
  3	  3
 2     2
1       1
*/
#include <stdio.h>
int main() {
	int n=5;
	for(int i=1; i<n; i++) {
		for(int j=i; j>0; j--) printf(" ");
		printf("%d", i);
		for(int k=2*(n-i)-1; k>0; k--) printf(" ");
		printf("%d", i);
		printf("\n");
	}
	for(int i=n; i>0; i--) {
		for(int j=i; j>0; j--) printf(" ");
		printf("%d", i);
		if(i!=n) {
			for(int k=2*(n-i)-1; k>0; k--) printf(" ");
			printf("%d", i);
		}
		printf("\n");
	}
}
