#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void PrintArray(int array[], int size)//��ӡ���� 
{
	for (int i = 0; i < size; ++i)
		printf("%d ", array[i]);
	printf("\n");
}

void Swap(int* left, int* right)
{
	int temp = *left;
	*left = *right;
	*right = temp;
}

void HeapAdjust(int array[], int size, int parent)
{
	//��child���parent�ϴ�ĺ��ӣ�Ĭ���ȱ��parent������
	//�ȱ�����ӵ�ԭ���ǣ����parent�к��ӣ�parentһ�����������ӣ�Ȼ������Һ���
	int child = parent * 2 + 1;

	while (child < size)
	{
		//��parent�нϴ�ĺ���:parent���Һ��ӱȽ�
		//�����ȱ�֤parent���Һ��Ӵ���
		if (child + 1 < size && array[child + 1] > array[child])
			child += 1;

		//���parent�Ƿ�����ѵ�����
		if (array[child] > array[parent])
		{
			Swap(&array[child], &array[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			return;
	}
}

//������
//�ռ临�Ӷȣ�O��1��
//ʱ�临�Ӷȣ�O��Nlog2^N��
//�ȶ��ԣ����ȶ�  
void HeapSort(int array[], int size)
{
	int end = size - 1;
	//1.����
	//ע��ӵ�����һ����Ҷ�ӽڵ��λ�ÿ�ʼʹ�öѵ�����һֱ���������ڵ��λ�� 
	for (int root = (size - 2) / 2; root >= 0; root--)
		HeapAdjust(array, size, root);//���µ���


	//2.����-->���ö�ɾ����˼��������� 
	while (end)
	{
		Swap(&array[0], &array[end]);
		HeapAdjust(array, end, 0);
		end--;
	}
}

void TestSort()
{
	int array[] = { 4, 1, 7, 6, 3, 9, 5, 8, 0, 2 };
	PrintArray(array, sizeof(array) / sizeof(array[0]));

	HeapSort(array, sizeof(array) / sizeof(array[0]));
	PrintArray(array, sizeof(array) / sizeof(array[0]));
}