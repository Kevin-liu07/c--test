#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//scanf��C�����ṩ��
//	sum = num1 + num2;            //scanf_s��ʾ��׼C���ԣ�vs�������ṩ�ģ������������޷�ʶ��
//	printf("sum = %d\n", sum);
//	return 0;
//}



//int main()
//{
//  3;//��һ�ֳ���--���泣��

	//const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
	//int arr[10] = { 0 };
     
	//const--������
	//�ڶ��ֳ���--const���εĳ�����
	//const int num = 4;
	//printf("%d\n", num);

	
//	return 0;
//}


//�����ֳ���--define ����ı�ʶ������
//#define MAX 10

//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//�����ֳ���--ö�ٳ���
//ö��--һһ�о�
//�Ա��� Ů  ����
//��ԭɫ���� �� ��
//����;1 2 3 4 5 6 7

//ö�ٹؼ�--enum
///enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2

//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};

//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	return 0;
//}


//int main()
//{
//	�����ڼ�����ϴ����ʱ�򣬴�����Ƕ�����
//    a--97   A-65 ....
//	ASCII ����
//	ASCII��ֵ
//	char a[] = "abc";//����
//	//"abc"--'a' 'b' 'c' '\0'--'\0'�ַ����Ľ�����־    \0�����ص�
//	char b[] = { 'a', 'b', 'c','\0'};
//	printf("%s\n", a);
//	printf("%s\n", b);
//	return 0��
//}

//int main()
//{
//	//printf("%d\n",strlen("asaad\tsd55\tsa") );
//	printf("%c\n",'\x61');
//}


//int main()
//{
//	int input = 0;
//	printf("������ʯ��\n");
//	printf("�ú�ѧϰ?(1/0)>: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("hao offer");
//	else 
//		printf("������\n");
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line <= 20005)
//	{
//		printf("��һ�д��� %d\n", line);
//		line++;
//	}
//		if (line >= 20000)
//			printf("��offer\n");
//	return 0;
//}


//
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0, sun = 0;
//	int a = 100;
//	int b = 200;
//	//sum = num1 + num2;       
//	sun = add(num1, num2);
//	//sum = a + b;
//	sum = add(a, b);
//	printf("sum = %d\n", sum);
//	printf("sun = %d\n", sun);
//	return 0;
//}

//�⺯�� ϵͳ�Դ��ĺ���
//�Զ��庯��  �Լ�д�ĺ���


int main()
{
	/*int a = 1;
	int b = 2;
	int c = 3;
	......*/
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����ʮ���������ֵ�����
	       //�±꣨0,1,2,3,4,5,6,7,8��9��
	
	//char ch[20];
	//float arr2[5];
	//printf("%d\n", arr[4]);  //arr[�±�]
	int i = 0;
	while (i <= 9)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}





