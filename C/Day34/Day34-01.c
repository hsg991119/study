#include <stdio.h>
#include <stdlib.h>


int main()
{
	int* ptr = (int*)malloc(sizeof(int));

	if (!ptr)
	{
		printf("ERROR Insufficient memory!\n");
		exit(1);
	}

	*ptr = 10;

	printf("*ptr = %d", *ptr);

	free(ptr);
//---------------------------------------------------------------------

	int length = 10;

	ptr = (int*)malloc(sizeof(int) * length);

	if (!ptr)
	{
		printf("ERROR Insufficient memory!\n");
		exit(1);
	}

	*ptr = 10;

	return 0;
}