#include<stdio.h>
int main()
{
	char p, c;
	int  k = 3;
	printf("�������λ����");
	scanf("%d", &k);
	p = getchar();
	printf("����Ӣ��\n");
	do
	{
		p = getchar();
		if (p == '\n')break;
		if (p >= 'a'&&p <= 'z')
		{
			c = 'a' + (p - 'a' - k) % 26;
			printf("%c", c);
		}
		else if (p >= 'A'&&p <= 'Z')
		{
			c = 'a' + (p - 'a' - k) % 26;
			printf("%c", c);
		}
		else { printf("%c", p); }
	} while (1);

	return 0;
}