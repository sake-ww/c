#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

#define T 1
#define F 0
#define MAXSIZE 10		//Ҫ����������������ֵ

typedef struct
{
	int r[MAXSIZE + 1];	//�洢Ҫ�������飬r[0]�����ڱ�����ʱ����
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
		for (j = L->length; j > i; j--)		//ð��һ���ǴӺ���ǰ�Ƚ�
		{
			if (L->r[j] < L->r[j - 1])
			{
				swap(L, j, j - 1);
				flag = 1;						//���û�н���˵���Ѿ��ź�����
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
	//printf("\n");							//���������һ��printf ����ӡ�ľ���δ����֮ǰ������ ������ ���				
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
		for (j = 9; j > i; j--)//�Ӻ���ǰð��
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
