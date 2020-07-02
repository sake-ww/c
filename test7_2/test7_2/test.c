#define _CRT_SECURE_NO_WARNINGS 1

//【程序34】
//题目：练习函数调用
//
//程序分析：
//2.程序源代码：
//代码如下 :
//#include<stdio.h>
//void hello_world(void)
//{
//	printf("Hello, world!\n");
//}
//void three_hellos(void)
//{
//	int counter;
//	for (counter = 1; counter <= 3; counter++)
//		hello_world();/*调用此函数*/
//}
//int main()
//{
//	three_hellos();/*调用此函数*/
//	return 0;
//}
//
//【程序35】
//题目：文本颜色设置
//1.程序分析：
//2.程序源代码：
//代码如下 :
//
//#include "stdio.h"
//#include "conio.h"
//void main(void)
//{
//	int color;
//	for (color = 1; color < 16; color++)
//	{
//		textcolor(color);/*设置文本颜色*/
//		cprintf("This is color %d\r\n", color);
//	}
//	textcolor(128 + 15);
//	cprintf("This is blinking\r\n");
//	getch();
//}
//
//【程序36】
//题目：求100之内的素数　　　
//1.程序分析：
//2.程序源代码：
//代码如下 :

#include<stdio.h>
#include<math.h>
#define N 101
int main()
{
	int i, j, line, a[N], k;
	for (k = 2; k<N; k++)
	{
		for (i = 2; i <= sqrt(k); i++)
		{
			if (k%i == 0)
				break;
		}
		if (i == (int)sqrt(k) + 1)
			printf("%d ", k);
	}
	return 0;
}
