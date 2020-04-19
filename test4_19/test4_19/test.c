#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//判断cdefab是否为abcdef左旋而来。
//判断方法：将abcdef变为abcdefabcdef,然后观察cdefab是否为其子集。
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1. 在str1字符串中追加一个str1字符串
//	//strcat(str1, str1);//err
//	strncat(str1, str1, 6);//abcdefabcdef    
//	//2. 判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr-找子串的
//	char * ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//将arr2后接入arr1后面则可以用这个方法 strcat
//格式：strcat（arr1，arr2）
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);//abcdef
//	return 0;
//}
//如果是将arr1自己放到自己arr1后面，则需要用strncat
//格式：strncat（arr1，arr1，6）-------例如：arr1为abcdef（六个字符）

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
//
//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 3 4
//3 4 5
//
//判断是否能够找到
//int FindNum(int arr[3][3], int k, int* row, int* col)
//{
//	int x = 0;
//	int y = col - 1;
//
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
//
//判断是否能够找到，并且返回地址
//int FindNum(int arr[3][3], int k, int *px, int*py)
//{
//	int x = 0;
//	int y = *py - 1;
//
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
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, {7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//
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

