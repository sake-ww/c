#define _CRT_SECURE_NO_WARNINGS 1


//【程序7】
//题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
//1.程序分析：字符共有256个。不同字符，图形不一样。　　　　　　
//2.程序源代码：
//代码如下 :
//#include <stdio.h>
//int main()
//{
//	char a = 176, b = 219;
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", a, a, b, a, a);
//	printf("%c%c%c%c%c\n", a, b, a, b, a);
//	printf("%c%c%c%c%c\n", b, a, a, a, b);
//	return 0;
//}
//【程序8】
//题目：输出9 * 9口诀。
//1.程序分析：分行与列考虑，共9行9列，i控制行，j控制列。
//2.程序源代码：
//代码如下 :
//
//#include <stdio.h>
//int main()
//{
//	int i, j, result;
//	printf("\n");
//	for (i = 1; i<10; i++)
//	{
//		for (j = 1; j<10; j++)
//		{
//			result = i*j;
//			printf("%d*%d=%-3d", i, j, result); /*-3d表示左对齐，占3位*/
//		}
//		printf("\n"); /*每一行后换行*/
//	}
//	return 0;
//}

//【程序9】
//题目：要求输出国际象棋棋盘。
//1.程序分析：用i控制行，j来控制列，根据i + j的和的变化来控制输出黑方格，还是白方格。
//2.程序源代码：
//代码如下 :
//
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 0; i<8; i++)
//	{
//		for (j = 0; j<8; j++)
//		if ((i + j) % 2 == 0)
//			printf("%c%c", 219, 219);
//		else
//			printf("  ");
//		printf("\n");
//	}
//	return 0;
//}

//【程序10】
//题目：打印楼梯，同时在楼梯上方打印两个笑脸。
//1.程序分析：用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数。
//2.程序源代码：
//代码如下 :
//
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	printf("\1\1\n"); /*输出两个笑脸*/
//	for (i = 1; i<11; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%c%c", 219, 219);
//		printf("\n");
//	}
//	return 0;
//}

//【程序11】
//题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月
//后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
//1.程序分析：　兔子的规律为数列1, 1, 2, 3, 5, 8, 13, 21…
//2.程序源代码：
//代码如下 :
//
//#include <stdio.h>
//int main()
//{
//	long f1, f2;
//	int i;
//	f1 = f2 = 1;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%12ld %12ld", f1, f2);
//		if (i % 2 == 0) printf("\n"); /*控制输出，每行四个*/
//		f1 = f1 + f2; /*前两个月加起来赋值给第三个月*/
//		f2 = f1 + f2; /*前两个月加起来赋值给第三个月*/
//	}
//	return 0;
//}

//【程序12】
//题目：判断101 - 200之间有多少个素数，并输出所有素数。
//1.程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，
//则表明此数不是素数，反之是素数。
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int m, i, k, h = 0, leap = 1;
//	for (m = 101; m <= 200; m++)
//	{
//		k = sqrt(m + 1);
//		for (i = 2; i <= k; i++)
//		if (m%i == 0)
//		{
//			leap = 0;
//			break;
//		}
//		if (leap)
//		{
//			printf("%-4d", m);
//			h++;
//			if (h % 10 == 0)
//				printf("\n");
//		}
//		leap = 1;
//	}
//	printf("\nThe total is %d", h);
//	return 0;
//}
