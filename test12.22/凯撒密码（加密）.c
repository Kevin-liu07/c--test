#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int k;
	char c, p;
	printf("����\n");
	printf("����ת����λ,��������,��������\n");
	scanf("%d", &k);
	scanf("%c", &p);
	printf("����ԭ�ģ�Ӣ�ģ�\n");
	do
	{
		scanf("%c", &p);
		if (p == '\n')break;
		c = p;
		c = 'a' + (p - 'a' + k) % 26;
		printf("%c", c);
	} while (1);
	return 0;
}