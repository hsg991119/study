#include <stdio.h>

int max(int n1, int n2)
{
	return n1 > n2 ? n1 : n2;
}

int min(int n1, int n2)
{
	return n1 < n2 ? n1 : n2;
}

int main()
{
	int n1, n2;

	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	printf("The greater of %d and %d is %d.\n", n1, n2, max(n1, n2));
	printf("The greater of %d and %d is %d.\n", n1, n2, min(n1, n2));


	return 0;
}