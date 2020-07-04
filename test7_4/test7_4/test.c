#define _CRT_SECURE_NO_WARNINGS 1
//
//【程序37】
//题目：对10个数进行排序
//1.程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换，
//下次类推，即用第二个元素与后8个进行比较，并进行交换。
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	int a[10], i, j, t;
//	printf("请输入10个数：");
//	for (i = 0; i<10; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i<9; i++)
//	for (j = 0; j<9 - i; j++)
//	if (a[j]>a[j + 1])
//	{
//		t = a[j];
//		a[j] = a[j + 1];
//		a[j + 1] = t;
//	}
//	for (i = 0; i<10; i++)
//		printf("%d ", a[i]);
//	return 0;
//}
//
//【程序38】
//题目：求一个3 * 3矩阵对角线元素之和
//1.程序分析：利用双重for循环控制输入二维数组，再将a累加后输出。
//2.程序源代码：
//代码如下 :
//
//#include "stdio.h"
//#include "conio.h"
///* 如果使用的是TC系列编译器则可能需要添加下句 */
//static void dummyfloat(float *x){ float y; dummyfloat(&y); }
//main()
//{
//	float a[3][3], sum = 0;
//	int i, j;
//	printf("please input rectangle element:\n");
//	for (i = 0; i<3; i++)
//	for (j = 0; j<3; j++)
//		scanf("%f", &a[j]);
//	for (i = 0; i<3; i++)
//		sum = sum + a;
//	printf("duijiaoxian he is %6.2f", sum);
//	getch();
//}
//
//【程序39】
//题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
//
//程序分析：首先判断此数是否大于最后一个数，然后再考虑插入中间的数的情况，插入后
//此元素之后的数，依次后移一个位置。
//2.程序源代码：
//代码如下 :
#include<stdio.h>
int main()
{
	int a[11] = { 1, 4, 6, 9, 13, 16, 19, 28, 40, 100 }, i, j, t, d;
	scanf("%d", &a[10]);
	if (a[0]>a[9])
		d = 1;
	else
		d = 0;
	for (i = 0; i<10; i++)
	for (j = 0; j<10 - i; j++)
	if (a[j]>a[j + 1])
	{
		t = a[j];
		a[j] = a[j + 1];
		a[j + 1] = t;
	}
	if (d == 0)
	for (i = 0; i<11; i++)
		printf("%d ", a[i]);
	else
	for (i = 10; i >= 0; i--)
		printf("%d ", a[i]);
	return 0;
}