#include <stdio.h>

void is_prime(int n1, int n2)
{
	int is_prime = 1;
	int sum = 0;
	int min = 999;
	for (int i = n1; i <= n2; i++)
	{
		is_prime = 1;
		

		for(int j = 2; j * j <= i; j++)
			if (i % j == 0)
			{
				is_prime = 0;
				break;
			}
		if (is_prime)
		{
			sum += i;
			min = min < i ? min : i;
		}
	}
	printf("The sum of prime numbers between %d and %d is %d.\n", n1, n2, sum);
	printf("The minimum among prime numbers between %d and %d is %d.\n", n1, n2, min);
}

int main()
{
	int n1, n2;

	printf("Enter two positive integers greater than 1: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

		if (n2 - n1 <= 1)
			printf("There are no prime numbers between %d and %d.\n", n1, n2);
		else
			is_prime(n1, n2);

	return 0;
}