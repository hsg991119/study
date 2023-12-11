#include <stdio.h>

int main()
{
	int numbers[] = { 1, 3, 4, 3, 1, 3, 4, 1, 2, 3, 1, 3 };
	int length = sizeof(numbers) / sizeof(int);


	
	for (int i = 1; i <= 4; i++)
	{
		printf("%d ", i);
		for (int j = 0; j < length; j++) {
			if (numbers[j] == i)
				printf("*");
		}
		printf("\n");
	}

	return 0;
}