#include<stdio.h>
int main()
{
	int n, p = 0;
	printf("����һ��������\n");
	scanf("%d", &n);
	while (n != 1)
	{
		if (n % 2 == 0){ n = n / 2; }
		else{ n = 3 * n + 1; }
		p++;
		printf("%d  %d\n", n, p);
	}
	return 0;
}