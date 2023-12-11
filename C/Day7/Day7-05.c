#include <stdio.h>

int main()
{
	int num1, num2;
	int max, min;

	printf("Enter two integer: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");

	if (num1 > num2)	
			printf("max - min = %d", num1 - num2);
	else		
			printf("max - min = %d", num2 - num1);
	return 0;
}