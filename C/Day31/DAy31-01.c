#include <stdio.h>

#define IS_THREE_DIGIT(X) ((X) >= 100 && (X)< 1000)

#define LENGTH 9

#define TO_INTEGER(X)  ((X) - '0')

int main()
{
	int num1, num2, num3;

	char buffer[LENGTH + 1] = { 0 };

	int counts[10] = { 0 };

	printf("Enter three three-digit inergers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("\n");

	if (!IS_THREE_DIGIT(num1) || !IS_THREE_DIGIT(num2) || !IS_THREE_DIGIT(num3))
	{
		printf("ERROR: You must enter three three-digit integers!\n");
		return 1;
	}
	
	
	sprintf(buffer, "%d", num1 * num2 * num3);


	for (int i = 0; buffer[i] && i <= LENGTH; i++)
		counts[TO_INTEGER(buffer[i])]++;

	printf("%d * %d * %d = %s\n", num1, num2, num3, buffer);

	for(int i = 0; i <= LENGTH; i++)
		printf("Number of times %d = %d\n", i, counts[i]);

	return 0;
}
