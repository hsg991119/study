#include <stdio.h>

int main()
{
	
	int n1, n2;
	int gcf = 1;
	int min;
	

	printf("Enter two positive integer: ");
	scanf("%d %d", &n1, &n2);
	printf("\n");

	min = n1 < n2 ? n1 : n2;

	for (int i = min; i >= 1; i--)
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcf = i;
			break;
		}

	printf("The greatest common factor of %d and %d is %d\n", n1, n2, gcf);


 
	return 0;
}