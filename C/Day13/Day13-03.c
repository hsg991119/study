#include <stdio.h>

int main()
{
	int row, col;
	int sum ;

	printf("Enter the number of rows: ");
	scanf("%d", &row);

	printf("Enter the number of columns: ");
	scanf("%d", &col);
	printf("\n");

	for (int i = 1; i <= row; i++)
	{
		sum = i;
		for (int j = 1; j <= col; j++)
		{
			printf("%2d ", sum);
			sum += row;
		}
		printf("\n");
	}

	return 0;
}

