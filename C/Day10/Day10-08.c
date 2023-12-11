#include <stdio.h>

int main()
{
	int n1, n2;
	int max, min;

	printf("Enter two positive integers:");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	max = n1 > n2 ? n1 : n2;
	min = n1 < n2 ? n1 : n2;

	for (int i = min; i <= max; i++) 
	{
		if (i % 5 == 3 || i % 5 == 8)
			printf("%d ", i);
	}
	return 0;
}