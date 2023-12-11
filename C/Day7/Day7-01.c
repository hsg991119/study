#include <stdio.h>

int main()
{
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);
	printf("\n");

	if (40 < num)
		printf("Hello World!");
	else
		printf("40보다 작습니다");

	return 0;
}