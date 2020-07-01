#define _CRT_SECURE_NO_WARNINGS 1


//【程序30】
//题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。　　　
//1.程序分析：同29例
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	long ge, shi, qian, wan, x;
//	scanf("%ld", &x);
//	wan = x / 10000;
//	qian = x % 10000 / 1000;
//	shi = x % 100 / 10;
//	ge = x % 10;
//	if (ge == wan&&shi == qian)/*个位等于万位并且十位等于千位*/
//		printf("this number is a huiwen\n");
//	else
//		printf("this number is not a huiwen\n");
//	return 0;
//}
//
//【程序31】
//题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续
//判断第二个字母。
//1.程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。
//2.程序源代码：
//代码如下 :
//
//#include<stdio.h>
//int main()
//{
//	char letter;
//	printf("please input the first letter of someday\n");
//	while ((letter = getchar()) != 'Y')/*当所按字母为Y时才结束*/
//	{
//		switch (letter)
//		{
//		case 'S':printf("please input second letter\n");
//			if ((letter = getchar()) == 'a')
//				printf("saturday\n");
//			else if ((letter = getchar()) == 'u')
//				printf("sunday\n");
//			else
//				printf("data error\n");
//			break;
//		case 'F':printf("friday\n"); break;
//		case 'M':printf("monday\n"); break;
//		case 'T':printf("please input second letter\n");
//			if ((letter = getchar()) == 'u')
//				printf("tuesday\n");
//			else if ((letter = getchar()) == 'h')
//				printf("thursday\n");
//			else
//				printf("data error\n");
//			break;
//		case 'W':printf("wednesday\n"); break;
//		default: printf("data error\n");
//		}
//	}
//	return 0;
//}
//
//【程序32】
//题目：Press any key to change color, do you want to try it.Please hurry up!
//1.程序分析：　　　　　　　　　　　　
//2.程序源代码：
//代码如下 :
//
//#include "conio.h"
//#include "stdio.h"
//void main(void)
//{
//	int color;
//	for (color = 0; color < 8; color++)
//	{
//		textbackground(color);/*设置文本的背景颜色*/
//		cprintf("This is color %d\r\n", color);
//		cprintf("Press any key to continue\r\n");
//		getch();/*输入字符看不见*/
//	}
//}
//
//【程序33】
//题目：学习gotoxy()与clrscr()函数　　　
//1.程序分析：
//2.程序源代码：
//代码如下 :
//
//#include "conio.h"
//#include "stdio.h"
//void main(void)
//{
//	clrscr();/*清屏函数*/
//	textbackground(2);
//	gotoxy(1, 5);/*定位函数*/
//	cprintf("Output at row 5 column 1\n");
//	textbackground(3);
//	gotoxy(20, 10);
//	cprintf("Output at row 10 column 20\n");
//	getch();
//}
