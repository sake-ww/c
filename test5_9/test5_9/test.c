#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//һά����ĳ�����ʶ
//int main()
//{
//	int arr[10] = { 0 };//����Ĳ���ȫ��ʼ��
//	//���������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����С
//	//���������ݸ�ֵ,������ʹ���±������ʵģ��±��0��ʼ�����ԣ�
//	int i = 0;//���±�
//	for (i = 0; i<10; i++)//����д10���ò��ã�
//	{
//		arr[i] = i;
//	}
//	//������������
//	for (i = 0; i<10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n%d ",sz);
//	return 0;
//}
//�����0123456789
//      10

//��ӡ��ַ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i<sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}//��ӡ��ַ����Ϊint ռ�ĸ��ֽڣ�����ÿ�μ���
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}//�����0  1 2 3 4 5 6 7 8 9 10 11//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	}
//	return 0;
//}
//��ӡ��ά����ĵ�ַ
//��Ϊÿ����ַ֮�����Ϊ4�����Զ�ά�������ڴ��еĴ洢��ʽΪ  ������



