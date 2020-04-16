#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i,a;
//	for (i = 3; i > 0; i--)
//	{
//		for (a = i; a > 0; a--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//Êä³ö
//***
//**
//*

//int main()
//{
//	int i, j;
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 1; j <= 7 - i; j++)
//			printf(" ");
//		for (j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf(" ");
//		for (j = 1; j <= 13 - 2 * i; j++)
//			printf("*");
//		printf("\n");
//	}
//}


//breakÁ·Ï°
//int main()
//{
//	int a;
//	int b = 0;
//	for (a = 1; a < 100; a++)
//	{
//		if (a % 5 == 0)
//		{
//			printf("%d ", a);
//			b++;
//		}
//		if (b==10)
//			break;
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	for (a = 100; a < 200; a++)
//	{
//		if (a & 3 == 0)
//			continue;
//		printf("%a ", a);
//	}
//}

//#include<stdio.h>
//
//#include<Windows.h>
//
//int print_multiply(int x)
//
//{
//
//	int i, j;
//
//	for (i = 1; i < x + 1; ++i)
//
//	{
//
//		for (j = 1; j < x + 1; ++j)
//
//		{
//
//			printf("%d * %d = %d  ", i, j, i*j);
//
//		}
//
//		printf("\n");
//
//	}
//
//	return i;
//
//}
//
//
//
//int main()
//
//{
//
//	int num;
//
//	printf("ÊäÈë");
//
//	scanf("%d", &num);
//
//	print_multiply(num);
//
//	system("pause");
//
//	return 0;
//
//}

