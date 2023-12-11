#include <stdio.h>

#define LENGTH 100
#define TRUE 1
#define FALSE 0

int main()
{
	// 2부터 100까지의 자연수들이 소수인지 아닌지 나타내는 상태 변수들이 배열
	int is_prime[LENGTH + 1] = { 0 };

	// 모든 자연수가 소수(prime nubmer)라고 가정
	for (int i = 2; i <= LENGTH; i++)
		is_prime[i] = TRUE;

	// 에라토스테네스의 체 알고리즘을 이용해, 2부터 100까지의 자연수들의 소수인지 아닌지 확인
	for (int i = 2; i * i <= LENGTH; i++)
		if (is_prime[i])
			// 변수 i가 소수이면, i의 배수는 소수가 아니다.
			for (int j = i * i; j <= LENGTH; j += i)
				is_prime[j] = FALSE;

	printf("Prime numbers between 2 and %d:\n", LENGTH);

	// for 구믄으로 배열 is_primes의 원소들 중에서 TRUE인 원소들의 인덱스를 출력
	for (int i = 2; i <= LENGTH; i++)
		if (is_prime[i]) printf("%d ", i);

	printf("\n");

	return 0;
}