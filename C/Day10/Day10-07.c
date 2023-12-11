#include <stdio.h>

int main()
{
	int n;
	long long factorial = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &n);
	printf("\n");

	for (int i = n; i > 0; i--)
		factorial *= i;
		printf("Factorial %d = %d", n, factorial);
	return 0;
}