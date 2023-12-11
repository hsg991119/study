#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

/*
typedef enum _bool
{
	false, true
}bool;
*/


int main()
{
	// ���� ����
	int num = 0;

	// ���� �������� �迭�� ���� �޸� �Ҵ����� �����ϰ�, �� �ּҸ� ������ ������
	char* is_primes = NULL;

	printf("Enter a positive integer greater than 2: ");
	scanf("%d", &num);
	printf("\n");

	if (num <= 2)
	{
		printf("ERROR Invalid value!\n");
		exit(1);
	}
	
	// ���� �޸� �Ҵ����� ���� �������� �迭�� ����
	is_primes = (char*)malloc(sizeof(char) * (num + 1));

	if (!is_primes)
	{
		printf("ERROR Insufficient memory!\n");
		exit(1);
	}

	// malloc �Լ��� �������� ���� ������ �Ҵ� ������, �� ���� ������ �ʱ�ȭ�Ǿ�
	// ���� �ʴ�. ���� �������� �Ҵ� ���� ���� ������ memset �Լ��� �ʱ�ȭ�� ����
	// ����ϴ� �� ����.
	memset(is_primes, 0, sizeof(char) * (num + 1));

	// �����佺�׳��� ü �˰�������, 2���� ���� num������ �ڿ����� �߿��� �Ҽ�(prime numbers)

	// 2���� ���� num������ �ڿ������� �Ҽ���� �����ϰ�, ���� �������� ��� TRUE�� �ʱ�ȭ
	for (int i = 2; i < num; i++) is_primes[i] = TRUE;

	// �ݺ������� 2���� ���� num�� �����ٱ����� �ڿ������� ���ʴ�� Ȯ��
	for (int i = 2; i * i <= num; i++)
		//���� i�� �Ҽ��̸�, ���� i�� ����� �Ҽ��� �ƴϴ�.
		if (is_primes[i])
			for (int j = i * i; j <= num; j += i)
				is_primes[j] = FALSE;

	printf("Prime numbers between 2 and  %d:\n", num);

	for (int i = 2; i <= num; i++)
		if (is_primes[i]) printf("%d ", i);

	printf("\n");

	free(is_primes);
	return 0;
}