#include <stdio.h>

int main()
{
	/*
	int row, col, sum;
	int temp = 1;

	printf("Enter the number of rows: ");
	scanf("%d", &row);

	printf("Enter the number of columns: ");
	scanf("%d", &col);
	printf("\n");

	for (int i = 1; i <= row; i++)
	{
		if (i % 2 == 1)
		{
			sum = temp;
			for (int j = 1; j <= col; j++)
			{
				printf("%2d ", sum);
				sum++;
			}
		}
		else
		{
			sum = i * col;
			temp = sum + 1;
			for (int j = 1; j <= col; j++)
			{
				printf("%2d ", sum);
				sum--;
			}
		}
		printf("\n");
	}
	*/
	int rows, colums;

	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	printf("Enter the number of columns: ");
	scanf("%d", &colums);
	printf("\n");

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= colums; j++)
		{
			if (i % 2 == 1)
				printf("%2d ", (i - 1) * colums + j);
			else
				printf("%2d ", i * colums - (j - 1));
		}
		printf("\n");
	}
	return 0;
}

