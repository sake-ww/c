#define _CRT_SECURE_NO_WARNINGS 1

//【程序13】
//题目：打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数
//本身。例如：153是一个“水仙花数”，因为153 = 1的三次方＋5的三次方＋3的三次方。
//1.程序分析：利用for循环控制100 - 999个数，每个数分解出个位，十位，百位。
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	int i, j, k, n;
//	printf("'water flower'number is:");
//	for (n = 100; n<1000; n++)
//	{
//		i = n / 100;/*分解出百位*/
//		j = n / 10 % 10;/*分解出十位*/
//		k = n % 10;/*分解出个位*/
//		if (i * 100 + j * 10 + k == i*i*i + j*j*j + k*k*k)
//			printf("%-5d", n);
//	}
//	return 0;
//}

//【程序14】
//题目：将一个正整数分解质因数。例如：输入90, 打印出90 = 233 * 5。
//程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：
//(1)如果这个质数恰等于n，则说明分解质因数的过程已经结束，打印出即可。
//(2)如果n<>k，但n能被k整除，则应打印出k的值，并用n除以k的商, 作为新的正整数你n,
//重复执行第一步。
//(3)如果n不能被k整除，则用k + 1作为k的值, 重复执行第一步。
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	int n, i;
//	printf("\nplease input a number:\n");
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (i = 2; i <= n; i++)
//	while (n != i)
//	{
//		if (n%i == 0)
//		{
//			printf("%d*", i);
//			n = n / i;
//		}
//		else
//			break;
//	}
//	printf("%d", n);
//	return 0;
//}

//【程序15】
//题目：利用条件运算符的嵌套来完成此题：学习成绩 >= 90分的同学用A表示，60 - 89分之间的用B表示，
//60分以下的用C表示。
//1.程序分析：(a>b) ? a : b这是条件运算符的基本例子。
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	int score;
//	char grade;
//	printf("please input a score\n");
//	scanf("%d", &score);
//	grade = score >= 90 ? 'A' : (score >= 60 ? 'B' : 'C');
//	printf("%d belongs to %c", score, grade);
//	return 0;
//}

//【程序16】
//题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
//1.程序分析：利用辗除法。
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	int a, b, num1, num2, temp;
//	printf("please input two numbers:\n");
//	scanf("%d %d", &num1, &num2);
//	if (num1<num2)/*交换两个数，使大数放在num1上*/
//	{
//		temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//	a = num1; b = num2;
//	while (b != 0)/*利用辗除法，直到b为0为止*/
//	{
//		temp = a%b;
//		a = b;
//		b = temp;
//	}
//	printf("gongyueshu:%d\n", a);
//	printf("gongbeishu:%d\n", num1*num2 / a);
//	return 0;
//}
