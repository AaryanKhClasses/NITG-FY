/* Take a 2x3 two-dimensional array. Read the elements of this array
from user. Cerate another two-dimensional array to store the
transpose of this array. Print both the arrays in matrix form. */

#include <stdio.h>
int main() {
	int a[2][3], b[3][2];
	printf("Enter a 2x3 matrix:\n");
	for(int i=1; i<3; i++) {
		for(int j=1; j<4; j++) { 
			scanf(" %d", &a[i][j]);
			b[j][i] = a[i][j];
		}
	}
	printf("The given matrix is:\n");
	for(int i=1; i<3; i++) {
		for(int j=1; j<4; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("The transpose matrix is:\n");
	for(int i=1; i<4; i++) {
		for(int j=1; j<3; j++) printf("%d ", b[i][j]);
		printf("\n");
	}
}
