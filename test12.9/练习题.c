������������a,b��Ҫ�����
[��a - b) ^ 2 * (a / b) + (a+b)^4]/3���������ֳ���1024������.

#include<stdio.h>

int main()
{
	int a, b, m, n, x;
	double f, t;
	printf("����a��b���м��ÿո����\n");
	scanf("%d %d", &a, &b);
	m = a - b; n = a + b; f = (double)a / b;
	t = (m*m*f + n*n*n*n) / 3;
	x = (int)t % 1024;
	printf("t=%lf  \nx=%d\n", t, x);
	return 0;
}
