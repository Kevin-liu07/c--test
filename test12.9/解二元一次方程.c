#define _CRT_SECURE_NO_WARNINGS

#include<math.h>
#include<stdio.h>
int main()
{
	float a, b, c, x1, x2, m;
	printf("������a��b��c���м��ÿո����\n");
	scanf("%f %f %f", &a, &b, &c);
	m = b*b - 4 * a*c;
	x1 = (-b + sqrt(m)) / (2 * a);
	x2 = (-b - sqrt(m)) / (2 * a);
	printf("%f \n %f", x1, x2);
	return 0;
}