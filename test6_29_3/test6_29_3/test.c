#define _CRT_SECURE_NO_WARNINGS 1


//
//������21��
//��Ŀ�����ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ��
//�ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ��
//��һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�
//1.�����������ȡ����˼ά�ķ������Ӻ���ǰ�ƶϡ�
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	int day, x1, x2;
//	day = 9;
//	x2 = 1;
//	while (day>0)
//	{
//		x1 = (x2 + 1) * 2;/*��һ����������ǵ�2����������1���2��*/
//		x2 = x1;
//		day--;
//	}
//	printf("the total is %d\n", x1);
//	return 0;
//}
//
//������22��
//��Ŀ������ƹ����ӽ��б������������ˡ��׶�Ϊa, b, c���ˣ��Ҷ�Ϊx, y, z���ˡ��ѳ�ǩ����
//�����������������Ա����������������a˵������x�ȣ�c˵������x, z�ȣ��������ҳ�
//�������ֵ�������
//1.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	char i, j, k;/*i��a�Ķ��֣�j��b�Ķ��֣�k��c�Ķ���*/
//	for (i = 'x'; i <= 'z'; i++)
//	for (j = 'x'; j <= 'z'; j++)
//	{
//		if (i != j)
//		for (k = 'x'; k <= 'z'; k++)
//		{
//			if (i != k&&j != k)
//			{
//				if (i != 'x'&&k != 'x'&&k != 'z')
//					printf("order is a--%c\tb--%c\tc--%c\n", i, j, k);
//			}
//		}
//	}
//	return 0;
//}
//
//������23��
//��Ŀ����ӡ������ͼ�������Σ�
//
//*
//***
//*****
//*******
//*****
//***
//*
//1.����������Ȱ�ͼ�ηֳ���������������ǰ����һ�����ɣ�������һ�����ɣ�����˫��
//forѭ������һ������У��ڶ�������С�
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	for (i = 0; i <= 3; i++)
//	{
//		for (j = 0; j <= 2 - i; j++)
//			printf(" ");
//		for (k = 0; k <= 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf(" ");
//		for (k = 0; k <= 4 - 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}
//
//������24��
//��Ŀ����һ�������У�2 / 1��3 / 2��5 / 3��8 / 5��13 / 8��21 / 13�����������е�ǰ20��֮�͡�
//1.�����������ץס�������ĸ�ı仯���ɡ�
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	int n, t, number = 20;
//	float a = 2, b = 1, s = 0;
//	for (n = 1; n <= number; n++)
//	{
//		s = s + a / b;
//		t = a; a = a + b; b = t;/*�ⲿ���ǳ���Ĺؼ�������߲²�t������*/
//	}
//	printf("sum is %9.6f\n", s);
//	return 0;
//}
//
//������25��
//��Ŀ����1 + 2!+ 3!+ �� + 19!�ĺ�
//1.����������˳���ֻ�ǰ��ۼӱ�����۳ˡ�
//2.����Դ���룺
//�������� :
//
//#include<stdio.h>
//int main()
//{
//	long long s = 0, n, t = 1;
//	for (n = 1; n <= 19; n++)
//	{
//		t *= n;
//		s += t;
//	}
//	printf("1+2!+3!...+19!=%lld\n", s);
//	return 0;
//}