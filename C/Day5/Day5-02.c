#include <stdio.h>

int main()
{
	int n1, n2;

	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	printf("%d + %d = %d\n", n1, n2, n1 + n2);
	printf("%d - %d = %d\n", n1, n2, n1 - n2);
	printf("%d * %d = %d\n", n1, n2, n1 * n2);
	printf("%d / %d = %.2f\n", n1, n2, (double)n1 / n2);
	return 0;
}