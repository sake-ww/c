#define _CRT_SECURE_NO_WARNINGS 1

//��1��
//unsigned long long Fib(int N)
//{
//	unsigned long long first = 1;
//	unsigned long long second = 1;
//	unsigned long long ret = 1;//������
//	for (int i = 2; i < N; ++i)
//	{
//		ret = first + second;
//		first = second;
//		second = ret;
//	}
//	return ret;
//}
//int main()
//{
//	printf("%d ", Fib(10));
//	return 0; 
//}
//int N,unsigned long long first,unsigned long long second,unsigned long long ret,int iһ�������������
//�����ı����ǹ̶��ģ���ˣ�
//�ռ临�Ӷ�O(1)

//��2��
//��������������У�Ҫ���������кϲ���һ����������У�
//��һ���У�2 5 6 8 
//�ڶ����У�1 3 5 7 8 9 
//��������
//1.���������У�
//2.��һ����������İ�˳��ŵ���������
// ��1��������������index1��index2��index�ֱ��ʾһ�������еĵ�һ������
// ��2��index1��index2���бȽϣ�С�ĸ�ֵindex��������һλ����Ĳ���
// ��3���ظ��Ƚ�
//#include<stdio.h>
//#include<malloc.h>
//int* MergeData(int array1[], int size1, int array2[], int size2)
//{
//	int index1 = 0, index2 = 0, index = 0;
//	int* array = (int*)malloc((size1 + size2)*sizeof(array1[0]));
//	if (NULL == array )
//		return NULL;
//	while (index1 < size1 && index2 < size2)
//	{
//		if (array1[index1] <= array2[index2])
//			array[index++] = array1[index1++];
//		else
//			array[index++] = array2[index2++];
//	}
//	while (index1 < size1);
//        array[index++] = array1[index1++];
//	while (index2 < size2);
//		array[index++] = array2[index2++];
//	return array;
//}
//int main()
//{
//	int array1[] = { 2, 5, 6, 8 }; 
//	int array2[] = { 1, 3, 5, 7, 8, 9 };
//	int* array = MergeData(array1, sizeof(array1) / sizeof(array1[0]), array2, sizeof(array2) / sizeof(array2[0]));
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	free(array);
//	array = NULL;
//	return 0;
//}
//ʱ�临�Ӷ�:O(M+N)
//�ռ临�Ӷ�:O(M+N)  �����еĸ����ڱ仯��malloc��  