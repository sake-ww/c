#define _CRT_SECURE_NO_WARNINGS 1
//
//【程序40】
//题目：将一个数组逆序输出。
//1.程序分析：用第一个与最后一个交换。
//2.程序源代码：
//代码如下 :
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
//【程序41】
//题目：学习static定义静态变量的用法　　　
//1.程序分析：
//2.程序源代码：
//代码如下 :
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
//【程序42】
//题目：学习使用auto定义变量的用法
//1.程序分析：　　　　　　
//2.程序源代码：
//代码如下 :
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
//【程序43】
//题目：学习使用static的另一用法。　　　
//1.程序分析：
//2.程序源代码：
//代码如下 :
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
