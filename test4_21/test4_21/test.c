#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int strncmp(const char *string1, const char *string2, size_t count);---��ʽ
//int main()
//{
//	//strncmp - �ַ����Ƚ�
//	const char* p1 = "abczdef";
//	char* p2 =       "abcqwer";
//	//int ret = strcmp(p1, p2);��������
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	
//	return 0;
//}
//--------------------------------------------------------------------------------------------
//strstr - �����ַ���
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = NULL;
//	char *s2 = NULL;
//	char *cur = (char*)p1;
//	if (*p2 == '\0')   //��ǰ�ж�p2�Ƿ�Ϊ\0
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
//			return cur;//�ҵ��Ӵ�
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
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
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//---------------------------------------δ�����
//strstr - �����ַ���
//KMP �㷨   https://kb.cnblogs.com/page/176818/
//#include <stdio.h>
//#include <string.h>
//void getNext(char *p, int *next)
//{
//	int j = 0, k = -1;
//	next[0] = -1;
//
//	while (j<strlen(p) - 1)
//	{
//		if (k == -1 || p[j] == p[k])    //ƥ��������,p[j]==p[k]
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
//			j = next[j];       //������ָ��i�Ļ���
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
//	ret = KMPMatch(&s, &p); //����ַ --> ָ��
//	printf("ret = %d \n", ret);   // 4
//	return 0;
//}
//--------------------------------------------------------------
//strtok�и��ַ���
//��ʽ��char * strtok ( char * str, const char * sep );
//int main()
//{
//	//���ʮ���Ƶı�ʾ��ʽ
//	char arr[] = "123@234.@234";
//	char*p = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret=strtok(NULL, p))//-------1
//	{
//		printf("%s\n", ret);
//	}
//	//��ͬ��ֻ����1����
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
//���ش����룬����Ӧ�Ĵ�����Ϣ��
//#include <errno.h>
//
//int main()
//{
//	//������  ������Ϣ
//	//0 -     No error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	//���ļ�
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
//	//char ch = tolower('T');//����ĸת��ΪСд��ĸ
//	//char ch = toupper('q');//����ĸת��Ϊ��д��ĸ
//	//putchar(ch);
//
//	//ת��ΪСд��ĸ
//	//char arr[] = "I Am A Student";
//	//int i = 0;
//	//while (arr[i])
//	//{
//	//	if (isupper(arr[i]))//�ж��Ƿ�ΪСд
//	//	{
//	//		arr[i] = tolower(arr[i]);//�����Ϊ��д
//	//	}
//	//	i++;
//	//}
//	//printf("%s\n", arr);
//	/*return 0;*/
//}
//upperСд      lower��д
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
//	struct S arr3[] = { { "����", 20 }, { "����", 30 } };
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
//my_memmove(arr + 2, arr, 20);//�����ڴ��ص��������
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
//-----------------------------------------------------δ�����
//memmoveģ��ʵ��
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






