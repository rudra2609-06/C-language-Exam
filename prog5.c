#include <stdio.h>

int main()
{
	for (int i = 0; i <= 4; i++)
	{
		for (int k = 0; k < 5 - i; k++)
		{
			printf("  ");
		}

		for (int j = 10 - i; j <= 10; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}