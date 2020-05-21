#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdlib.h>
//#include <stdio.h>
//int main()
//{
//	int s = 1, h;
//	int i, j;
//	scanf("%d", &h);
//	printf("1\n");
//	for (i = 2; i <= h; s = 1, i++)
//	{
//		printf("1 ");
//		for (j = 1; j <= i - 2; j++)
//			printf("%d ", (s = (i - j) * s / j));
//		printf("1\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	Print(1234);
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10
void fun(char str[])
{
	int n = strlen(str);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (str[j] > str[j + 1])
			{
				str[j] = str[j] ^ str[j + 1];
				str[j + 1] = str[j] ^ str[j + 1];
				str[j] = str[j] ^ str[j + 1];
			}
		}
	}
}

void main()
{
	char str[1024];
	printf("请输入十个字符\n");
	fgets(str, N, stdin);
	fun(str);
	printf("排序后的字符为:%s\n", str);
	system("pause");
}



