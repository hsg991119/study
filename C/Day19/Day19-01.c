#include <stdio.h>

#define MAX(X, Y)		((X) > (Y) ? (X) : (Y))
#define MIN(X, Y)		((X) < (Y) ? (X) : (Y))

int max(int n1, int n2)
{

}

int main()
{
	int n1, n2;

	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	printf("The greater of %d and %d is %d\n", n1, n2, MAX(n1, n2));
	printf("The smaller of %d and %d is %d\n", n1, n2, MIN(n1, n2));

	return 0;
}