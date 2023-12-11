#include <stdio.h>

#define LENGTH 10

void copy_array(const int* ptr, int *copy)
{
	for (int i = 0; i < LENGTH; i++)
	{
		copy[i] = ptr[i];
		printf("copy[%d] = %d\n", i, copy[i]);
	}
}

int main()
{
	int numbers[LENGTH] = { 32, 21, 17, 3, 9, 12, 28, 19, 7, 25 };
	int copy[LENGTH] = { 0 };
	
	copy_array(numbers, copy);

	return 0;
}
