#include <stdio.h>

int main()
{
	int width = 25;
	int height = 15;
	int area = width * height;
	int perimeter = (width + height) * 2;

	printf("width = %d\n", width);
	printf("height = %d\n", height);
	printf("area = %d\n", area);
	printf("perimeter = %d", perimeter);
	return 0;
}

