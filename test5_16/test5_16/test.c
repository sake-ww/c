#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//void my_strcat(char s1[], char s2[])
//{
//	int i, len1 = strlen(s1), len2 = strlen(s2);
//	for (i = 0; i<len2; i++)
//		s1[i + len1] = s2[i];
//	s1[i + len1] = '\0';
//}
//int main()
//{
//	char s1[80], s2[50];
//	printf("����1:\n");
//	gets(s1);
//	printf("����2:\n");
//	gets(s2);
//	my_strcat(s1, s2);
//	printf("��Ϻ�:\n");
//	puts(s1);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define N 10
//void fun(char str[]) 
//{
//	int n = strlen(str);
//	for (int i = 0; i < n; ++i) 
//	{
//		for (int j = 0; j < n - 1 - i; ++j)
//		{
//			if (str[j] > str[j + 1])
//			{
//				str[j] = str[j] ^ str[j + 1];
//				str[j + 1] = str[j] ^ str[j + 1];
//				str[j] = str[j] ^ str[j + 1];
//			}
//		}
//	}
//}
//
//void main()
//{
//	char str[1024];
//	printf("������ʮ���ַ�\n");
//	fgets(str, N, stdin);
//	fun(str);
//	printf("�������ַ�Ϊ:%s\n", str);
//	system("pause");
//}

//�е�����
//#include<stdio.h>
//int?main()
//{
//	int?a[100], i, j, t, n;
//	n = 10;
//	printf("������10��Ҫ�������:\n");
//	for?(i? = 1;?i? <= n;?i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for?(i? = 1;?i? <= n;?i++)
//	{
//		for?(j? = 1;?j? <= n? - i;?j++)
//			if?(a[j]?<?a[j? + 1])
//		{
//				t? = a[j];
//				a[j] = a[j? + 1];
//				a[j? + 1] = t;
//			}
//	}
//}
//printf("�����Ľ��Ϊ:\n");
//for?(i? = 1;?i? <= n;?i++)
//{
//	printf("?%d", a[i]);
//}
//return?0;
// }