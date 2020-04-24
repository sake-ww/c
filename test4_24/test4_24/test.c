#define _CRT_SECURE_NO_WARNINGS 1
//剑指offer-面试题3-二维数组中的查找
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
#include<stdio.h>

//1.挨个查找---时间复杂度高
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int a, b, i, j;
	//printf("请输入你需要查找的数字：");
	//scanf("%d", &a);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			b = arr[i][j];
//			if (b == a)
//				printf("找到了，坐标为[%d,%d]", i, j);
//		}
//	}
//	return 0;
//}
//-----------------------------------------------------------------------
#include<stdio.h>
//只判断是否找到，不返回坐标位置
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x<=row-1 && y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 7;
//	//返回型参数
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//判断是否找到，并返回坐标位置
//int FindNum(int arr[3][3], int k, int *px, int*py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, {7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	//返回型参数
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是：%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


