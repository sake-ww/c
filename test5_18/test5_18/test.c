#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a >= 80)
	{
		printf("����\n");
	}
	else if (a<80 && a>60)
	{
		printf("����\n");
	}
	else
	{
		printf("������\n");
	}
	return 0;
}