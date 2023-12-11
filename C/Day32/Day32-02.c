#include <stdio.h>

typedef struct point
{
	int x;
	int y;
} point_t;

int main()
{
	point_t p1, p2;
	point_t pos;

	printf("Enter p1 coordinate: ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("Enter p2 coordinate: ");
	scanf("%d %d", &p2.x, &p2.y);

	pos.x = p1.x + p2.x;
	pos.y = p1.y + p2.y;

	printf("pos = (%d, %d)\n", pos.x, pos.y);

	return 0;
}
