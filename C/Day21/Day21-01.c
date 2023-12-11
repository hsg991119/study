#include <stdio.h>

int main()
{
	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };

	int length = sizeof(numbers) / sizeof(int);
	
	for(int i = 0; i < length; i++)
		printf("numbers[%d] = %d\n", i,numbers[i]);

	return 0;
}