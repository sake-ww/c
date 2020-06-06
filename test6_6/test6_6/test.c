#define _CRT_SECURE_NO_WARNINGS 1

//例1：
//unsigned long long Fib(int N)
//{
//	unsigned long long first = 1;
//	unsigned long long second = 1;
//	unsigned long long ret = 1;//保存结果
//	for (int i = 2; i < N; ++i)
//	{
//		ret = first + second;
//		first = second;
//		second = ret;
//	}
//	return ret;
//}
//int main()
//{
//	printf("%d ", Fib(10));
//	return 0; 
//}
//int N,unsigned long long first,unsigned long long second,unsigned long long ret,int i一共创建五个变量
//创建的变量是固定的，因此：
//空间复杂度O(1)

//例2：
//有两个有序的序列，要求：两个序列合并成一个有序的序列：
//第一序列：2 5 6 8 
//第二序列：1 3 5 7 8 9 
//方法：创
//1.建第三序列，
//2.把一二序列里面的按顺序放到第三序列
// （1）创建两个变量index1，index2，index分别表示一二三序列的第一个数字
// （2）index1和index2进行比较，小的赋值index并且向后加一位，大的不变
// （3）重复比较
//#include<stdio.h>
//#include<malloc.h>
//int* MergeData(int array1[], int size1, int array2[], int size2)
//{
//	int index1 = 0, index2 = 0, index = 0;
//	int* array = (int*)malloc((size1 + size2)*sizeof(array1[0]));
//	if (NULL == array )
//		return NULL;
//	while (index1 < size1 && index2 < size2)
//	{
//		if (array1[index1] <= array2[index2])
//			array[index++] = array1[index1++];
//		else
//			array[index++] = array2[index2++];
//	}
//	while (index1 < size1);
//        array[index++] = array1[index1++];
//	while (index2 < size2);
//		array[index++] = array2[index2++];
//	return array;
//}
//int main()
//{
//	int array1[] = { 2, 5, 6, 8 }; 
//	int array2[] = { 1, 3, 5, 7, 8, 9 };
//	int* array = MergeData(array1, sizeof(array1) / sizeof(array1[0]), array2, sizeof(array2) / sizeof(array2[0]));
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	free(array);
//	array = NULL;
//	return 0;
//}
//时间复杂度:O(M+N)
//空间复杂度:O(M+N)  数组中的个数在变化（malloc）  