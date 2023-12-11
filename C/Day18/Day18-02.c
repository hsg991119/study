#include <stdio.h>

char get_grade(int num)
{
	char score = 'F';
	if (90 <= num)
		score = 'A';
	else if (80 <= score < 90)
		score = 'B';
	else if (70 <= score < 80)
		score = 'C';
	else if (60 <= score < 70)
		score = 'D';
	else
		score = 'F';

	return score;
}

int main()
{
	int num;

	printf("Enter your score: ");
	scanf("%d", &num);
	while (num < 0 || num > 100)
	{
		printf("Invalid score! Try again: ");
		scanf("%d", &num);
	}
	printf("\n");

	printf("Your grade is %c.", get_grade(num));

	return 0;
}