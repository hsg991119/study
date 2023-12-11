#include <stdio.h>

int main()
{
	/*
	const int rows = 10;
	int spaces = rows / 2 + 1;
	int stars = 0;

	for (int i = 1; i <= rows; i++)
	{
		if (i <= 5)
		{
			stars = i * 2 - 1;
			spaces--;
			for (int j = 1; j <= spaces; j++) printf(" ");
			for (int j = 1; j <= stars; j++) printf("*");
			printf("\n");
		}
		else
		{
			stars = stars - 2;
			spaces++;
			for (int j = 1; j <= spaces; j++) printf(" ");
			for (int j = 1; j <= stars; j++) printf("*");
			printf("\n");
		}
	}
	*/

	const int rows = 9;
	int middle = rows / 2 + 1;
	int spaces = 0;
	int stars = 0;
	for (int i = 1; i <= rows; i++)
	{
		/*
		if (i <= middle)
		{
			spaces = middle - i;
			stars = i * 2 - 1;
		}
		else
		{
			spaces = i - middle;
			stars = (rows - i) * 2 + 1;
			
		}
		*/
		spaces = i <= middle ? middle - i : i - middle;
		stars = i <= middle ? i * 2 - 1 : (rows - i) * 2 + 1;
		for (int j = 1; j <= spaces; j++)printf(" ");
		for (int j = 1; j <= stars; j++) printf("*");
		printf("\n");
	}
	return 0;
}

