#include <stdio.h>

double get_average(int n1, int n2)
{
	return (double)(n1 + n2) / 2;
}

int main()
{
	int n1, n2;
	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	printf("The average of %d and %d = %.1f", n1, n2, get_average(n1, n2));


	return 0;
}