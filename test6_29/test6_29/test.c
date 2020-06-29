#define _CRT_SECURE_NO_WARNINGS 1


//【程序21】
//题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
//的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
//1.程序分析：采取逆向思维的方法，从后往前推断。
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	int day, x1, x2;
//	day = 9;
//	x2 = 1;
//	while (day>0)
//	{
//		x1 = (x2 + 1) * 2;/*第一天的桃子数是第2天桃子数加1后的2倍*/
//		x2 = x1;
//		day--;
//	}
//	printf("the total is %d\n", x1);
//	return 0;
//}
//
//【程序22】
//题目：两个乒乓球队进行比赛，各出三人。甲队为a, b, c三人，乙队为x, y, z三人。已抽签决定
//比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x, z比，请编程序找出
//三队赛手的名单。
//1.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	char i, j, k;/*i是a的对手，j是b的对手，k是c的对手*/
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
//\
//【程序23】
//题目：打印出如下图案（菱形）
//
//*
//***
//*****
//*******
//*****
//***
//*
//
//1.程序分析：先把图形分成两部分来看待，前四行一个规律，后三行一个规律，利用双重
//for循环，第一层控制行，第二层控制列。
//2.程序源代码：
//代码如下 :
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
//【程序24】
//题目：有一分数序列：2 / 1，3 / 2，5 / 3，8 / 5，13 / 8，21 / 13…求出这个数列的前20项之和。
//1.程序分析：请抓住分子与分母的变化规律。
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	int n, t, number = 20;
//	float a = 2, b = 1, s = 0;
//	for (n = 1; n <= number; n++)
//	{
//		s = s + a / b;
//		t = a; a = a + b; b = t;/*这部分是程序的关键，请读者猜猜t的作用*/
//	}
//	printf("sum is %9.6f\n", s);
//	return 0;
//}


