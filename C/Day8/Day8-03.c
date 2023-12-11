#include <stdio.h>

int main()
{
	int n;
	printf("Enter two integers: ");
	scanf("%d", &n);
	printf("\n");

	if (n <= 0)
		printf("잘못입력하였습니다\n");
	else if (n % 3 == 0 && n % 4 == 0)
		printf("%d is  a multiple of 3 and a multiple of 4\n", n);
	else if (n % 3 == 0)
		printf("%d is a multiple of 3\n", n);
	else if (n % 4 == 0)
		printf("%d is a multiple of 4\n", n);
	else
	printf("%d is neither a multiple of 3 nor a multiple of 4\n");

	return 0;
}