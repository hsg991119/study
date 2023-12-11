#include <stdio.h>

#define NUM_COINS 10

int main()
{
	int coin_units[] = {500, 100, 50, 10};			//���� ����
	int length = sizeof(coin_units) / sizeof(int); //�迭 coin_units�� ũ��

	int amount = 0;								   // �Ž�����
	int num = 0;								   // �Ž��� �� ������ ����

	// ����� �Է�
	printf("Enter the amount to be repaid: ");
	scanf("%d", &amount);
	printf("\n");

	if (amount < 10 || amount > 6600 || amount % 10)
	{
		printf("ERROR: Invalid amount!\n");

		// ���α׷� ����
		// return 1;
		
		// exit �Լ��� ���� ���� ���� ���μ���(process)�� ����
		// #include <stdib.h>
		// voide exit(int status);
		exit(1);
	}

	// �ݺ������� 500��¥�� ������������ �� ���� �Ž��� ��� �ϴ��� ���
	for (int i = 0; i < length && amount > 0; i++)
	{
		// �Ž��� �� ������ ������ ���
		num = amount / coin_units[i];

		// �Ž��� �� ������ �ִ� ���
		if (num)
		{
			// �Ž��� �� ������ ������ ������ �ִ� ������ ���� �� ����.
			num = num > NUM_COINS ? NUM_COINS : num;

			// ������ ������ ���� ���
			printf("%d won coins = %d\n", coin_units[i], num);

			// ���� ������ ������ �Ž��� �ְ� ���� �Ž������� ���
			amount -= coin_units[i] * num;
		}
	}
	return 0;
}