#include <stdio.h>

typedef struct point
{
	int x;
	int y;
} point_t;

int main()
{
	point_t points[] = { {1, 3}, {3, -2}, {5, 2} };

	printf("sizeof(point_t) = %zd\n", sizeof(point_t));
	printf("sizeof(points) = %zd\n", sizeof(points));

	int length = sizeof(points) / sizeof(point_t);

	printf("length = %d\n", length);

	printf("-----------------------------------------------------\n");

	printf("points[0] = (%d, %d)\n", points[0].x, points[0].y);
	// -> printf("points[0] = (%d, %d)\n", *(points + 0).x, *(points + 0).y); //WRONG!
	// -> printf("points[0] = (%d, %d)\n", (*(points + 0)).x, (*(points + 0)).y);
	// -> printf("points[0] = (%d, %d)\n", (*points).x, (*points).y);


	for(int i = 0; i < length; i++)
		printf("points[%d] = (%d, %d)\n", i,points[i].x, points[i].y);

	printf("-----------------------------------------------------\n");

	point_t* ptr = points;

	//printf("points[0] = (%d, %d)\n", *ptr.x, *ptr.y); //WRAONG!
	printf("points[0] = (%d, %d)\n", (*ptr).x, (*ptr).y);
	// ->printf("points[0] = (%d, %d)\n", ptr[0].x, ptr[0].y);

	// 구조체 포인터와 간접 멤버 접근 연산자(->)를 이용해 구조체 변수의 멤버 변수에 접근
	printf("points[0] = (%d, %d)\n", ptr->x, ptr->y);
	//->printf("points[0] = (%d, %d)\n", (*ptr).x, (*ptr).y);

	for (int i = 0; i < length; i++, ptr++)
		printf("points[%d] = (%d, %d)\n", i, ptr->x, ptr->y);

	printf("-----------------------------------------------------\n");

	point_t pos = points[0];
	// -> point_t pos = { points[0].x, points[0].y };

	printf("pos = (%d, %d)\n", pos.x, pos.y);
	

	return 0;
}