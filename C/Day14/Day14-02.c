#include <stdio.h>

int main()
{
	int num;
	int sum = 0;
	while (1)
	{
		printf("Enter a positive integers: ");
		scanf("%d", &num);
		if (num == 0)
		{
			printf("Sum = %d", sum);
			break;
		}
		else
		{
			sum += num;
			continue;
		}
	}
	return 0;
}