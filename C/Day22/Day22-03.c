#include <stdio.h>

#define LENGTH 10
#define BASE 19

int main()
{
	int num;
	int remainders[BASE] = { 0 };
	int count = 0;


	for (int i = 0; i < LENGTH; i++)
	{
		printf("Enter a positive integer: ");
		scanf("%d", &num);

		remainders[num % 19]++;
	}


	for (int i = 0; i < BASE; i++)
		if (remainders[i]) count++;
		
	

	printf("\n");
	printf("Number of different remainders is %d.\n", count);
	

	return 0;
}