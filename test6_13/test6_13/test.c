#define _CRT_SECURE_NO_WARNINGS 1
//【程序1】
//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。
//2.程序源代码：
//
//代码如下 :

#include"stdio.h"
#include "conio.h"
main()
{
	int i, j, k;
	printf("\n");
	for (i = 1; i<5; i++) /*以下为三重循环*/
	for (j = 1; j<5; j++)
	for (k = 1; k<5; k++)
	{
		if (i != k&&i != j&&j != k) /*确保i、j、k三位互不相同*/
			printf("%d,%d,%d\n", i, j, k);
	}
	getch();
}

