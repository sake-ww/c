#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//char arr[] = "I like beijing"��//����ģ��Ǵ�д��
//	char arr[10];
//	scanf("%s", arr);
//	int b, c;
//	char d;
//	c = strlen(arr) - 1;
//	for (b = 0; b < c; b++, c--)
//	{
//		d = arr[b];
//		arr[b] = arr[c];
//		arr[c] = d;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int A, B, c, d, e;
//	printf("��������������");
//		scanf("%d %d", &A, &B);
//	e = A * B;
//	if (A < B)
//	{
//		c = A;
//		A = B;
//		B = c;
//	}
//	for (d = A; d <= e; d++)
//	{
//		if (d % A == 0 && d % B == 0)
//		{
//			printf("%d", d);
//			break;
//		}
//	}
//	return 0;
//}

//�ܽ᣺��һ��  ��  �Ժ���ע���ʽ����
//      �ڶ���      ��ϸ�Ķ���Ŀ������scanf����������ѧϰ

//����С������
//#include<stdio.h> 
//int main()
//{ 
//	int A, B;
//    scanf("%d%d", &A, &B);
//	int i = 1; 
//	while (((A * i) % B) != 0)
//   { 
//	    i++;
//	}
//	printf("%d\n", A*i); 
//    return 0;
//}

//�����ַ���

#include <stdio.h> 
#include <string.h> 
void reverse(char* start, char* end) 
{ 
	while(start < end) 
	{
		char temp = *start; 
		*start = *end; 
		*end = temp; 
		start++; 
		end--; 
	}
}
int main() 
{
	char input[100]; // ע�ⲻ��ʹ��scanf��scanf�����ո�һ��������վͽ����� 
	gets(input); // ��ת�������� 
	reverse(input, input + strlen(input) - 1); // ��ת���� 
	char* start = input; while(*start) 
	{ 
		char *end = start; 
		while(*end != ' ' && *end) end++; 
		reverse(start, end-1); 
		if(*end) start = end + 1; 
		else
			start = end; 
	}
	printf("%s", input); 
	return 0; 
}