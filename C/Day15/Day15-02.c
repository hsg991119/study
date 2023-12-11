#include <stdio.h>

int main()
{
	int n;
	int is_prime = 1;

	printf("Enter a integer greater than 1: ");
	scanf("%d", &n);
	printf("\n");

	if (n < 2)
	{
		printf("ERROR: Invalid value!\n");
		exit(0);
	}
	for (int i = 2; i < n; i++)
		if (n % i == 0 )
		{
			is_prime = 0;
			break;
		}
	if (is_prime)
		printf("%d is a prime number.\n", n);
	else
		printf("%d is not a prime number.\n", n);

	return 0;
}