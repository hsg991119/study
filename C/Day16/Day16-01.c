#include <stdio.h>

int main()
{
	int num;
	int is_prime = 1;
	int count = 0;

	printf("Enter a positive integer greater than 2: ");
	scanf("%d", &num);
	printf("\n");

	printf("Prime numbers = ");

	for (int i = 2; i <= num; i++)
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
			printf("%d ", i);
			count++;
		}
	}
	printf("Number of prime numbers = %d", count);

	return 0;
}