#define _CRT_SECURE_NO_WARNINGS 1
//getchar  putchar
#include<stdio.h>

//    while循环
//简单 while循环  ：打印一到十
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//因为break所以直接跳出循环，所以打印：1 2 3 4 
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//continue
//continue 代码实例1
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
// 1 2 3 4因为continue，所以continue后直接到while判断语句中，造成死循环。
////continue 代码实例2
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//2 3 4 6 7 8 9 

//#include <stdio.h>
//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}
//10
//#include <stdio.h>
//int main()
//{
//	int i = 10;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}
//10

//#include <stdio.h>
//int main()
//{
//	int i = 10;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}
//10

