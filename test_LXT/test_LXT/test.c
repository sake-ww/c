#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ƽ����
//#include <math.h>
//int main()
//{
//	int a,b;
//	printf("������һ��һǧ���ڵ����֣�");
//	scanf("%d", &a);
//	if (a < 1000 && a > 0)
//	{
//		b = sqrt(a);
//		printf("���Ϊ��%d\n", b);
//	}
//	else
//		printf("�������\n");
//	return 0;
//}
//��׳�
//int main()
//{
//	int a,b;
//	int sum = 1;
//	printf("�����룺");
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		sum = sum * b;
//	}
//	printf("�����%d\n", sum);
//	return 0;
//}

////�����Լ������С������
//int main()
//{
//	int m, n, a, b;
//	printf("����������������");
//	scanf("%d%d", &m, &n);
//	if (m>n)
//		b = n;
//	else
//		b = m;
//	for (int i = b; i>0; i--)
//	{
//		a = i;
//		if (m%i == 0 && n%i == 0)
//			break;
//	}
//	printf("���Լ��Ϊ��%d\n", a);
//	printf("��С������Ϊ��%d\n", (m*n) / a); 
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	printf("������ߺͿ�:");
//	scanf("%d %d", &c, &d);
//	for (a = 0; a < c; a++)
//	{
//		for (b = 0; b < d; b++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int m, n, a, b, ys, bs;
	
	scanf("%d %d", &m, &n);

	
	a = m;
	b = n;
	while (b != 0)
	{
		ys = a%b;
		a = b;
		b = ys;
	}
	bs = m*n / a;
	printf("%d %d", &a, &bs);
	return 0;
}
//do
//{
//	scanf("%d %d", &m, &n);
//
//} while (m < 0 && n < 0);