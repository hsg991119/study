#include <stdio.h>
#include <math.h>

#define SQUARE(X) ((X) * (X))

typedef struct point
{
	int x, y;
} point_t;


int main()
{
	point_t p1, p2;
	double distance;
	double sqrt(double value);
	double pow(double base, double exponent);

	printf("Enter p1 coordinate: ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("Enter p1 coordinate: ");
	scanf("%d %d", &p2.x, &p2.y);

	distance = sqrt(SQUARE(p1.x - p2.x) + SQUARE(p1.y - p2.y));

	printf("distance between two points = %g\n", distance);

	return 0;
}