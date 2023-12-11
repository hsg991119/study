#include <stdio.h>

int main()
{
	int num = 10;
	int* ptr1 = &num;
	int** ptr2 = &ptr1;

	printf("*ptr1 = %d\n", *ptr1);
	printf("num = %d\n", num);

	printf("*ptr2 = %p\n", *ptr2);
	printf("*ptr1 = %p\n", ptr1);
	printf("&num = %p\n", &num);

	printf("**ptr2 = %d\n", **ptr2);
	
	

	return 0;
}
