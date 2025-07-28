/* Pattern:
       1
      2 2
     3 3 3
    4 4 4 4
   5 5 5 5 5
  ...
*/

#include <stdio.h>
int main() {
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  for(int i=1; i<n+1; i++) {
    for(int j=n-i; j>0; j--) {
      printf(" ");
    }
    for(int k=1; k<i+1; k++) {
      printf("%d ", i);
    }
    printf("\n");
  }
}
