/* To print the multiplication table for a given number taken from
user. For example, if user tells table for 2 the table in the following
form must be displayed:
2x1=2
2x2=4
2x3=6
.
.
.
2x20=40
*/
#include <stdio.h>
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  for(int i=1; i<21; i++) {
    printf("%d * %d = %d\n", n, i, n*i);
  }
}
