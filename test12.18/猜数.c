//����
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	int x, a, b, y;
	printf("Please input the range:");
	scanf("%d %d", &a, &b);//�������ֵķ�Χ 
	x = rand() % (b - a + 1) + a;//��ʾ������������� [a,b]֮�� 
	printf("Computer:I have got a number betweed %d and %d\n", a, b);
	printf("Computer:Please make your guess:");
	while (1)
	{
		scanf("%d", &y);
		if (y == x)
		{
			printf("Computer:Congratulation��! you got the right answer, which is %d", x);
			break;//������Ϊ�¶��� �˳�ѭ�� 
		}
		else if (y>x)
		{
			printf("Computer:Sorry! the number you guessed is bigger than the number i thought, please try again:");//�µ����ֱȵ�����Ĵ� ���²� 
		}
		else if (y<x)
		{
			printf("Computer:Sorry!the number you guessed is smaller than the number i thought, please try again:");//�µ����ֱȵ������С ���²� 
		}
	}
	return 0;
}