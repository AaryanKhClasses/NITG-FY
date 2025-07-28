/*
Pattern:
    *
   * *
  *   *
 *     *
*********
*/
#include <stdio.h>
int main() {
	int n=5;
	for(int i=0; i<n; i++) {
		for(int j=n-i; j>0; j--) printf(" ");
		printf("*");
		if(i!=0) {
			for(int k=2*i-1; k>0; k--) printf(" ");
			printf("*");
		}
		printf("\n");
	}
	for(int i=0; i<2*n+1; i++) printf("*");
	printf("\n");
}
