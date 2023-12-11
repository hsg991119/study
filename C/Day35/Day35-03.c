#include <stdio.h>
#include < stdlib.h>
#include < string.h>


typedef unsigned long long ULONG;
typedef unsigned int UINT;

/*
*  n��° �Ǻ���ġ �� (fibonacci number)�� ���ϴ� �Լ�
*
* @param n ���ϰ��� �ϴ� �Ǻ���ġ ���� ����
* @param cache ������ ����� �Ǻ���ġ ���� ������ �迭
* @return n��° �Ǻ���ġ ��
*/

ULONG fibonacci(UINT n, ULONG* cache)
{
	/*
	// ���� ���ǿ� �ش��ϴ� ���, �Ǻ���ġ ���� ��ȯ
	if (n <= 1) return n;

	// ������ ����ؼ� ������ �Ǻ���ġ ���� ������, �� ���� ��ȯ
	// if (cache[n] != 0) return cache[n];
	if (cache[n]) return cache[n];
	*/

	// �� �� ���ǹ��� ���ǹ� �ϳ��� �ۼ�
	if (n <= 1 || cache[n]) return cache[n];

	// ���� �� �Ǻ���ġ ���� ���ؼ� n��° �Ǻ���ġ ���� ���ϰ�, �� ���� �迭�� ����
	cache[n] = fibonacci(n - 1, cache) + fibonacci(n - 2, cache);

	// n��° �Ǻ���ġ ���� ��ȯ
	return cache[n];
}

int main()
{
	int num;

	// ������ ����� �Ǻ���ġ ���� �����ϱ� ���� �迭
	// -> ����ڰ� �Է��� �ڿ����� ũ�⸸ŭ ���� �޸� �Ҵ����� ���� ũ�� �迭�� ����
	ULONG* cache = NULL;


	printf("Enter a positivie integer greater than 1: ");
	scanf("%d", &num);
	printf("\n");

	if (num <= 1)
	{
		printf("ERROR Invalid value!\n");
		return 1;
	}

	// ������ ����� �Ǻ���ġ ���� �����ϱ� ���� �������� �迭�� ����
	// -> cache[0] = 0��° �Ǻ���ġ ��
	// cache[10] = 10��° �Ǻ���ġ ��
	// -> ������ ����� �Ǻ���ġ ���� ������ �迭�� ũ��� (num + 1)�� �Ǿ�� �Ѵ�.
	cache = malloc(sizeof(ULONG) * (size_t)(num + 1));

	// IMPORTANT: �������� �Ҵ� ���� ���� ������ �˻��� ���� ����Ѵ�.
	if (!cache)
	{
		printf("ERROR: Insufficient memory!\n");
		exit(1);
	}

	// memset �Լ��� �Ҵ� ���� ���� ������ 0���� �ʱ�ȭ
	memset(cache, 0, sizeof(ULONG) * (size_t)(num + 1));

	// 1��° �Ǻ���ġ ���� ����
	cache[1] = 1;

	printf("%dth Fibonacci number = %lld\n", num, fibonacci(num, cache));

	free(cache);

	return 0;
}