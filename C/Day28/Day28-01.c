#include <stdio.h>

#define ROWS	4
#define COLS	4


int main()
{
	int numbers[ROWS][COLS] = {
		{12,23,31,14},
		{24,35,21,18},
		{41,22,13,52},
		{14,23,42,31},
	};

	int result[ROWS + 1][COLS + 1] = { 0 };

	for(int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			result[i][j] = numbers[i][j];

			result[i][COLS] += numbers[i][j];

			result[ROWS][i] += numbers[i][j];

			result[ROWS][COLS] += numbers[i][j];
		}

	for (int i = 0; i <= ROWS; i++)
	{
		for (int j = 0; j <= COLS; j++)
			printf("%3d ", result[i][j]);
		printf("\n");
	}
	return 0;
}