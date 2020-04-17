#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %-2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int a,i;
//	scanf("%d", &a);
//	for (i = 2; i < a; i++)
//	{
//		if (a&i != 0)
//			continue;
//		else if (a%i == 0)
//		{
//            printf("shi");
//			break;
//		}
//			
//		
//	}
//	printf("bushi");
//	return 0;
//}


//斐波那契
//递归
//#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("输入：\n");
//	scanf("%d", &n);
//
//	printf("第%d个斐波那契数为%d\n", n, fib(n));
//	return 0;
//}
//非递归
//#include<stdio.h>
//int fib(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	for (i = 0; i<n - 2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	printf("输入：\n");
//	scanf("%d", &n);
//	printf("第%d个斐波那契数为%d\n", n, fib(n));
//	return 0;
//}










