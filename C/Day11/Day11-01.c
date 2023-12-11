#include <stdio.h>

int main()
{
	int num;
	long long f0 = 0;
	long long f1 = 1;
	long long fibo = 0;

	do
	{
		printf("Enter a positive integer greater than 1: ");
		scanf("%d", &num);
		printf("\n");
	} while (num < 0);

	for (int i = 2; i <= num; i++)
	{
		fibo = f0 + f1;
		f0 = f1;
		f1 = fibo;
	}
	
	printf("%dth Fibonacci number = %lld", num, fibo);

	
	return 0;
}