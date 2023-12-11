#include <stdio.h>

int main()
{
	int num;
	int sum = 0;
	int max = 0;
	int min = 0;
	int count = 0;
	double avg;

	while (1)
	{
		printf("Enter a positive integer: ");
		scanf("%d", &num);
		if (num == 0) break;
	
		max = max > num ? max : num;
		min = max > num ? num : max;
		sum += num;
		count++;
	}
	avg = (double)sum / count;
	printf("The maximum number: %d\n", max);
	printf("The minimum number: %d\n", min);
	printf("The average: %.1f\n", avg);

	return 0;
}