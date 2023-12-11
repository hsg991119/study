#include <stdio.h>

int main()
{
	int n1, n2;
	double quotient, remainder;

	printf("Enter two positive integers: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	quotient = n1 / n2;
	remainder = n1 % n2;
	printf("Quotient = %g\n", quotient);
	printf("Remainder = %g\n", remainder);
	return 0;
}
