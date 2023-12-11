#include <stdio.h>

int main()
{
	int n1, n2;

	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	int min = n1 > n2 ? n2 : n1;

	printf("The smaller of %d and %d is %d\n", n1, n2, min);
	return 0;
