#include <stdio.h>

int main()
{
	int n1, n2;
	int count = 0;

	printf("Enter two postitive integers: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	printf("multiples of %d between 1 and %d = ", n2, n1);
	for (int i = 1; i < n1; i++) 
	{
		if (i % n2 == 0)
		{
			printf(" %d ", i);
			count++;
		}
	}
	printf("\n");
	printf("number of multiples of %d = %d\n", n2,count);
	return 0;
}