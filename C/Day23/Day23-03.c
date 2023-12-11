#include <stdio.h>

#define TRUE 1
int main()
{
	int num;
	int factor = 2;

	printf("Enter a positive integer: ");
	scanf("%d", &num);
	printf("\n");

	printf("Prime factorization of %d = ", num);

	while(TRUE)
	{
		if (num <= 1) break;

		if (num % factor == 0)
		{
			printf("%d ", factor);
			num = num / factor;
			factor = 2;
		}
		else
			factor++;
	}

	return 0;
}