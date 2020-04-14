#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5};
//	int* p = arr;
//	//*(p + 2) == p[2] ==> *(arr+2) == arr[2]
//	arr[2]; // ==> *(arr+2)
//	/*int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));// aa[1]
//
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));*/
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否为水仙花数（自幂数）
		//1. 计算i的位数 - n位数
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		//2. 计算i的每一位的n次方之和 sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3. 比较i == sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}

	return 0;
}