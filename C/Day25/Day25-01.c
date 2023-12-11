#include <stdio.h>

int main()
{
	int n1 = 10, n2 = 20;
	int *p1 = &n1;
	int *p2 = &n2;
	int sum = *p1 + *p2;



	printf("sum = %d", sum);

	return 0;
}