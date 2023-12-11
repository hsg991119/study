#include <stdio.h>

int main()
{
	int width, height;
	double area;
	printf("Enter the width of the triangle: ");
	scanf("%d", &width);
	printf("Enter the height of the triangle: ");
	scanf("%d", &height);
	printf("\n");

	area = (double)width * height / 2;

	printf("The area of the triangle is %g.: \n", area);
	return 0;
}


