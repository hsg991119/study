#include <stdio.h>

int main()
{
	int n1, n2;
	while (1)
	{
		printf("Enter two integers: ");
		scanf("%d %d", &n1, &n2);
		if (n1 == 0 && n2 == 0)
		{
			printf("Good bye!");
			break;
		}
		else
		{
			printf("%d + %d = %d\n", n1, n2, n1 + n2);
			printf("\n");
			continue;
		}
	}
	return 0;
}