#define _CRT_SECURE_NO_WARNINGS 1
//
//【程序】
//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去
//掉不满足条件的排列。
//
//
//
//2.程序源代码：
//
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int i, j, k;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			for (k = 1; k < 5; k++)
//			{
//				if (i != j && i != k && j != k)
//				{
//					printf("%d%d%d\n", i, j, k);
//				}
//			}
//		}
//	}
//
//	return 0;
//}
//【程序2】
//题目：企业发放的奖金根据利润提成。利润(i)低于或等于10万元时，奖金可提10%；利润高
//于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提
//成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于
//40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于
//100万元时，超过100万元的部分按1%提成，从键盘输入当月利润i，求应发放奖金总数？
//1.程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。　　　　　　
//2.程序源代码：
//
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	long int i;
//	int bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
//	scanf("%ld", &i);
//	bonus1 = 100000 * 0.1; bonus2 = bonus1 + 100000 * 0.75;
//	bonus4 = bonus2 + 200000 * 0.5;
//	bonus6 = bonus4 + 200000 * 0.3;
//	bonus10 = bonus6 + 400000 * 0.15;
//	if (i <= 100000)
//		bonus = i*0.1;
//	else if (i <= 200000)
//		bonus = bonus1 + (i - 100000)*0.075;
//	else if (i <= 400000)
//		bonus = bonus2 + (i - 200000)*0.05;
//	else if (i <= 600000)
//		bonus = bonus4 + (i - 400000)*0.03;
//	else if (i <= 1000000)
//		bonus = bonus6 + (i - 600000)*0.015;
//	else
//		bonus = bonus10 + (i - 1000000)*0.01;
//	printf("bonus=%d", bonus);
//
//	return 0;
//}
//【程序3】
//题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//1.程序分析：在10万以内判断，先将该数加上100后再开方，再将该数加上268后再开方，如果开方后
//的结果满足如下条件，即是结果。请看具体分析：
//2.程序源代码：

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	long int i, x, y, z;
	for (i = 0; i < 100000; i++)
	{
		x = sqrt(i + 100);
		y = sqrt(i + 268);
		if (x*x == (i + 100) && y*y == (i + 268))	//完全平方数：自己*自己=数的平方形式 
		{
			printf("\n%ld\n", i);
		}
	}
	return 0;
}
