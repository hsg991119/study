#include <stdio.h>

int main()
{
	int n1, n2, swap;

	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	printf("n1 = %d, n2 = %d\n", n1, n2);
		swap = n1;
		n1 = n2;
		n2 = swap;
	printf("n1 = %d, n2 = %d\n", n1, n2);
	return 0;
}