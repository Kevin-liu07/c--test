 
//����һ����stdio.h���ļ�
//std--��׼ standard  input  output 

//#include <stdio.h>

//int main()  //������--��������--main��������ֻ��һ��
//{	//�����������
	//����Ļ�����hello world
	//����-printf function - printf - ��ӡ����
	//�⺯��-C���Ա�ʡ�ṩ������ʹ�õĺ���
	//���˵Ķ���-���к�
	//#include
//	printf("hello world\n");
//	return 0;
//}



//int  ���͵���˼ 
//char  �ַ���������
//short --short int  ������
//long  ������
//long long  ����������
//float  �����ȸ�����
//double  ˫���ȸ�����

//%d--��ӡ����
//%c--��ӡ�ַ�
//%f--��ӡ��������
//%p--�Ե�ַ����ʽ��ӡ
//%x--��ӡ16��������
//%o...


//#include <stdio.h>

//char--�ַ�����
//int main()
//{
	//char ch = 'A';//���ڴ�����ռ�
	//printf("%c\n, ch");//%c--��ӡ�ַ���ʽ������
	
	//int age = 20;
	//printf("%d\n", age);//%d--��ӡ����ʮ��������

	//long num = 100;
	//printf("%d\n", num);

	//float f = 5.0;
	//printf("%f\n",f);

	//double d = 3.14;
	//printf("%lf\n", d);

//	return 0;
//}



//#include<stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(char));// 1�ֽ�        
//	printf("%d\n", sizeof(short));//2             
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//


//#include<stdio.h>

//int main()
//{
//	short age = 20;//���ڴ����������ֽ�=16bit���������20
//	float weight = 95.6f;//���ڴ������ĸ��ֽڣ����С��
	//return 0;
//


//#include<stdio.h>

//int num2 = 20;//ȫ�ֱ���--�����ڴ����({ })֮��ı���

//int main()
//{
//	int num = 10;//�ֲ�����--�����ڴ�����ڲ�

//	return 0;
//}



//#include<stdio.h>

//int a = 100;

//int main()
//{
//	int a = 10;//�ֲ�������ȫ�ֱ������鲻Ҫ��ͬ�����ײ�����ᣬ����bug
//	            //daunt�ֲ�������ȫ�ֱ�����������ͬʱ���ֲ���������
//	printf("%d\n", a);
//
//	return 0;
//}


//#include<stdio.h>

//int a = 10;
//int main()
//{
	
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>

//int main()
//{
	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
	//��������--ʹ�����뺯��scanf
//	scanf_s("%d%d", &num1, &num2);//ȡ��ַ���� &
	
	//c�����﷨�涨������Ҫ�����ڵ�ǰ������ǰ��
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//} 


//#include<stdio.h>

//int global = 2020;//ȫ�ֱ���

//void test()
//{
//	printf("test()-- %d\n", global);

//}
//int main()
//{
//	test();
//	printf("num = %d\n", global);
//	return 0;
//}


#include <stdio.h>

int main()
{
	//δ�����ı�ʶ��
	//����extern�ⲿ���ŵ�
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
}