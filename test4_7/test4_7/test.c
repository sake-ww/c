#define _CRT_SECURE_NO_WARNINGS 1
//����

#include <stdio.h>

//���Զ��庯�������ֵ����������
//int get_max(int x, int y)
//{
//	return (x>y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}


//���Զ��庯����������
//void Swap1(int x, int y) 
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////���У�ת�����ɹ��������������Դ�������ʱ����Ҫ�ò�����
//void Swap2(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
////��ȷ
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int isprine(int n)
//{
//	int i, flag;
//	flag = 1;
//	for (i = 2; i <= n / 2; i++)
//	{
//		if (n%i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		printf("%d ", n);
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int i, j = 0, k;
//	for (i = 100; i <= 200; i++)
//	{
//		if (isprine(i))
//		{
//			j++;
//			if (j % 5 == 0)
//				printf("\n");
//		}
//	}
//}

//�ж��Ƿ�Ϊ����
//#include<stdio.h>
//
//int leap_year(int sun)
//
//{
//
//	int i;
//
//	if (sun % 4 == 0 && sun % 100 != 0 || sun % 400 == 0)
//
//	{
//
//		i = 1;
//
//	}
//
//	else
//
//	{
//
//		i = 0;
//
//	}
//
//	return (i);
//
//}
//
//int main()
//
//{
//
//	int year, c;
//
//	scanf("%d", &year);
//
//	c = leap_year(year);
//
//	if (c == 1)
//
//		printf("%d������\n", year);
//
//	else
//
//		printf("%d��������\n", year)��
//
//		return 0;
//
//}

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4.
//#include <stdio.h>
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}

//��д��������������ʱ���������ַ����ĳ��ȡ�
//int Strlen(const char*str)
//{
//	if (*str == '\0')
//	return 0;
//	else return 1 + Strlen(str + 1);
//}
//int main()
//{
//	char *p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}




