#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//pû�з���
//	strcpy(str, "hello world");//str��Ȼ��null
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//������������
//1.���д���������ֱ���������
//2.��������ڴ�й©������
//str��ֵ���ݵ���ʽ��p
//p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч
//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
//�����޷��ҵ������Ի�����ڴ�й©

//����1
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����2
//char* GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//	printf(str);
	//char*str = "abcdef";
	//printf("%s\n", str);
	//printf(str);
	//printf("abcdef");
//----------------------------------------------------------

//����ջ�ռ�ĵ�ַ������
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//

//ͬ���ʹ���
//int* test()
//{
//	//static int a = 10;//��̬��static�ӳ���������
//	int a = 10;//ջ�� 
//	return &a;
//}
//
//int main()
//{
//	int*p = test();
//	*p = 20;//
//	return 0;
//}

//ͬ��������
//�����ڵĿռ����free������ʧ������������ȷ
// int* test()
//{
//	int *ptr = malloc(100);//����
//	return ptr;
//}
//
//int main()
//{
//	int *p = test();
//
//	return 0;
//}
//----------------------------------

//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й©
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//---------------------------------------
//
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}
//��������û�����⣬��������ܴ�


//������
void Test(void)
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
	str = NULL;

	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();

	return 0;
}

