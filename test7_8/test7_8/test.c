#define _CRT_SECURE_NO_WARNINGS 1



//【程序43】
//题目：学习使用static的另一用法。　　　
//1.程序分析：
//2.程序源代码：
//代码如下 :
//
//#include "stdio.h"
//#include "conio.h"
//main()
//{
//	int i, num;
//	num = 2;
//	for (i = 0; i<3; i++)
//	{
//		printf("\40: The num equal %d \n", num);
//		num++;
//		{
//			static int num = 1;
//			printf("\40:The internal block num equal %d\n", num);
//			num++;
//		}
//	}
//	getch();
//}
//
//【程序44】
//题目：学习使用external的用法。
//1.程序分析：
//2.程序源代码：
//代码如下 :
//
//#include "stdio.h"
//#include "conio.h"
//int a, b, c;
//void add()
//{
//	int a;
//	a = 3;
//	c = a + b;
//}
//void main()
//{
//	a = b = 4;
//	add();
//	printf("The value of c is equal to %d\n", c);
//	getch();
//}
//
//【程序45】
//题目：学习使用register定义变量的方法。
//1.程序分析：
//2.程序源代码：
//代码如下 :

#include "stdio.h"
#include "conio.h"
void main()
{
	register int i;
	int tmp = 0;
	for (i = 1; i <= 100; i++)
		tmp += i;
	printf("The sum is %d\n", tmp);
	getch();
}
