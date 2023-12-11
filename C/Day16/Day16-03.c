#include <stdio.h>

int main()
{
	/*
	int n1, n2;
	int gcf;
	int a, b, r;


	printf("Enter two positive integer: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	a = n1;
	gcf = n2;

	while (1)
	{
		r = a % gcf;
		if (r != 0)
		{
			a = gcf;
			gcf = r;
		}
		else
			break;
	}

	printf("The greatest common factor of %d and %d is %d\n", n1, n2, gcf);
	*/

	int n1, n2;
	int a, b, r;

	printf("Enter two positive integer: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	a = n1 > n2 ? n1 : n2;
	b = n1 < n2 ? n1 : n2;

	while (1)
	{
		r = a % b;

		if (r == 0) break;

		a = b;
		b = r;
	}

	printf("The greatest common factor of %d and %d is %d\n", n1, n2, b);

	return 0;
}