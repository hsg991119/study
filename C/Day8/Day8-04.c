#include <stdio.h>

int main()
{
	int ko;
	int en;
	int ma;
	double avg;
	char grade;

	while (1) {
		printf("Enter the Korean score: ");
		scanf("%d", &ko);
		printf("Enter the English score: ");
		scanf("%d", &en);
		printf("Enter the Math score: ");
		scanf("%d", &ma);
		printf("\n");

		if (ko > 100)
		{
			printf("국어 점수를 잘못입력하였습니다\n");
			continue;
		}
		else if (en > 100)
		{
			printf("영어 점수를 잘못입력하였습니다\n");
			continue;

		}
		else if (ma > 100)
		{
			printf("과학 점수를 잘못입력하였습니다\n");
			continue;
		}
		else
			avg = (double)(ko + en + ma) / 3;
		break;
	}
		if (90 <= avg)
			grade = "A";
		else if (80 <= avg)
			grade = "B";
		else if (70 <= avg)
			grade = "C";
		else if (60 <= avg)
			grade = "D";
		else 
			grade = "F";

		printf("Average: %.1f\n", avg);
		printf("Grade: %c\n", grade);
	return 0;
}