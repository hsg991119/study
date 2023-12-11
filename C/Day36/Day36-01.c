#include <stdio.h>
#include <stdlib.h>

unsigned long long sum(int n)
{
	return n == 1 ? 1 : n + sum(n - 1);
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

	printf("The sum of integers from 1 to %d = %lld\n", num, sum(num));

	return 0;
}