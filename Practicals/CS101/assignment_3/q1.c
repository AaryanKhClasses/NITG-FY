// If ages of Ram, Shyam, and Ajay are input through keyboard, then find the youngest of them all.

#include <stdio.h>
int main() {
	int r, s, a, youngest;
	printf("Enter The Ages of Ram, Shyam, and Ajay:\n");
	scanf("%d %d %d", &r, &s, &a);
	if(r == s && r == a) printf("All of them have the same age.\n");
	else if (r==s && r<a && r!=a) printf("Ram and Shyam are the youngest.\n");
	else if(r==a && r<s && r!=s) printf("Ram and Ajay are the youngest.\n");
	else if(s==a && s<r && s!=r) printf("Shyam and Ajay are the youngest.\n");
	else { (r > s ? (s > a ? (printf("Ajay is youngest.\n")) : (printf("Shyam is youngest.\n"))) : (r > a ? (printf("Ajay is youngest.\n")) : printf(("Ram is youngest.\n")))); }
}
