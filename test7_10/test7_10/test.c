#define _CRT_SECURE_NO_WARNINGS 1


//【程序47】
//题目：宏#define命令练习(2)
//1.程序分析：　　　　　　　　　　　　
//2.程序源代码：
//代码如下 :
//
//#include "stdio.h"
//#include "conio.h"
///*宏定义中允许包含两道衣裳命令的情形，此时必须在最右边加上"\"*/
//#define exchange(a,b) { \
//	int t; \
//	t = a; \
//	a = b; \
//	b = t; \
//}
//void main(void)
//{
//	int x = 10;
//	int y = 20;
//	printf("x=%d; y=%d\n", x, y);
//	exchange(x, y);
//	printf("x=%d; y=%d\n", x, y);
//	getch();
//}
//
//【程序48】
//题目：宏#define命令练习(3)
//1.程序分析：
//2.程序源代码：
//代码如下 :
//
//#define LAG >
//#define SMA <
//#define EQ ==
//#include "stdio.h"
//#include "conio.h"
//void main()
//{
//	int i = 10;
//	int j = 20;
//	if (i LAG j)
//		printf("\40: %d larger than %d \n", i, j);
//	else if (i EQ j)
//		printf("\40: %d equal to %d \n", i, j);
//	else if (i SMA j)
//		printf("\40:%d smaller than %d \n", i, j);
//	else
//		printf("\40: No such value.\n");
//	getch();
//}
//
//【程序49】
//题目：#if #ifdef和#ifndef的综合应用。
//
//程序分析：
//2.程序源代码：
//代码如下 :
//#include "stdio.h"
//#include "conio.h"
//#define MAX
//#define MAXIMUM(x,y) (x>y)?x:y
//#define MINIMUM(x,y) (x>y)?y:x
//void main()
//{
//	int a = 10, b = 20;
//#ifdef MAX
//	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
//#else
//	printf("\40: The lower one is %d\n", MINIMUM(a, b));
//#endif
//#ifndef MIN
//	printf("\40: The lower one is %d\n", MINIMUM(a, b));
//#else
//	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
//#endif
//#undef MAX
//#ifdef MAX
//	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
//#else
//	printf("\40: The lower one is %d\n", MINIMUM(a, b));
//#endif
//#define MIN
//#ifndef MIN
//	printf("\40: The lower one is %d\n", MINIMUM(a, b));
//#else
//	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
//#endif
//	getch();
//}
