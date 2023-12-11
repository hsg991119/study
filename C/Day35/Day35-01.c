#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int n)
{
	if (n == 1) return 1;
	

	return n * factorial(n - 1);
}


int main()
{
	int num;

	printf("Enter a positive integer: ");
	scanf("%d", &num);
	printf("\n");

	if (num <= 1)
	{
		printf("ERROR: Invalid value!\n");
		exit(1);
	}

	printf("Factorial %d = %lld\n", num, factorial(num));

	return 0;
}