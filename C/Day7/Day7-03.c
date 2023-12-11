#include <stdio.h>

int main()
{
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);
	printf("\n");

	if (20 > num || num > 40)
		printf("Do your best!");


	return 0;
}