#include <stdio.h>
#include <limits.h>
int is_prime(int num)
{
	if (num <= 1) return 0;

	int is_prime = 1;

	for (int i = 2; i * i <= num; i++)
		if (num % i == 0)
		{
			is_prime = 0;
			break;
		}

	return is_prime;

}

int main()
{
	int  n1, n2;
	int sum = 0;
	int min = INT_MAX;

	printf("Enter two positive integers greater than 1: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	if (n1 > n2)
	{
		int tmp = n1;
		n1 = n2;
		n2 = tmp;
	}

	for (int i = n1; i <= n2; i++)
		if (is_prime(i))
		{
			sum += i;
			min = min < i ? min : i;
		}
	if (sum)
	{
		printf("The sum of prime numbers between %d and %d is %d.\n", n1, n2, sum);
		printf("The minimum among prime numbers between %d and %d is %d.\n", n1, n2, min);
	}
	else
		printf("There are no prime numbers between %d and %d.\n", n1, n2);

	return 0;
}