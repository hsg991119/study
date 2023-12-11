#include <stdio.h>

int main()
{
	int num;

	printf("Enter a positive integer: ");
	scanf("%d", &num);
	printf("\n");

	if (num % 2 == 1)
		printf("%d is an odd number.", num);
	else
		printf("%d is an even number.", num);


	return 0;
}