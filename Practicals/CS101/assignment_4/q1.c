// To find the sum of all integer numbers up to N where N is taken from the user.  
#include <stdio.h>
int main() {
  int n, sum=0;
  printf("Enter the value of N: ");
  scanf("%d", &n);
  if(n<=0) printf("Please Enter a positive number.\n");
  else {
    for(int i = 0; i <n+1; i++) {
      sum+=i;
    }
    printf("The sum of all integer numbers from 1 to %d is %d.\n", n, sum);
  }
}
