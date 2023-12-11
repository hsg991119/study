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
	// 변수 선언
	int num = 0;

	// 상태 변수들의 배열을 동적 메모리 할당으로 생성하고, 그 주소를 저장할 포인터
	char* is_primes = NULL;

	printf("Enter a positive integer greater than 2: ");
	scanf("%d", &num);
	printf("\n");

	if (num <= 2)
	{
		printf("ERROR Invalid value!\n");
		exit(1);
	}
	
	// 동적 메모리 할당으로 상태 변수들의 배열을 생성
	is_primes = (char*)malloc(sizeof(char) * (num + 1));

	if (!is_primes)
	{
		printf("ERROR Insufficient memory!\n");
		exit(1);
	}

	// malloc 함수로 동적으로 저장 공간을 할당 받으면, 그 저장 공간은 초기화되어
	// 있지 않다. 따라서 동적으로 할당 받은 저장 공간은 memset 함수로 초기화한 다음
	// 사용하는 게 좋다.
	memset(is_primes, 0, sizeof(char) * (num + 1));

	// 에라토스테네의 체 알고리즘으로, 2부터 변수 num까지의 자연수들 중에서 소수(prime numbers)

	// 2부터 변수 num까지의 자연수들이 소수라고 가정하고, 상태 변수들을 모두 TRUE로 초기화
	for (int i = 2; i < num; i++) is_primes[i] = TRUE;

	// 반복문으로 2부터 변수 num의 제곱근까찌의 자연수들을 차례대로 확인
	for (int i = 2; i * i <= num; i++)
		//변수 i가 소수이면, 변수 i의 배수는 소수가 아니다.
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