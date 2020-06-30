#define _CRT_SECURE_NO_WARNINGS 1
//
//【程序26】
//题目：利用递归方法求5!。
//1.程序分析：递归公式：fn = fn_1 * 4!
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	int i;
//	int fact(int j);
//	for (i = 1; i <= 5; i++)
//		printf("%d!=%d\n", i, fact(i));
//	return 0;
//}
//int fact(int j)
//{
//	int sum;
//	if (j == 0)
//		sum = 1;
//	else
//		sum = j*fact(j - 1);
//	return sum;
//}
//
//【程序27】
//题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
//1.程序分析：
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	int i = 5;
//	void palin(int n);
//	palin(i);
//	printf("\n");
//	return 0;
//}
//void palin(int n)
//{
//	char next;
//	if (n <= 1)
//	{
//		next = getchar();
//		printf("\n\0:");
//		putchar(next);
//	}
//	else
//	{
//		next = getchar();
//		palin(n - 1);
//		putchar(next);
//	}
//}
//
//【程序28】
//题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第
//3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后
//问第一个人，他说是10岁。请问第五个人多大？
//1.程序分析：利用递归的方法，递归分为回推和递推两个阶段。要想知道第五个人岁数，需知道
//第四人的岁数，依次类推，推到第一人（10岁），再往回推。
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//age(int n)
//{
//	int c;
//	if (n == 1) c = 10;
//	else c = age(n - 1) + 2;
//	return(c);
//}
//int main()
//{
//	printf("%d", age(5));
//	return 0;
//}
//
//【程序29】
//题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
//
//程序分析：学会分解出每一位数，如下解释：(这里是一种简单的算法，师专数002班赵鑫提供)
//2.程序源代码：
//代码如下 :
//#include<stdio.h>
//int main()
//{
//	long a, b, c, d, e, x;
//	scanf("%ld", &x);
//	a = x / 10000;/*分解出万位*/
//	b = x % 10000 / 1000;/*分解出千位*/
//	c = x % 1000 / 100;/*分解出百位*/
//	d = x % 100 / 10;/*分解出十位*/
//	e = x % 10;/*分解出个位*/
//	if (a != 0) printf("there are 5, %ld %ld %ld %ld %ld\n", e, d, c, b, a);
//	else if (b != 0) printf("there are 4, %ld %ld %ld %ld\n", e, d, c, b);
//	else if (c != 0) printf(" there are 3,%ld %ld %ld\n", e, d, c);
//	else if (d != 0) printf("there are 2, %ld %ld\n", e, d);
//	else if (e != 0) printf(" there are 1,%ld\n", e);
//	return 0;
//}
