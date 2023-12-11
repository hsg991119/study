#include <stdio.h>

int main()
{
	int row, col;
	int sum = 0;

	printf("Enter the number of rows: ");
	scanf("%d", &row);

	printf("Enter the number of columns: ");
	scanf("%d", &col);
	printf("\n");

		for (int i = 1; i <= row; i++)
		{
			for (int j = 1; j <= col; j++)
			{
				sum++;
				printf("%2d", sum);
			}
			printf("\n");
		}

	return 0;
}

