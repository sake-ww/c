#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//   strlen  ģ��ʵ��
//1.����������
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
//	////����ʾ����char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };---ԭ���������û��\0
//	printf("%d\n", len);
//	return 0;
//}-------------------------------------------------------------------
//2.�ݹ�----strlen
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
//ָ��-ָ��
//#include<stdio.h>
//
//int len(char *str)//����һ������
//{
//	int i = 0;
//	while (*(str + i)) //��while�ж��ַ�����Ԫ�ز�Ϊ0
//	{
//		i++; // i��ֵ���ǵ�ǰ�ַ�����ĳ���
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
//���죺�Ƚ��ַ�����С
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
//��Ϊstrlen�������ص���char���ͣ����������Ƚϵ���a��b֮��Ĵ�С
//�ر�	const char*str1 = "abc";
//          const char*str2 = "abcd";
//          str2��str1
//----------------------------------------------------------------------------------------
//ģ��ʵ��strcpy
//Strcpy�������ǽ�һ��������ַ����Ը��ǵķ�ʽ���Ƶ���һ�����顣
//char* my_strcpy(char* dest, const char*src)//��Ϊsrc����Ҫ�仯���Լ� const
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;//
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";//
//	//char *arr1 = "abcdefghi";//����ԭ��Ŀ��ռ����ɱ䡣
//
//	char arr2[] = "bit";//
//	//char arr2[] = { 'b', 'i', 't' };Դ�ַ��������� '\0' ������
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//ע�⣺arr2�ڱ�arr1�ڿռ�С���������ơ�
//----------------------------------------------------------------------------
//strcat����arr2�ӵ�arr1����
//char* my_strcat(char*dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	//1. �ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2. ׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";//30----Ŀ��ռ�����㹻��
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//ע�⣺����strcat��atrncatʱ������ͷ�ļ�#include<string.h>
//      �ո�Ҳ���Էŵ����棬hello�����worldǰ�涼�С�
//--------------------------------------------------------------
//����strcmp����һ��
//strcmp���Ƚ��ַ�����С���磺abc   cde    a��cС  ���Է���С���������
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
//��ͬ������strcmp���صĲ�һ��������148��156��ֵ�ֱ�Ϊ><0
//-----------------------------------------------------------------------
//ģ��ʵ��strcmp
//�Ƚ��ַ�������ĸ��С������ͬ����Ƚϵڶ�������������
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
//}
//�߼�һ�㷵�������ֵ
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
//	return (*str1 - *str2);//���ص���a��g�Ĳ�ֵ
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
//��arr2���ݸ�ֵ��arr1��
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//ע�⣺arr1�ڿռ��arr2��
//-------------------------------------------------------
//strcpyֻ�ܽ�������ͬ���ַ���������һ��strncpy���Խ���ͬ�ַ���������һ��
//ԭ��strncpy(arr1, arr1, 6);��һ������������ʾֻ���Ӻ��������ַ�
//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	//strncpy--ģ��ʵ��
//	strncpy(arr1, arr2, 6);
//
//	return 0;
//}
//----------------------------------------------------------






