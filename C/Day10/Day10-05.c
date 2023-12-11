#include <stdio.h>

int main()
{
	int n1, n2;
	int max, min;
	int sum = 0;

	printf("Enter two positive integer: ");
	scanf("%d %d", &n1, &n2);

	max = n1 > n2 ? n1 : n2;
	min = n1 < n2 ? n1 : n2;
		for (int i = min; i <= max; i++)
			sum += i;
	printf("The sum of the integers between %d and %d is %d.\n", min, max, sum);
	return 0;
}