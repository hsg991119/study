#include <stdio.h>

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))


int main()
{
	int numbers[10];
	int length = sizeof(numbers) / sizeof(int);
	int sum = 0;
	int max = 0;
	double average;


	for (int i = 0; i < length; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", &numbers[i]);
	}

	max = numbers[0];

	for (int i = 0; i < length; i++)
	{
		sum += numbers[i];
		max = MAX(numbers[i], max);
	}

	average = (double)sum / length;

	printf("\n");
	printf("sum = %d\n", sum);
	printf("avg = %g\n", average);
	printf("max = %d\n", max);

	return 0;
}