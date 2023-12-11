#include <stdio.h>

int main()
{
	int n1, n2;
	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");


	if(n1 % n2  == 0)
		printf("%d is a multipe of %d", n1, n2);
	else if(n2 % n1 == 0)
		printf("%d is a factor of %d", n1, n2);

	else
		printf("%d is a neither a factor of %d nor a multiple", n1, n2);

	return 0;
}