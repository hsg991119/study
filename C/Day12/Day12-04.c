#include <stdio.h>

int main()
{
	/*
	int row = 10;
	int spaces = row;
	int stars = 1;

	for (int i = 1; i < row; i++)
	{
		for (int j = 1; j <= spaces; j++)
			printf(" ");
		for (int k = 1; k <= stars; k++)
			printf("*");
		stars = stars + 2;
		spaces --;
		printf("\n");
	}
*/



	const int rows = 10;
	int spaces = 0;
	int stars = 0;

	for (int i = 1; i <= rows; i++)
	{
		spaces = rows - i;
		stars = i * 2 - 1;

		for (int j = 1; j <= spaces; j++) printf(" ");
		for (int j = 1; j <= stars; j++) printf("*");

		printf("\n");
	}
	return 0;
}



