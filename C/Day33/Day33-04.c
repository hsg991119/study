#include <stdio.h>
#include <stdlib.h>

// 두 값 중에서 작은 값을 구하는 매크로 함수
#define MIN(X, Y)  ((X) < (Y) ? (X) : (Y))

typedef struct point
{
	int x;
	int y;
} point_t;



int main()
{
	point_t A, B;

	// B에서 직사각형의 경계선까지의 거리
	int distances[4] = { 0 };

	// B에서 직사각형의 경계선까지의 최단 거리
	int shortest = 0;

	printf("Enter the coordinates of the vertex A: ");
	scanf("%d %d", &A.x, &A.y);

	printf("Enter the coordinates of the point B: ");
	scanf("%d %d", &B.x, &B.y);

	printf("\n");

	// 직사각형의 꼭지점을 나타내는 A이 1사분면에 있는지 확인
	if (A.x <= 0 || A.y <= 0)
	{
		printf("ERROR: Invaild vertesx A!\n");
		exit(1);
	}
	
	// B가 원점과 A을 꼭지점으로 갖는 직사각형 안에 포함되는지 확인
	if (B.x <= 0 || B.y <= 0 || B.x >= A.x || B.y >= A.y)
	{
		printf("ERROR: Invaild point B!\n");
		exit(1);
	}

	// B에서 직사각형의 경계선까지의 최단 거리를 계산
	// -> B.x, B.y (A.x - B.x), (A.y - B.y) 중에서 가장 작은 값
	distances[0] = B.x;
	distances[1] = B.y;
	distances[2] = A.x - B.x;
	distances[3] = A.y - B.y;

	// 변수 shortest를 배열 distances의 첫 번째 원소로 초기화
	shortest = distances[0];

	// 반복문으로 배열 distances의 원소들 중에서 최솟값을 계산
	for (int i = 1; i < 4; i++)
		//shortest = shortest < distances[i] ? shortest : distances[i];
		shortest = MIN(shortest, distances[i]);


	printf("The shortest distance is %d.\n", shortest);


	return 0;
}