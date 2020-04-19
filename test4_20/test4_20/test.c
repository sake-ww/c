#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//   strlen  模拟实现
//1.计数器方法
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str)//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	////错误示范：char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };---原因：这个数组没有\0
//	printf("%d\n", len);
//	return 0;
//}-------------------------------------------------------------------
//2.递归----strlen
//#include <stdio.h>
//#include <stdlib.h>
//int strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return strlen(str + 1) + 1;
//}
//int main()
//{
//	printf("%d\n", strlen("hehe"));
//	return 0;
//}
//----------------------------------------------------------------------------
//指针-指针
//#include<stdio.h>
//
//int len(char *str)//定义一个函数
//{
//	int i = 0;
//	while (*(str + i)) //用while判断字符数组元素不为0
//	{
//		i++; // i的值就是当前字符数组的长度
//	}
//	return i;
//}
//
//int main()
//{
//	char str[10] = "help";
//	int i;
//	i = len(str);
//	printf("len = %d", i);
//	return 0;
//}
//-------------------------------------------------------------------------------
//延伸：比较字符串大小
//#include <stdio.h>
//int main()
//{
//	const char*str1 = "abc";
//	const char*str2 = "abcd";
//	if (strlen(str2) - strlen(str1)>0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}
//因为strlen函数返回的是char类型，所以这个题比较的是a和b之间的大小
//特别：	const char*str1 = "abc";
//          const char*str2 = "abcd";
//          str2〉str1
//----------------------------------------------------------------------------------------
//模拟实现strcpy
//Strcpy的作用是将一个数组的字符串以覆盖的方式复制到另一个数组。
//char* my_strcpy(char* dest, const char*src)//因为src不需要变化所以加 const
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;//
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";//
//	//char *arr1 = "abcdefghi";//错误原因：目标空间必须可变。
//
//	char arr2[] = "bit";//
//	//char arr2[] = { 'b', 'i', 't' };源字符串必须以 '\0' 结束。
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//注意：arr2内比arr1内空间小，否则会撑破。
//----------------------------------------------------------------------------
//strcat：将arr2加到arr1后面
//char* my_strcat(char*dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	//1. 找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2. 追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";//30----目标空间必须足够大
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//注意：引用strcat和atrncat时需引用头文件#include<string.h>
//      空格也可以放到里面，hello后面和world前面都行。
//--------------------------------------------------------------
//运用strcmp运行一下
//strcmp：比较字符串大小例如：abc   cde    a比c小  所以返回小于零的数字
//int main()
//{
//	char* p1 = "qbc";//6
//	char* p2 = "abc";//5
//	if (strcmp(p1, p2)>0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("pa == p2\n");
//	}
//	else if (strcmp(p1, p2)<0)
//	{
//		printf("p1<p2\n");
//	}
//	return 0;
//}
//不同编译器strcmp返回的不一样，所以148和156的值分别为><0
//-----------------------------------------------------------------------
//模拟实现strcmp
//比较字符串首字母大小，如相同，则比较第二个，，，，，
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//}
//高级一点返回相差数值
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);//返回的是a和g的差值
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "ghijk";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//--------------------------------------------------------------
//将arr2内容赋值到arr1中
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//注意：arr1内空间比arr2大
//-------------------------------------------------------
//strcpy只能将两个不同的字符串连接在一起，strncpy可以将相同字符串连接在一起
//原因：strncpy(arr1, arr1, 6);有一个数字六，表示只连接后面六个字符
//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	//strncpy--模拟实现
//	strncpy(arr1, arr2, 6);
//
//	return 0;
//}
//----------------------------------------------------------






