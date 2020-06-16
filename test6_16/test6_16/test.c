#define _CRT_SECURE_NO_WARNINGS 1
题目：输入某年某月某日，判断这一天是这一年的第几天？
1.程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。
2.程序源代码：

代码如下 :

#include"stdio.h"
#include "conio.h"
main()
{
	int day, month, year, sum, leap;
	printf("\nplease inputyear,month,day\n");
	scanf("%d,%d,%d", &year, &month, &day);
	switch (month) /*先计算某月以前月份的总天数*/
	{
	case1:sum = 0; break;
	case2:sum = 31; break;
	case3:sum = 59; break;
	case4:sum = 90; break;
	case5:sum = 120; break;
	case6:sum = 151; break;
	case7:sum = 181; break;
	case8:sum = 212; break;
	case9:sum = 243; break;
	case10:sum = 273; break;
	case11:sum = 304; break;
	case12:sum = 334; break;
	default:printf("dataerror"); break;
	}
	sum = sum + day; /*再加上某天的天数*/
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))/*判断是不是闰年*/
		leap = 1;
	else
		leap = 0;
	if (leap == 1 && month>2) /*如果是闰年且月份大于2,总天数应该加一天*/
		sum++;
	printf("It is the %dth day.", sum);
	getch();
}
