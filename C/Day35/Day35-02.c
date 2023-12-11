#include <stdio.h>


typedef unsigned long long ULONG;
typedef unsigned int UINT;

/*
*  n��° �Ǻ���ġ �� (fibonacci number)�� ���ϴ� �Լ�
* 
* @param n ���ϰ��� �ϴ� �Ǻ���ġ ���� ����
* @return n��° �Ǻ���ġ ��
*/

ULONG fibonacci(UINT n)
{
	// fibonacci(2) = fibonacci(1) + fibonacci(0);
	// -> fibonacci(1) = 1
	// -> fibonacci(0) = 0
	// -> fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2);
	/*
	// �Ǻ���ġ ���� ������ ����
	ULONG fibo = 0;

	// ���ǹ����� ���� ������ Ȯ���ϰ�, ���� ���ǿ� �ش����� ������
	// ���� �� �Ǻ���ġ ���� ���ؼ� �Ǻ���ġ ���� ���
	if (n == 0) fibo = 0;
	else if (n == 1) fibo = 1;
	else fibo = fibonacci(n - 1) + fibonacci(n - 2);

	// ����� �Ǻ���ġ ���� ��ȯ
	return fibo;
	*/

	// ���ǹ����� ���� ������ Ȯ���ϰ�, ���� ���ǿ� �ش����� ������
	// ���� �� �Ǻ���ġ ���� ���ؼ� �Ǻ���ġ ���� ���

	return n <= 1 ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int num;

	printf("Enter a positivie integer greater than 1: ");
	scanf("%d", &num);
	printf("\n");

	if (num <= 1)
	{
		printf("ERRORL Invalid value!\n");
		return 1;
	}

	printf("%dth Fibonacci number = %lld\n", num, fibonacci(num));
	return 0;
}