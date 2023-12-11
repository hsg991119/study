#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define LENGTH 100

int main()
{
	int is_prime = TRUE;

	printf("Prime numbers between 2 and %d:\n", LENGTH);

	for (int i = 2; i <= 100; i++)
	{
		is_prime = TRUE;

		for (int j = 2; j * j <= i; j++)
			if (i % j == 0)
			{
				is_prime = FALSE;
				break;
			}
		if (is_prime)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}