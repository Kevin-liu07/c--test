#include"stdio.h"
#include"stdlib.h"

int main(int argc, char*argv[])
{

	int youfirst, totalnum = 30, getnum, computergetnum;
	do
	{
		printf("\n�˻���ʼ�밴 0����ҿ�ʼ�밴 1��:");
		scanf("%d", &youfirst);
	} while (youfirst != 1 && youfirst != 0);

	while (1)
	{
		if (youfirst == 1)
		{
			do{ printf("\nʣ��%d�����  ������:", totalnum); scanf("%d", &getnum); } while (getnum<0 || getnum>2 || totalnum<getnum);
			totalnum -= getnum;
			if (totalnum == 0){ printf("��Ӯ�ˣ���\n"); break; }

			if (totalnum % 3 == 0){ computergetnum = rand() % 2 + 1; }
			else{ computergetnum = totalnum % 3; }
			totalnum -= computergetnum;
			printf("�˻�������%d����� \n", computergetnum);
			if (totalnum == 0){ printf("�˻�ʤ���ˣ���"); break; }
		}
		else
		{
			if (totalnum % 3 == 0){ computergetnum = rand() % 2 + 1; }
			else{ computergetnum = totalnum % 3; }
			totalnum -= computergetnum;
			printf("�˻�������%d����� ", computergetnum);
			if (totalnum == 0){ printf("�˻�ʤ���ˣ���"); break; }
			do
			{
				printf("ʣ��%d�����������:", totalnum);
				scanf("%d", &getnum);
			} while (getnum < 0 || getnum>2 || totalnum < getnum);
			totalnum -= getnum;
			if (totalnum == 0){ printf("��ʤ���ˣ���"); break; }
		}

	}
	return 0;
}