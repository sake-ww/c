#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int a = 20;
	int b = 0;
	int c = 0;
	b = 20;
	while (b >= 1)
	{
		b = b + c;
		a = a + b / 2;
		c = b % 2;
		b = b / 2;
	}
	printf("%d\n", a);
	return 0;
}
