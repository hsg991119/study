#include <stdio.h>


int sum_array(const int* ptr, int length)
{
	int sum = 0;

	for (int i = 0; i < length; i++)
		sum += *(ptr + i);

	return sum;
}

int main()
{
	int numbers[] = { 32, 21, 17, 3, 9, 12, 28, 19, 7, 25 };
	int length = sizeof(numbers) / sizeof(int);

	int sum = sum_array(numbers, length);

	printf("sum = %d\n", sum);


	return 0;
}
