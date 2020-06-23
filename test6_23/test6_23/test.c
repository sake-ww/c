#define _CRT_SECURE_NO_WARNINGS 1
//【程序1】
//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去
//掉不满足条件的排列。

//2.程序源代码：

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



//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//	long int i, x, y, z;
//	for (i = 0; i < 100000; i++)
//	{
//		x = sqrt(i + 100);
//		y = sqrt(i + 268);
//		if (x*x == (i + 100) && y*y == (i + 268))	//完全平方数：自己*自己=数的平方形式 
//		{
//			printf("\n%ld\n", i);
//		}
//	}
//	return 0;
//}
//【程序4】
//题目：输入某年某月某日，判断这一天是这一年的第几天？
//1.程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊
//情况，闰年且输入月份大于3时需考虑多加一天。
//2.程序源代码：



//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//	int year, month, day, sum, leap;
//	printf("输入格式为：年-月-日\n");
//	scanf("%d-%d-%d", &year, &month, &day);
//	switch (month)
//	{
//	case 1:
//		sum = 0;
//		break;
//	case 2:
//		sum = 31;
//		break;
//	case 3:
//		sum = 59;
//		break;
//	case 4:
//		sum = 90;
//		break;
//	case 5:
//		sum = 120;
//		break;
//	case 6:
//		sum = 151;
//		break;
//	case 7:
//		sum = 181;
//		break;
//	case 8:
//		sum = 212;
//		break;
//	case 9:
//		sum = 243;
//		break;
//	case 10:
//		sum = 273;
//		break;
//	case 11:
//		sum = 304;
//		break;
//	case 12:
//		sum = 334;
//		break;
//	}
//	sum += day;
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//		leap = 1;
//	else
//		leap = 0;
//	if (leap = 1 && month > 2)
//		sum++;
//	printf("这一天是这一年的第%d天", sum);
//	return 0;
//}
//【程序5】
//题目：输入三个整数x, y, z，请把这三个数由小到大输出。
//1.程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，
//然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。
//2.程序源代码：



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	int x, y, z, t;
	scanf("%d,%d,%d", &x, &y, &z);
	if (x > y)
	{
		t = x;
		x = y;
		y = t;
	}
	if (x > z)
	{
		t = x;
		x = z;
		z = t;
	}
	if (y > z)
	{
		t = y;
		y = z;
		z = t;
	}
	printf("\n%d,%d,%d\n", x, y, z);
	return 0;
}
