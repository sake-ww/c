#define _CRT_SECURE_NO_WARNINGS 1

//Ñî»ÔÈý½Ç
#include <stdio.h>
#define N 8
int Factorial(int n);
int Combinations(int n, int k);
void GiveInstruction(void);

main()
{
	int raw, i, j, k;
	GiveInstruction();
	printf("Please input the raws of YangHui triangle:");
	scanf("%d", &raw);
	for (i = 1; i <= raw; i++)
	{
		for (j = 0; j<raw - i; j++)	
		{
			printf(" ");
		}
		for (k = 0; k <= i - 1; k++)	
		{
			printf("%4d ", Combinations(i - 1, k));
	
		}
		printf("\n");
	}
}

int Factorial(int n)
{
	int i, product = 1;
	for (i = 1; i <= n; i++)
	{
		product *= i;
	}
	return product;
}

int Combinations(int n, int k)
{
	int a, b, c;
	a = Factorial(n);
	b = Factorial(k);
	c = Factorial(n - k);
	return a / (b*c);
}

void GiveInstruction(void)
{
	printf("This program can display the YangHui triangle!\n");
	printf("For example:\n");
	printf("  1  \n");
	printf(" 1 1 \n");
	printf("1 2 1\n");
}
