#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//
//	int *p1 = (int*)(&array + 1);
//	int *p2 = (int*)(array + 1);
//	char *p3 = NULL;
//
//	int a = p1[-2] + *p2 + sizeof(&array) + sizeof(*p3);
//	printf("%d ", a);
//	return 0;
//}
//�����11


//#include<stdio.h>
//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//
//	int *p1 = (int*)(&array + 1);
//	int *p2 = (int*)(array + 1);
//	char *p3 = NULL;
//
//	int a = p1[-2] + *p2 + sizeof(&array) + sizeof(*p3);
//	printf("%d ", a);
//
//	//printf("%d ", *p3);//���д����������һ�������
//	                     //ԭ��*p3ΪNULL
//	//����
//	//Ϊʲô����� int b = p1[-2] + *p2 + sizeof(&array) + sizeof(*p3);��������
//	// sizeof(*p3)  ����*p3���н������ˣ�Ϊʲôû�б���	��
//	return 0;
//}


//������̣�
//1.����������
//#include<stdio.h>
////���������������д�ӡ
////                  �����׵�ַ    ��������ЧԪ�ظ���
//void PrintArray(int array[], int size)
////void PrintArray(int* array, int size)
////���ַ�ʽ������
//{
//	//printf("%d\n", sizeof(array) / sizeof(array[0]));
//	//���д����ڴ˴�����������
//	//ԭ��array�ڴ˴��Ѿ��˻�Ϊ��Ԫ�ص�ַ
//	//printf("%d\n", sizeof(array) / sizeof(array[0]));
//	// sizeof(array)��Ϊ��32λƽ̨�£��������������4
//	// sizeof(array[0]))��Ϊ��32λƽ̨�£��������������4
//	//������д���������Ϊ1 
//	for (int i = 0; i < size; ++i)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//
//	int *p1 = (int*)(&array + 1);
//	int *p2 = (int*)(array + 1);
//	char *p3 = NULL;
//
//	int a = p1[-2] + *p2 + sizeof(&array) + sizeof(*p3);
//	
//	printf("%d ", a);
//
//	//�ڴ����ڼ��������Ѿ��˻�Ϊ��Ԫ�صĵ�ַ 
//	PrintArray(array, sizeof(array) / sizeof(array[0]));
//	return 0;
//}

//������������������²Ŵ������鱾��--���ö������Ŀռ�
//1.���������ȡ��ַ 
//2.������������sizeof֮��

//������������ʾ��Ԫ�صĵ�ַ
//���磺��������--��int*

//int* p1 = array;
//int* p2 = array + 1;
//int* p3 = &array[0];
//������������ǵȼ۵�

//2.�����������
#include<stdio.h>
int main()
{
	int array[] = { 1, 2, 3, 4, 5 };

	int *p1 = (int*)(&array + 1);
	//&array����������ֱ��ȡ��ַ---�����鱾��
	//&array + 1���൱�������������
	//λ���ڣ�
	//                ح
	//{ 1, 2, 3, 4, 5 }

	int *p2 = (int*)(array + 1);
	//array�൱��������Ԫ�ص�ַ
	//array+1�൱������ڶ���
	//λ���ڣ�
	//    ح
	//{ 1, 2, 3, 4, 5 }

	char *p3 = NULL;
	//p3ָ�����NULL
	//���ָ����һ�������Խ����õ�
	//�����ñ���Ҫ������ռ�ŵ���ʲôֵ

	int a = p1[-2] + *p2 + sizeof(&array) + sizeof(*p3);
	//p1[-2]
	//���꣺
	//int* p = array;
	//array[2] = *(array + 2) = *(p+2);//����������ȵ�

	//p1[-2]=*��p1-2)//�����ȼ�
	//p1[-2]�൱������ƶ�������λ��--��4

	//*p2
	//�����ָ��p2���н����þ���--��2

	//sizeof(&array)
	//sizeof(array)�����������ռ���ܵ��ֽ���
	//sizeof(array)=5*sizeof��int��= 20
	//sizeof(&array)�������һ��ָ��
	//ָ����32λƽ̨��ռ��4���ֽ�
	//���sizeof(&array)=4

	//sizeof(*p3)
	//���ʣ�p3�ǿ�ָ�룬��sizeof������ó���Ϊʲôû�б�����
	//��sizeof�ڼ�����ʽʱ����������ָ����н����õ� 
	//    sizeof�������������
	//sizeof(*p3)�൱��sizeof��char��
	//charֻռ��һ���ֽ�
	//��ˣ�sizeof(*p3)=1
	
	printf("%d ", a);//4+2+4+1=11
	return 0;
}

