// To add the first N terms of the exponential series for a given value of x
#include <stdio.h>
int main() {
   float n, x, res=0;
   printf("Enter the value of x: ");
   scanf("%f", &x);
   printf("Enter the value of N: ");
   scanf("%f", &n);
   for(int i=1; i<n+1; i++) {
    float fact=1, power=1;
    for(int j=1; j<i; j++) {
      fact *= j;
    }
    for(int k=1; k<i; k++) {
      power *= x;
    }
    res += (power/fact);
  }
  printf("The value of e^%.0f is %f\n", x, res);
}
