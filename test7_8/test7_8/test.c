#define _CRT_SECURE_NO_WARNINGS 1



//������43��
//��Ŀ��ѧϰʹ��static����һ�÷���������
//1.���������
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
//			static int num = 1;
//			printf("\40:The internal block num equal %d\n", num);
//			num++;
//		}
//	}
//	getch();
//}
//
//������44��
//��Ŀ��ѧϰʹ��external���÷���
//1.���������
//2.����Դ���룺
//�������� :
//
//#include "stdio.h"
//#include "conio.h"
//int a, b, c;
//void add()
//{
//	int a;
//	a = 3;
//	c = a + b;
//}
//void main()
//{
//	a = b = 4;
//	add();
//	printf("The value of c is equal to %d\n", c);
//	getch();
//}
//
//������45��
//��Ŀ��ѧϰʹ��register��������ķ�����
//1.���������
//2.����Դ���룺
//�������� :

#include "stdio.h"
#include "conio.h"
void main()
{
	register int i;
	int tmp = 0;
	for (i = 1; i <= 100; i++)
		tmp += i;
	printf("The sum is %d\n", tmp);
	getch();
}
