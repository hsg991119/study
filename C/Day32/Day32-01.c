#include <stdio.h>

/*
struct point
{
	int x;
	int y;
};
*/

typedef struct point
{
	int x;
	int y;
} point_t;

int main()
{
	struct point p1;

	printf("sizeof(p1) = %zd\n", sizeof(p1));

	p1.x = 10;
	p1.y = 5;

	printf("p1 = (%d, %d)\n", p1.x, p1.y);

	struct  point p2 = { 3, 7 };

	printf("p2 = (%d, %d)\n", p2.x, p2.y);

	point_t p3 = { -5, 3 };

	printf("p3 = (%d, %d)\n", p3.x, p3.y);

	return 0;
}