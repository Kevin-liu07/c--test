#include<stdio.h>

int main()
{
	double p = 11340.0, d, r, v, w;
	printf("����ֱ��(��λΪ�ף�:");
	scanf("%lf", &d);
	r = d / 2.0;
	v = 4.0 / 3.0*3.1415926*r*r*r;
	w = p*v;
	printf("%lf kg\n", w);
	return 0;
}