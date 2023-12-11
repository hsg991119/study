#include <stdio.h>

int main()
{
	int weight;
	int bags = 0;
	int max_3kg;
	int remain;


	printf("Enter the weight of sugar to be delivered: ");
	scanf("%d", &weight);
	printf("\n");

	max_3kg = weight / 3;

	for (int i = 0; i <= max_3kg; i++)
	{
		remain = weight - i * 3;

		if (remain % 5 == 0)
		{
			bags = i + remain / 5;
			break;
		}
	}
	if (bags)
		printf("Cheolsu will need to bring %d bags.\n", bags);
	else
		printf("Cheolsu cannot take %dkg of sugar.\n", weight);

	return 0;
}