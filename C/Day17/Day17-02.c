#include <stdio.h>
void print_factors(int num);

int main()
{
	int num;
	printf("Enter a positive interger: ");
	scanf("%d", &num);
	printf("\n");

	print_factors(num);

	return 0;
}

void print_factors(int num)
{
	printf("Factors of %d =", num);

	for (int i = 1; i <= num; i++)
		if (num % i == 0)
			printf(" %d", i);

	printf("\n");
}