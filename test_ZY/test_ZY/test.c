#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//打印菱形
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

//int main()
//{
//	int b, c, d, e, f;
//	int a = 0;
//	//scanf("%d", &a);
//	for (a = 1; a < 1000; a++)
//	{
//		b = a % 10;
//		c = (a % 100 - b)/10;
//		/*d = a % 1000;
//		e = a % 10000;
//		f = a % 100000;*/
//		if (b*b*b + c*c*c == a)
//		{
//			printf("%d ", a);
//		}
//		a++;
//	}
//
//	return 0;
//}


//int main()
//{
//	
//	
//	int b = pow(10, 2);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		c = pow(10,i);
//		b = a * c + b;
//		d = d + b;
//	}
//	printf("%d", d);
//	return 0;
//}
//int main()
//{
//	char c1[] = "hello";
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < 5 - i; i++)
//	{
//		tmp = c1[i];
//		c1[i] = c1[5 - i];
//		c1[5 - i] = tmp;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", c1[i]);
//	}
//	return 0;
//}
//数组逆序
//int main()
//{
//	int arr[] = {0, 1, 2, 3, 4, 5};
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < 5-i; i++)
//	{
		//tmp = arr[i];
		//arr[i] = arr[5 - i];
		//arr[5 - i] = tmp;
//	}
	//for (i = 0; i < 6; i++)
	//{
	//	printf("%d ",arr[i]);
	//}
//	return 0;
//}


//用指针打印数组
//int main()
//{
//	   int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	   int *p = arr; 
//	   int sz = sizeof(arr) / sizeof(arr[0]);
//	   int i = 0;
//	   for (i = 0; i<sz; i++)
//	   {
//		   printf("%d ", *(p + i));
//	   }
//	   return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
////int main()
//{
//	int n = 0;
//	printf("输入数字：");
//	scanf("%d", &n);
//	int i = 0;
//	printf("奇数位为：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位为：");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//int Different(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i=0; i < 32; i++)    
//	{
//		if (m % 2 != n % 2)
//		{
//			count++;
//		}
//		m /= 2;
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = Different(m, n);
//	printf("%d", ret);
//	return  0;
//}