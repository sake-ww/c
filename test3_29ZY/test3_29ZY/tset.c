#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int b = 0;
	for (b = 0; b < 5; b++)
	{
		if (b%2==0)
			printf("%d ", arr1[b]);	
	}
	for (b = 0; b < 5; b++)
	{
		if (b % 2 == 1)
			printf("%d ", arr1[b]);
	}
}


//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//const  �Ż�src����λ���Ƿ���ȷ
//{
//	char* ret = dest;
//	assert(dest != NULL);//�Ż�����Ƿ��������
//	assert(src != NULL);//assert  ��ʹ����Ҫ����ͷ�ļ�  #include <assert.h>
//	while (*dest++ = *src++)//�Ż����
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//����һ������
//	return 0;
//}

//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}