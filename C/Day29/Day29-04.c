#include <stdio.h>

#define ROWS 3
#define COLS 5

//열의 크기가 4인 2차원 배열
int sum_array2(int(*ptr)[5])
{
	int sum = 0;
	double average = 0;
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			sum += ptr[i][j];

	return sum;
}

int sum_array2_2(int *ptr, int rows, int cols)
{
	int sum = 0;
	double average = 0;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			sum += ptr[i * cols + j];

	return sum;
}

int main()
{
	int numbers[][5] = {
		{87,43,64,71,82},
		{65,69,77,82,78},
		{91,84,62,76,68}
	};
	int rows = sizeof(numbers) / sizeof (numbers[0]);
	int cols = sizeof(numbers[0]) / sizeof(int);
	int sum = 0;
	double average;


	sum = sum_array2(numbers);
	sum = sum_array2_2(numbers[0], rows, cols);

	average = (double)sum / (rows * cols);

	printf("sum2 = %d\n", sum);
	printf("average2 = %.2f\n", average);

	return 0;
}
