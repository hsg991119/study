#include <stdio.h>

int main()
{
	int scores[] = { 88, 92, 76, 64, 86, 96, 82, 78 };
	int sum=0;
	double average;
	int length = sizeof(scores) / sizeof(int);

	for (int i = 0; i < length; i++)
		sum += scores[i];

	average = (double)sum / length;
	printf("%d\n", sum);
	printf("%g\n", average);

	return 0;
}