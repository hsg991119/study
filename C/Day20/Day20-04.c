#include <stdio.h>

#define MAX(X, Y)  ((X) > (Y) ? (X) : (Y))

int main()
{
	int ko, en, ma;
	int M;
	double score;
	printf("Enter three scores: ");
	scanf("%d %d %d", &ko, &en, &ma);
	printf("\n");

	M = MAX(ko, MAX(en, ma));


	ko = (double)ko / M * 100;
	en = (double)en / M * 100;
	ma = (double)ma / M * 100;

	score = (double)(ko + en + ma) / 3;

	printf("The average of modified scores = %.1f", score);

	return 0;
}