쳲���������
1 1 2 3 5 8 13 21 34 55 89 ........
�ӵ����ʼ��ÿһ�����ǰ������ĺ͡�
#include<stdio.h>

main()
{
	int i = 1, un1 = 1, un2 = 1, un = 1, n;
	printf("����쳲�������������\n");
	scanf_s("%d", &n);
	while (i <= n - 2)
	{
		un = un1 + un2;
		un1 = un2; un2 = un;
		i++;
	}
	printf("%d\n", un);
	return 0;
}