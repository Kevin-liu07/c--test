#include <stdio.h>
int main()
{
	int x, y, z, q;
	printf("�������������֣�ÿ������֮���ÿո����\n");
	scanf_s("%d %d %d", &x, &y, &z);
	if (x < y){ q = x; x = y; y = q; }
	if (x < z){ q = z; z = x; x = q; }
	if (y < z){ q = y; y = z; z = q; }
	printf("%d %d %d\n", x, y, z);
	return 0;
}