#define _CRT_SECURE_NO_WARNINGS 1
//
//������40��
//��Ŀ����һ���������������
//1.����������õ�һ�������һ��������
//2.����Դ���룺
//�������� :
//
//#include "stdio.h"
//#include "conio.h"
//#define N 5
//main()
//{
//	int a[N] = { 9, 6, 5, 4, 1 }, i, temp;
//	printf("\n original array:\n");
//	for (i = 0; i<N; i++)
//		printf("%4d", a);
//	for (i = 0; i<N / 2; i++)
//	{
//		temp = a;
//		a = a[N - i - 1];
//		a[N - i - 1] = temp;
//	}
//	printf("\n sorted array:\n");
//	for (i = 0; i<N; i++)
//		printf("%4d", a);
//	getch();
//}
//
//������41��
//��Ŀ��ѧϰstatic���徲̬�������÷�������
//1.���������
//2.����Դ���룺
//�������� :
//
//#include "stdio.h"
//#include "conio.h"
//varfunc()
//{
//	int var = 0;
//	static int static_var = 0;
//	printf("\40:var equal %d \n", var);
//	printf("\40:static var equal %d \n", static_var);
//	printf("\n");
//	var++;
//	static_var++;
//}
//void main()
//{
//	int i;
//	for (i = 0; i<3; i++)
//		varfunc();
//	getch();
//}
//
//������42��
//��Ŀ��ѧϰʹ��auto����������÷�
//1.���������������������
//2.����Դ���룺
//�������� :
//
//#include "stdio.h"
//#include "conio.h"
//main()
//{
//	int i, num;
//	num = 2;
//	for (i = 0; i<3; i++)
//	{
//		printf("\40: The num equal %d \n", num);
//		num++;
//		{
//			auto int num = 1;
//			printf("\40: The internal block num equal %d \n", num);
//			num++;
//		}
//	}
//	getch();
//}
//
//������43��
//��Ŀ��ѧϰʹ��static����һ�÷���������
//1.���������
//2.����Դ���룺
//�������� :
//
#include "stdio.h"
#include "conio.h"
main()
{
	int i, num;
	num = 2;
	for (i = 0; i<3; i++)
	{
		printf("\40: The num equal %d \n", num);
		num++;
		{
			static int num = 1;
			printf("\40:The internal block num equal %d\n", num);
			num++;
		}
	}
	getch();
}
