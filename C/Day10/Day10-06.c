#include <stdio.h>

int main()
{
	int t;
	int n1, n2;
	int sum = 0;

	printf("Enter the number of tests: ");
	scanf("%d", &t);
	printf("\n");

	for (int i = 1; i <= t; i++)
	{
		printf("%d. Enter two integers:", i);
		scanf("%d %d", &n1, &n2);
		sum = n1 + n2;
		printf("%d. %d + %d = %d\n", i, n1, n2, sum);
		printf("\n");
	}
	return 0;
}