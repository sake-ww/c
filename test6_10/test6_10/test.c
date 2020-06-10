#define _CRT_SECURE_NO_WARNINGS 1

//问题1：求n的阶乘。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;//ret=ret*i
	}
	printf("n的阶乘为ret=%d\n", ret);
	system("pause");
	return 0;
}


//问题２：求sum = 1!+ 2!+ 3!+ … + 10 != ?
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		ret *= i;//ret=ret*i
		sum += ret;//sum=sum+ret
	}
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
