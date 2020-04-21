#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int strncmp(const char *string1, const char *string2, size_t count);---格式
//int main()
//{
//	//strncmp - 字符串比较
//	const char* p1 = "abczdef";
//	char* p2 =       "abcqwer";
//	//int ret = strcmp(p1, p2);与其区别
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	
//	return 0;
//}
//--------------------------------------------------------------------------------------------
//strstr - 查找字符串
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = NULL;
//	char *s2 = NULL;
//	char *cur = (char*)p1;
//	if (*p2 == '\0')   //提前判断p2是否为\0
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//
//int main()
//{
//	char *p1 = "abc";
//	char *p2 = "abcdef";
//
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//---------------------------------------未完待续
//strstr - 查找字符串
//KMP 算法   https://kb.cnblogs.com/page/176818/
//#include <stdio.h>
//#include <string.h>
//void getNext(char *p, int *next)
//{
//	int j = 0, k = -1;
//	next[0] = -1;
//
//	while (j<strlen(p) - 1)
//	{
//		if (k == -1 || p[j] == p[k])    //匹配的情况下,p[j]==p[k]
//		{
//			j++;
//			k++;
//			next[j] = k;
//		}
//		else                   //p[j]!=p[k]
//			k = next[k];
//	}
//}
//int KMPMatch(char *s, char *p)
//{
//	int next[100];
//	int i = 0, j = 0;
//	getNext(p, next);
//	while (i<strlen(s))
//	{
//		if (j == -1 || s[i] == p[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];       //消除了指针i的回溯
//		}
//		if (j == strlen(p))
//			return i - strlen(p);
//	}
//	return -1;
//}
//int main()
//{
//	char s[] = "aa asd dd";   //source_string
//	char p[] = "asd";           //find_string
//	int ret;
//	ret = KMPMatch(&s, &p); //传地址 --> 指针
//	printf("ret = %d \n", ret);   // 4
//	return 0;
//}
//--------------------------------------------------------------
//strtok切割字符串
//格式：char * strtok ( char * str, const char * sep );
//int main()
//{
//	//点分十进制的表示方式
//	char arr[] = "123@234.@234";
//	char*p = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret=strtok(NULL, p))//-------1
//	{
//		printf("%s\n", ret);
//	}
//	//等同于只不过1方便
//	//char*ret = strtok(arr, p);//-------------2
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}
//-------------------------------------------------------------------------
//strerror
//返回错误码，所对应的错误信息。
//#include <errno.h>
//
//int main()
//{
//	//错误码  错误信息
//	//0 -     No error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}
//------------------------------------------------------------------------------
//#include <ctype.h>
//int main()
//{
//	//char ch = '2';
//	////int ret = islower(ch);//---------0
//	////int ret = isdigit(ch);//---------4
//	//printf("%d\n", ret);
//
//	//char ch = tolower('T');//将字母转化为小写字母
//	//char ch = toupper('q');//将字母转化为大写字母
//	//putchar(ch);
//
//	//转换为小写字母
//	//char arr[] = "I Am A Student";
//	//int i = 0;
//	//while (arr[i])
//	//{
//	//	if (isupper(arr[i]))//判断是否为小写
//	//	{
//	//		arr[i] = tolower(arr[i]);//将其变为大写
//	//	}
//	//	i++;
//	//}
//	//printf("%s\n", arr);
//	/*return 0;*/
//}
//upper小写      lower大写
//--------------------------------------------------------------
#include <assert.h>
//memcpy
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	int sz = sizeof(arr1) / sizeof(0);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}
//------------------------------
//struct S
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5};
//	int arr2[5] = { 0 };
//
//	struct S arr3[] = { { "张三", 20 }, { "李四", 30 } };
//	struct S arr4[3] = {0};
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}
//-------------------------------------------------------------
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int  main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	my_memcpy(arr+2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//-------------------------------------------------------------------
//my_memmove(arr + 2, arr, 20);//处理内存重叠的情况的
//int  main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	memmove(arr+2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//-----------------------------------------------------未完待续
//memmove模拟实现
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void* Memmove(void* Dst, const void* Src, int size) 
//{
//	for (int i = size; i >= 0; --i)
//	{
//		*((char*)Dst + i) = *((char*)Src + i);
//	}
//	return Dst;
//}
//int main()
//{
//	char str1[30] = "abcdefghij";
//	char* s1 = str1 + 4;
//	Memmove(s1, str1, 11);
//	printf("%s\n", s1);
//	printf("%s\n", str1);
//	return 0;
//}






