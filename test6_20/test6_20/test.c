#define _CRT_SECURE_NO_WARNINGS 1


//【程序9】
//题目：要求输出国际象棋棋盘。
//1.程序分析：用i控制行，j来控制列，根据i + j的和的变化来控制输出黑方格，还是白方格。
//2.程序源代码：
//
//代码如下 :

//#include"stdio.h"
//#include "conio.h"
//main()
//{
//	int i, j;
//	for (i = 0; i<8; i++)
//	{
//		for (j = 0; j<8; j++)
//		if ((i + j) % 2 == 0)
//			printf("%c%c", 219, 219);
//		else
//			printf("  ");
//		printf("\n");
//	}
//	getch();
//}
//
//【程序10】
//题目：打印楼梯，同时在楼梯上方打印两个笑脸。 
//1.程序分析：用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数。
//2.程序源代码：
//
//代码如下 :

#include"stdio.h"
#include "conio.h"
main()
{
	int i, j;
	printf("\1\1\n"); /*输出两个笑脸*/
	for (i = 1; i<11; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%c%c", 219, 219);
		printf("\n");
	}
	getch();
}
