#define _CRT_SECURE_NO_WARNINGS 1

//【程序17】
//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
//1.程序分析：利用while语句, 条件为输入的字符不为’\n’.
//
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	char c;
//	int letters = 0, space = 0, digit = 0, others = 0;
//	printf("please input some characters\n");
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
//			letters++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0'&&c <= '9')
//			digit++;
//		else
//			others++;
//	}
//	printf("all in all:char=%d space=%d digit=%d others=%d\n", letters, space, digit, others);
//	return 0;
//}
//
//【程序18】
//题目：求s = a + aa + aaa + aaaa + aa…a的值，其中a是一个数字。例如2 + 22 + 222 + 2222 + 22222(此时
//共有5个数相加)，几个数相加有键盘控制。
//1.程序分析：关键是计算出每一项的值。
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	int a, n, count = 1;
//	long int sn = 0, tn = 0;
//	printf("please input a and n\n");
//	scanf("%d %d", &a, &n);
//	printf("a=%d,n=%d\n", a, n);
//	while (count <= n)
//	{
//		tn = tn + a;
//		sn = sn + tn;
//		a = a * 10;
//		++count;
//	}
//	printf("a+aa+...=%ld\n", sn);
//	return 0;
//}
//
//【程序19】
//题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6 = 1＋2＋3.编程
//找出1000以内的所有完数。
//
//程序分析：请参照程序<–上页程序14.
//2.程序源代码：
//代码如下 :
//#include<stdio.h>
//int main()
//{
//	static int k[10];
//	int i, j, n, s;
//	for (j = 2; j<1000; j++)
//	{
//		n = -1;
//		s = j;
//		for (i = 1; i<j; i++)
//		{
//			if ((j%i) == 0)
//			{
//				n++;
//				s = s - i;
//				k[n] = i;
//			}
//		}
//		if (s == 0)
//		{
//			printf("%d is a wanshu", j);
//			for (i = 0; i<n; i++)
//				printf("%d,", k[i]);
//			printf("%d\n", k[n]);
//		}
//	}
//	return 0;
//}
//
//【程序20】
//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在
//第10次落地时，共经过多少米？第10次反弹多高？
//1.程序分析：见下面注释
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	float sn = 100.0, hn = sn / 2;
//	int n;
//	for (n = 2; n <= 10; n++)
//	{
//		sn = sn + 2 * hn;/*第n次落地时共经过的米数*/
//		hn = hn / 2; /*第n次反跳高度*/
//	}
//	printf("the total of road is %f\n", sn);
//	printf("the tenth is %f meter\n", hn);
//	return 0;
//}

