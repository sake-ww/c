#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a >= 80)
	{
		printf("优秀\n");
	}
	else if (a<80 && a>60)
	{
		printf("及格\n");
	}
	else
	{
		printf("不及格\n");
	}
	return 0;
}