// To generate and print the first N elements of Fibonacci series.
#include <stdio.h>
int main() {
  int n, a=0, b=1, c;
  printf("Enter a number: ");
  scanf("%d", &n);
  if(n<=0) printf("Please Enter a positive number.\n");
  else {
    printf("The first %d elements of the Fibonacci series is: ", n);
    for(int i=0; i<n; i++) {
      printf("%d ", a);
      c=b;
      b=b+a;
      a=c;
    }
    printf("\n");
  }
}
