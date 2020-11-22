#define _CRT_SECURE_NO_WARNINGS 1

//ϣ������
void ShellSort(int array[], int size)
{
	int gap = size;
	while (gap > 1)
	{
		//gap/=2//ϣ��������
		//gapÿ��ȡ����
		gap = gap / 3 + 1;//kunth����ʵ��֤����Ϊ���
		//ע�⣺i��1��ʼ
		for (int i = gap; i < size; ++i)//���ѭ�����ƣ���size-1��������Ҫ����
		{
			//ģ�ⵥ��Ԫ�ز������
			int key = array[i];
			int end = i - gap;

			//�Ҵ�����Ԫ���������е�λ��
			//�������£���Ҫiλ��֮ǰ�����Ѳ����Ԫ������������а���---O��n�� 
			while (end >= 0 && key < array[end])// key < array[end] ����� û��=���㷨�ȶ�  ��=���㷨���ȶ�
			{
				array[end + gap] = array[end];
				end -= gap;
			}

			//����Ԫ��:���뵽��ǰ�������һ��λ��
			array[end + gap] = key;
		}
	}


}
//�������㷨�Ƿ��ȶ���
//1.�����㷨ԭ���ڲ���ʱ�Ƿ�������䣨����Ԫ�أ������в���
//2.�����㷨ԭ���ڽ���ʱ�Ƿ�������䣨����Ԫ�أ������н���
//�ǣ����ȶ�����ȵ�Ԫ���������ȥ��
//�����ȶ�
//----��ϣ�������ȶ�
//�ռ临�Ӷȣ�O��1��
//ʱ�临�Ӷ�:O(N^1.25)~O(1.6N^1.25)

void Swap(int* left, int* right)
{
	int temp = *left;
	*left = *right;
	*right = temp;
}

//ѡ������
//ʱ�临�Ӷ�:O(N^2)
//�ռ临�Ӷȣ�O(1)
//�ȶ��ԣ����ȶ�
void SelectSort(int array[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		//�ҵ�ǰ���������Ԫ�ص�λ�� 
		int maxPos = 0;
		for (int j = 1; j < size - i; ++j)
		{
			if (array[j] > array[maxPos])
				maxPos = j;
		}
		if (maxPos != size - i - 1)
		{
			Swap(&array[maxPos], &array[size - i - 1]);
		}
	}
}