#include <stdio.h>
#include < stdlib.h>
#include < string.h>


typedef unsigned long long ULONG;
typedef unsigned int UINT;

/*
*  n번째 피보나치 수 (fibonacci number)를 구하느 함수
*
* @param n 구하고자 하는 피보나치 수의 순서
* @param cache 이전에 계산한 피보나치 수를 저장할 배열
* @return n번째 피보나치 수
*/

ULONG fibonacci(UINT n, ULONG* cache)
{
	/*
	// 종료 조건에 해당하는 경우, 피보나치 수를 반환
	if (n <= 1) return n;

	// 이전에 계산해서 저장한 피보나치 수가 있으면, 그 값을 반환
	// if (cache[n] != 0) return cache[n];
	if (cache[n]) return cache[n];
	*/

	// 위 두 조건문을 조건문 하나로 작성
	if (n <= 1 || cache[n]) return cache[n];

	// 이전 두 피보나치 수를 더해서 n번째 피보나치 수를 구하고, 그 값을 배열에 저장
	cache[n] = fibonacci(n - 1, cache) + fibonacci(n - 2, cache);

	// n번째 피보나치 수를 반환
	return cache[n];
}

int main()
{
	int num;

	// 이전에 계산한 피보나치 수를 저장하기 위한 배열
	// -> 사용자가 입력한 자연수의 크기만큼 동적 메모리 할당으로 가변 크기 배열을 생성
	ULONG* cache = NULL;


	printf("Enter a positivie integer greater than 1: ");
	scanf("%d", &num);
	printf("\n");

	if (num <= 1)
	{
		printf("ERROR Invalid value!\n");
		return 1;
	}

	// 이전에 계산한 피보나치 수를 저장하기 위해 동적으로 배열을 생성
	// -> cache[0] = 0번째 피보나치 수
	// cache[10] = 10번째 피보나치 수
	// -> 이전에 계산한 피보나치 수를 저장할 배열의 크기는 (num + 1)이 되어야 한다.
	cache = malloc(sizeof(ULONG) * (size_t)(num + 1));

	// IMPORTANT: 동적으로 할당 받은 저장 공간은 검사한 다음 사용한다.
	if (!cache)
	{
		printf("ERROR: Insufficient memory!\n");
		exit(1);
	}

	// memset 함수로 할당 받은 저장 공간을 0으로 초기화
	memset(cache, 0, sizeof(ULONG) * (size_t)(num + 1));

	// 1번째 피보나치 수를 설정
	cache[1] = 1;

	printf("%dth Fibonacci number = %lld\n", num, fibonacci(num, cache));

	free(cache);

	return 0;
}