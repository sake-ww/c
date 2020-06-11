#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

#define T 1
#define F 0
#define MAXSIZE 10		//要排序数组个数的最大值

typedef struct
{
	int r[MAXSIZE + 1];	//存储要排序数组，r[0]用作哨兵或临时变量
	int length;
}SqList;

void swap(SqList *L, int i, int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

void bubbleSort(SqList *L)
{
	int i, j;
	int flag;
	for (i = 1; i < L->length && flag; i++)
	{
		flag = 0;
		for (j = L->length; j > i; j--)		//冒泡一定是从后往前比较
		{
			if (L->r[j] < L->r[j - 1])
			{
				swap(L, j, j - 1);
				flag = 1;						//如果没有交换说明已经排好序了
			}
		}
	}
}

int main()
{
	int i;
	SqList L;
	L.length = 10;
	for (i = 1; i < L.length + 1; i++)
	{
		L.r[i] = i;
	}
	L.r[5] = 100;
	L.r[7] = 90;
	for (i = 1; i < L.length + 1; i++)
	{
		printf("%d ", L.r[i]);
	}
	//printf("\n");							//在这里加上一句printf 最后打印的就是未排序之前的数组 ？？？ 求解				
	bubbleSort(&L);
	printf("\n");
	for (i = 1; i < L.length + 1; i++)
	{
		printf("%d ", L.r[i]);
	}
	printf("\n");
	return 0;
}


#include <stdio.h>

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

int main()
{
	int a[10] = { 2, 1, 4, 5, 6, 9, 7, 8, 7, 7 };
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 9; j > i; j--)//从后往前冒泡
		{
			if (a[j] < a[j - 1])
			{
				swap(&a[j], &a[j - 1]);
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
