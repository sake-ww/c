#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//�ж�cdefab�Ƿ�Ϊabcdef����������
//�жϷ�������abcdef��Ϊabcdefabcdef,Ȼ��۲�cdefab�Ƿ�Ϊ���Ӽ���
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1. ��str1�ַ�����׷��һ��str1�ַ���
//	//strcat(str1, str1);//err
//	strncat(str1, str1, 6);//abcdefabcdef    
//	//2. �ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr-���Ӵ���
//	char * ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//��arr2�����arr1������������������ strcat
//��ʽ��strcat��arr1��arr2��
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);//abcdef
//	return 0;
//}
//����ǽ�arr1�Լ��ŵ��Լ�arr1���棬����Ҫ��strncat
//��ʽ��strncat��arr1��arr1��6��-------���磺arr1Ϊabcdef�������ַ���

//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
//
//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 3 4
//3 4 5
//
//�ж��Ƿ��ܹ��ҵ�
//int FindNum(int arr[3][3], int k, int* row, int* col)
//{
//	int x = 0;
//	int y = col - 1;
//
//	while (x<=row-1 && y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	//�Ҳ���
//	return 0;
//}
//
//�ж��Ƿ��ܹ��ҵ������ҷ��ص�ַ
//int FindNum(int arr[3][3], int k, int *px, int*py)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//�Ҳ���
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, {7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//
//	//�����Ͳ���
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±��ǣ�%d %d\n", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

