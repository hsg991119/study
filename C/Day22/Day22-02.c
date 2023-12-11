#include <stdio.h>

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main()
{
	int numbers[30] = {0};
	int length = sizeof(numbers) / sizeof(int);
	int sum = 0;
	int count = 0;
	int above_average = 0;
	double average = 0;


	for (int i = 0; i < length; i++) 
	{
		printf("Enter an integer: ");
		scanf("%d", &numbers[i]);

		if (!numbers[i]) break;

		sum += numbers[i];
		count++;
	}

	average = (double)sum / count;

	for (int i = 0; i < count; i++)
		if (numbers[i] > average) above_average++;

	printf("\n");
	printf("The average: %.1f\n", average);
	printf("Percentage of numbers above the average: %g%%\n", (double)above_average / count * 100);

	return 0;
}