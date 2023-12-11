#include <stdio.h>

int main()
{
	int rows;
	int spaces = 0;
	int stars = 0;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	for (int i = 1; i <= rows; i++) {

		spaces = rows - i;
		stars = i;

		for (int j = 1; j <= spaces; j++)
			printf(" ");

		for (int j = 1; j <= stars; j++)
			printf("*");

		printf("\n");
	}



	return 0;
}