#include <stdio.h>

#define TRUE 1
int main()
{
	int num;
	int value;

	printf("Enter a positive integer: ");
	scanf("%d", &num);
	printf("\n");

	value = num;

	printf("Prime factorization of %d = ", num);


	for (int i = 2; i * i; i++)
	{
		while (value % i == 0)
		{	
			printf("%d ", i);

			value /= i;
		}
	}

	if (value > 1) printf(" %d", value);

	printf("\n");

	return 0;
}