#define _CRT_SECURE_NO_WARNINGS 1
//输入三个字符串，然后进行比较，
//朋友问题，帮助解决
#include<stdio.h>
#include<string.h>
//void swap(char*p1, char*p2)
//{
//	char p[20];
//	strcpy_s(p, p1);
//	strcpy(p1, p2);
//	strcpy(p2, p);
//
//}
//int main()
//{
//	void swap(char* s, char* str2);
//	char str1[20], str2[20], str3[25];
//	printf("input three line:\n");
//	gets(str1);
//	gets(str2);
//	gets(str3);
//	if (strcmp(str1, str2) > 0)
//	{
//		swap(str1, str2);
//	}
//	if (strcmp(str2, str3) > 0)
//	{
//		swap(str2, str3);
//	}
//	if (strcmp(str3, str1) > 0)
//	{
//		swap(str3, str1);
//	}
//	printf("Now.sort:\n");
//	printf("%s > %s > %s\n", str1, str2, str3);
//	return 0;
//}

#include<stdio.h>
#include<string.h>
void swap(char* p1, char* p2)
{
	char p[20];
	strcpy(p, p1);
	strcpy(p1, p2);
	strcpy(p2, p);

}
int main()
{
	void swap(char* s, char* str2);
	char str1[20], str2[20], str3[25];
	printf("input three line:\n");
	gets(str1);
	gets(str2);
	gets(str3);
	if (strcmp(str1, str2) > 0)
	{
		swap(str1, str2);
	}
	if (strcmp(str2, str3) > 0)
	{
		swap(str2, str3);
	}
	if (strcmp(str3, str1) > 0)
	{
		swap(str3, str1);
	}
	printf("Now.sort:\n");
	printf("%s\n.%s\n,%s\n", str1, str2, str3);
	return 0;
}

