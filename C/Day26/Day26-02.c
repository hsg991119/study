#include <stdio.h>


void print_array(const int *ptr, int length)
{		
	for(int i = 0; i < length; i++)
		printf("numers[%d] = %d\n",i ,*(ptr+i));
}

int main()
{
	int numbers[] = {32, 21, 17, 3, 9, 12, 28, 19, 7, 25};
	int length = sizeof(numbers) / sizeof(int);

	print_array(numbers, length);

	return 0;
}
