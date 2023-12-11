#include <stdio.h>

int main()
{
	int sum = 0;


	for (int i = 1; i <= 100; i++)
		sum += i;
		printf("The sum of hte integers between 1 and 100 is %d\n", sum);
	return 0;
}