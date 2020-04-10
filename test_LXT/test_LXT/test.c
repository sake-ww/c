#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求平方根
//#include <math.h>
//int main()
//{
//	int a,b;
//	printf("请输入一个一千以内的数字：");
//	scanf("%d", &a);
//	if (a < 1000 && a > 0)
//	{
//		b = sqrt(a);
//		printf("结果为：%d\n", b);
//	}
//	else
//		printf("输入错误\n");
//	return 0;
//}
//求阶乘
//int main()
//{
//	int a,b;
//	int sum = 1;
//	printf("请输入：");
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		sum = sum * b;
//	}
//	printf("输出：%d\n", sum);
//	return 0;
//}

////求最大公约数和最小公倍数
//int main()
//{
//	int m, n, a, b;
//	printf("输入两个正整数：");
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
//	printf("最大公约数为：%d\n", a);
//	printf("最小公倍数为：%d\n", (m*n) / a); 
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	printf("请输入高和宽:");
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