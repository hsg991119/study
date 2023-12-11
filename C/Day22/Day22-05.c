#include <stdio.h>

#define LENGTH	20							// 2������ �ִ� �ڸ���
#define TRUE	1
#define MAX_DECIMAL 1048575					// 20�ڸ� 2������ �ִ�

int main()
{
	int decimal;							// ����ڰ� �Է��� 10���� �ڿ���
	int binary[LENGTH] = { 0 };				// ����ڰ� �Է��� �ڿ����� 2������ ��ȯ
	int digits = 0;							// ����ڰ� �Է��� �ڿ����� 2���� �ڸ���
	int num;
	// ���� �ݺ����� ����ڰ� 0�� �Է��� ������ �ݺ����� ����
	while (TRUE)
	{
		printf("Enter a positivie integer: ");
		scanf("%d", &decimal);
		

		if (!decimal) break;
		
		if (decimal < 1 || decimal > MAX_DECIMAL)
		{
			printf("ERROR: Out of range!\n");
			continue;
		}

		// ���� num�� ����ڰ� �Է��� �ڿ����� ����
		num = decimal;

		for (digits = 0; num != 0; digits++)
		{
			// ���� num�� 2�� ������ ���� �������� �迭 binary�� ���ҿ� ����
			binary[digits] = num % 2;

			num /= 2;
		}
		
		printf("Thebinary number for decimal %d is ", num);
		for (int i = digits - 1; i >= 0; i--)
			printf("%d", binary[i]);
		printf(".\n\n");
	}

	printf("Good bye!\n");

	return 0;
}