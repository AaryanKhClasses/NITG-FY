// Take a 3x3 matrix from user. Test whether the matrix is a diagonal matrix.

#include <stdio.h>
int main() {
	int a[3][3];
	printf("Enter a 3x3 matrix:\n");
	for(int i=1; i<4; i++) {
		for(int j=1; j<4; j++) scanf(" %d", &a[i][j]);
	}
	printf("The given matrix is:\n");
	for(int i=1; i<4; i++) {
		for(int j=1; j<4; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
	if(a[1][2] == 0 && a[1][3] == 0 && a[2][1] == 0 && a[2][3] == 0 && a[3][1] == 0 && a[3][2] == 0 && a[1][1] != 0 && a[2][2] != 0 && a[3][3] != 0) printf("\nThe given matrix is diagonal.\n");
	else printf("\nThe given matrix is not diagonal.\n");
}
