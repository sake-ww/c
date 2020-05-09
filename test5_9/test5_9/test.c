#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//一维数组的初步认识
//int main()
//{
//	int arr[10] = { 0 };//数组的不完全初始化
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算大小
//	//对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
//	int i = 0;//做下标
//	for (i = 0; i<10; i++)//这里写10，好不好？
//	{
//		arr[i] = i;
//	}
//	//输出数组的内容
//	for (i = 0; i<10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n%d ",sz);
//	return 0;
//}
//输出：0123456789
//      10

//打印地址
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i<sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}//打印地址，因为int 占四个字节，所以每次加四
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}//输出：0  1 2 3 4 5 6 7 8 9 10 11//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	}
//	return 0;
//}
//打印二维数组的地址
//因为每个地址之间距离为4，所以二维数组在内存中的存储形式为  连续的



