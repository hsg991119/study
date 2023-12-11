#include <stdio.h>

#define LENGTH 100
#define TRUE 1
#define FALSE 0

int main()
{
	// 2���� 100������ �ڿ������� �Ҽ����� �ƴ��� ��Ÿ���� ���� �������� �迭
	int is_prime[LENGTH + 1] = { 0 };

	// ��� �ڿ����� �Ҽ�(prime nubmer)��� ����
	for (int i = 2; i <= LENGTH; i++)
		is_prime[i] = TRUE;

	// �����佺�׳׽��� ü �˰����� �̿���, 2���� 100������ �ڿ������� �Ҽ����� �ƴ��� Ȯ��
	for (int i = 2; i * i <= LENGTH; i++)
		if (is_prime[i])
			// ���� i�� �Ҽ��̸�, i�� ����� �Ҽ��� �ƴϴ�.
			for (int j = i * i; j <= LENGTH; j += i)
				is_prime[j] = FALSE;

	printf("Prime numbers between 2 and %d:\n", LENGTH);

	// for �������� �迭 is_primes�� ���ҵ� �߿��� TRUE�� ���ҵ��� �ε����� ���
	for (int i = 2; i <= LENGTH; i++)
		if (is_prime[i]) printf("%d ", i);

	printf("\n");

	return 0;
}