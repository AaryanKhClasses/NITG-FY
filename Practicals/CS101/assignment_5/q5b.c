/*
Pattern:
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
*/
#include <stdio.h>
int main() {
	int n = 5, a=1;
	for(int i=0; i<n+1; i++) {
		for(int j=0; j<i+1; j++) {
			if(a==1) { printf("%d ", a); a = 0; }
			else if(a==0) { printf("%d ", a); a = 1; }
		}
		printf("\n");
	}
}
