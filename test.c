#include <stdio.h>

int main()
{
	int i, j, x;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			x = j*i;
			printf("%d*%d=%d ", j, i, x);
		}
		printf("\n");
	}

	return 0;
}
