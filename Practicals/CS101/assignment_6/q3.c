/* To read a 10-element array of real numbers and to find mean,
variance, and standard deviation of the elements. The mean,
variance and standard deviation must be printed as output. */

#include <stdio.h>
#include <math.h>

int main() {
	int a[10];
	float mean, var, sum=0, varsum=0;
	printf("Enter 10 integers:\n");
	for(int i=0; i<10; i++) scanf("%d", &a[i]);
	for(int i=0; i<10; i++) sum+=a[i];
	mean = sum/10;
	for(int i=0; i<10; i++) varsum += ((a[i]-mean)*(a[i]-mean));
	var = varsum/9;
	printf("The mean, variance, and standard deviation of given array is: %.2f, %.3f, %.3f respectively.\n", mean, var, sqrt(var));
}
