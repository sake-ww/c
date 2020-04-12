#define _CRT_SECURE_NO_WARNINGS 1

//qsort模拟实现
//模仿qsort的功能实现一个通用的冒泡排序

//#include <stdio.h>
// int int_cmp(const void * p1, const void * p2) 
// {
//	 return (*(int *)p1 - *(int *)p2);
// }
// void _swap(void *p1, void * p2, int size)
// {
//	 int i = 0;
//	 for (i = 0; i< size; i++)
//	 {
//		 char tmp = *((char *)p1 + i);		
//		 *((char *)p1 + i) = *((char *)p2 + i);
//		 *((char *)p2 + i) = tmp;
//	 }
// }
// void bubble(void *base, int count, int size, int(*cmp)(void *, void *))
// {
//	 int i = 0;
//	 int j = 0;
//	 for (i = 0; i< count - 1; i++)
//	 {
//		 for (j = 0; j<count - i - 1; j++)
//		 {
//			 if (cmp((char *)base + j*size, (char *)base + (j + 1)*size) > 0)
//			 {
//				 _swap((char *)base + j*size, (char *)base + (j + 1)*size, size);
//			 }
//		 }
//	 }
// }
// int main()
// {
//	 int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	 int i = 0;
//	 bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
//	 for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
//	 {
//		 printf("%d ", arr[i]);
//	 }
//	 printf("\n");
//	 return 0;
// }


//qsort使用练习
//练习使用库函数，qsort排序各种类型的数据
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
//int cmp(const void* p1, const void* p2)//整型
//{
//	return *((int*)p1) - *((int*)p2);
//}
//
//int cmp2(const void* p1, const void* p2)//字符型
//{
//	return *((char*)p1) - *((char*)p2);
//}
//
//int cmp3(const void* p1, const void* p2) 
//{
//	return strcmp(*((char**)p1), *((char**)p2));
//}
//
//int cmp4(const void* p1, const void* p2)//浮点型
//{
//	return *((double*)p1) - *((double*)p2);
//}
//
//int main() {
//	int arr1[] = { 0, 53, 45, 89, 68, 75 };
//	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp);
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) 
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	char arr2[] = { 'a', 'c', 'd', 'h', 's', 'z' };
//	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp2);
//	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
//		printf("%c ", arr2[i]);
//	}
//	printf("\n");
//
//	char* arr3[] = { "zhao", "qian", "sun", "li", "wu"};
//	qsort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(arr3[0]), cmp3);
//	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
//		printf("%s ", arr3[i]);
//	}
//	printf("\n");
//
//	double arr4[] = { 0.3, 3.4, 16.4, 6.9, 5.3 };
//	qsort(arr4, sizeof(arr4) / sizeof(arr4[0]), sizeof(arr4[0]), cmp4);
//	for (int i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++) {
//		printf("%f ", arr4[i]);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int  len(char arr[])
//{
//	int i;
//	for (i = 0; arr[i] != '\0'; i++);
//	return i;
//}
//int Isswap(char *str, char *sub)
//{
//	char *p = malloc(strlen(str) + strlen(str) + 1);
//	strcpy(p, str);
//	strcat(p, str);
//	if (strstr(p, sub) == NULL)
//	return 0;
//	return 1;
//}
//void judge(int r)
//{
//	if (r == 1)
//	printf("1\n");
//	else
//	printf("0\n");
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char arr1[] = "cdefab";
//	int r = Isswap(arr, arr1);
//	judge(r);
//	return 0;
//}

//if (r == 1)
//printf("1.找到\n");
//else
//printf("0.没有\n");

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* ZuoXuan(char *p, int n)
//{
//	char *p1 = p;
//	int len = strlen(p1) - 1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; ++i)
//	{
//		char tmp = p1[0];
//		for (j = 0; j < len; ++j)
//		{
//			p1[j] = p1[j + 1];
//		}
//		p1[len] = tmp;
//	}
//	return p1;
//}
//
//int main()
//{
//	int k = 0;
//	char a[] = "ABCD";
//	printf("字符为%s\n", a);
//	printf("请输入左旋几个字符？(输入的数字小于4)\n");
//	scanf("%d", &k);
//	ZuoXuan(a, k);
//	printf("%s\n", a);
//	return 0;
//}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int a, b, i, j;
	printf("请输入你需要查找的数字：");
	scanf("%d", &a);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			b = arr[i][j];
			if (b == a)
				printf("找到了，坐标为[%d,%d]", i, j);
		}
	}
	return 0;
}