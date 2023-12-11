#include <stdio.h>

int main()
{
	int apple;
	int basket;
	int BASKET = 10;
	printf("Enter the number of apples: ");
	scanf("%d", &apple);
	printf("\n");


	basket = apple / BASKET + (apple % BASKET ? 1 : 0);
	printf("It takes %d baskets to hold %d apples",basket ,apple);

	return 0;
}