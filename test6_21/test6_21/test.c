#define _CRT_SECURE_NO_WARNINGS 1

题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
1.程序分析：在10万以内判断，先将该数加上100后再开方，再将该数加上268后再开方，如果开方后
的结果满足如下条件，即是结果。请看具体分析：
2.程序源代码：
#include "math.h"
#include "stdio.h"
#include "conio.h"
main()
{
	long int i, x, y, z;
	for (i = 1; i<100000; i++)
	{
		x = sqrt(i + 100); /*x为加上100后开方后的结果*/
		y = sqrt(i + 268); /*y为再加上168后开方后的结果*/
		if (x*x == i + 100 && y*y == i + 268) /*如果一个数的平方根的平方等于该数，这说明此数是完全平方数*/
			printf("/n%ld/n", i);
	}
	getch();
}
题目：输入某年某月某日，判断这一天是这一年的第几天？
1.程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊
情况，闰年且输入月份大于3时需考虑多加一天。
2.程序源代码：
#include "stdio.h"
#include "conio.h"
main()
{
	int day, month, year, sum, leap;
	printf("/nplease input year,month,day/n");
	scanf("%d,%d,%d", &year, &month, &day);
	switch (month) /*先计算某月以前月份的总天数*/
	{
	case 1:sum = 0; break;
	case 2:sum = 31; break;
	case 3:sum = 59; break;
	case 4:sum = 90; break;
	case 5:sum = 120; break;
	case 6:sum = 151; break;
	case 7:sum = 181; break;
	case 8:sum = 212; break;
	case 9:sum = 243; break;
	case 10:sum = 273; break;
	case 11:sum = 304; break;
	case 12:sum = 334; break;
	default:printf("data error"); break;
	}
	sum = sum + day; /*再加上某天的天数*/
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) /*判断是不是闰年*/
		leap = 1;
	else
		leap = 0;
	if (leap == 1 && month>2) /*如果是闰年且月份大于2,总天数应该加一天*/
		sum++;
	printf("It is the %dth day.", sum);
	getch();
}
