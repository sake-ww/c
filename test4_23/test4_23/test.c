#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��һ������0-9��Ȼ�󷴹��������
//int main()
//{
//	int a[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//		a[i] = i;
//	for (i = 9; i >= 0; i--)
//		printf("%d ",a[i]);
//	return 0;
//}
//------------------------------------------
//int main()
//{
//	int a, b, sum;
//	a = 12;
//	b = 34;
//	sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int mian()
//{
//	int i, bw, sw, gw;
//	scanf("%d", &i);
//	for (i = 100; i < 1000; i++)
//	{
//		bw = i / 100;
//		sw = i / 10 % 10;
//		gw = i % 10;
//		if (i == pow(bw, 3) + pow(sw, 3) + pow(gw, 3))
//		printf("���ˮ�ɻ���Ϊ��%-3d\n", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h> 
//int main()
//{
//	int i, x, y, z, n;
//	double sum;
//	for (i = 100; i<1000; i++)
//	{
//		x = i % 10;
//		y = i / 10 % 10;
//		z = i / 100;
//		sum = pow(x, 3) + pow(y, 3) + pow(z, 3);
//		if (sum == i)
//		{ 
//			printf("%d\n",i);		
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int g, s, b, num, gw, sw, bw, i = 100, sum;
//	printf("����һ��100-999������:");
//	scanf("%d", &num);
//	for (i = 100; i <= num; i++)
//	{
//		b = i / 100;            //ȡ���İ�λ��
//		s = ((i % 100) / 10);     //ȡʮλ��
//		g = ((i % 100) % 10);     //ȡ��λ��
//		gw = (g*g*g);
//		sw = (s*s*s);
//		bw = (b*b*b);
//		sum = (gw + sw + bw);
//		if (i == sum)             //�ж��Ƿ�Ϊˮ�ɻ���������ǣ����
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 1; j <= 7 - i; j++)
//			printf(" ");
//		for (j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf(" ");
//		for (j = 1; j <= 13 - 2 * i; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}
#include<stdio.h>
#include<math.h>
int mian()
{
	int i, bw, sw, gw;
	double a;
	for (i = 100; i < 1000; i++)
	{
		gw = i % 10;
		sw = i / 10 % 10;
		bw = i / 100;
		a = pow(bw, 3) + pow(sw, 3) + pow(gw, 3);
		if (a == i)
		{
			printf("���ˮ�ɻ���Ϊ��%d\n", i);
	    }
	return 0;
}
//#include<stdio.h>
//#include<math.h> 
//int main()
//{
//	int i, gw, sw, bw, n;
//	double a;
//	for (i = 100; i<1000; i++)
//	{
//		gw = i % 10;
//		sw = i / 10 % 10;
//		bw = i / 100;
//		a = pow(gw, 3) + pow(sw, 3) + pow(bw, 3);
//		if (a == i)
//		{
//			printf("���ˮ�ɻ���Ϊ��%d\n", i);
//		}
//	}
//	return 0;
//}