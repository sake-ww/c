#define _CRT_SECURE_NO_WARNINGS 1

//qsort使用练习
//练习使用库函数，qsort排序各种类型的数据
//
//#include<stdio.h>
//
//#include<stdlib.h>
//
//#include<string.h>
//
//
//
//
//
//int cmp(const void* p1, const void* p2)//整型
//
//{
//
//	return *((int*)p1) - *((int*)p2);
//
//}
//
//
//
//int cmp2(const void* p1, const void* p2)//字符型
//
//{
//
//	return *((char*)p1) - *((char*)p2);
//
//}
//
//
//
//int cmp3(const void* p1, const void* p2)
//
//{
//
//	return strcmp(*((char**)p1), *((char**)p2));
//
//}
//
//
//
//int cmp4(const void* p1, const void* p2)//浮点型
//
//{
//
//	return *((double*)p1) - *((double*)p2);
//
//}
//
//
//
//int main() {
//
//	int arr1[] = { 0, 53, 45, 89, 68, 75 };
//
//	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp);
//
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//
//	{
//
//		printf("%d ", arr1[i]);
//
//	}
//
//	printf("\n");
//
//
//
//	char arr2[] = { 'a', 'c', 'd', 'h', 's', 'z' };
//
//	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp2);
//
//	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
//
//		printf("%c ", arr2[i]);
//
//	}
//
//	printf("\n");
//
//
//
//	char* arr3[] = { "zhao", "qian", "sun", "li", "wu" };
//
//	qsort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(arr3[0]), cmp3);
//
//	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
//
//		printf("%s ", arr3[i]);
//
//	}
//
//	printf("\n");
//
//
//
//	double arr4[] = { 0.3, 3.4, 16.4, 6.9, 5.3 };
//
//	qsort(arr4, sizeof(arr4) / sizeof(arr4[0]), sizeof(arr4[0]), cmp4);
//
//	for (int i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++) {
//
//		printf("%f ", arr4[i]);
//
//	}
//
//	printf("\n");
//
//
//
//	system("pause");
//
//	return 0;
//
//}

//
//qsort模拟实现
//模仿qsort的功能实现一个通用的冒泡排序
//#include <stdio.h>
//
//int int_cmp(const void * p1, const void * p2)
//
//{
//
//	return (*(int *)p1 - *(int *)p2);
//
//}
//
//void _swap(void *p1, void * p2, int size)
//
//{
//
//	int i = 0;
//
//	for (i = 0; i< size; i++)
//
//	{
//
//		char tmp = *((char *)p1 + i);
//
//		*((char *)p1 + i) = *((char *)p2 + i);
//
//		*((char *)p2 + i) = tmp;
//
//	}
//
//}
//
//void bubble(void *base, int count, int size, int(*cmp)(void *, void *))
//
//{
//
//	int i = 0;
//
//	int j = 0;
//
//	for (i = 0; i< count - 1; i++)
//
//	{
//
//		for (j = 0; j<count - i - 1; j++)
//
//		{
//
//			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size) > 0)
//
//			{
//
//				_swap((char *)base + j*size, (char *)base + (j + 1)*size, size);
//
//			}
//
//		}
//
//	}
//
//}
//
//int main()
//
//{
//
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//
//	int i = 0;
//
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
//
//	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
//
//	{
//
//		printf("%d ", arr[i]);
//
//	}
//
//	printf("\n");
//
//	return 0;
//
//}






