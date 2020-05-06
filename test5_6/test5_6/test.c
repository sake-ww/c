#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//p没有返回
//	strcpy(str, "hello world");//str仍然是null
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//结果：程序崩溃
//1.运行代码程序会出现崩溃的现象
//2.程序存在内存泄漏的问题
//str以值传递的形式给p
//p是GetMemory函数的形参，只能函数内部有效
//等GetMemory函数返回之后，动态开辟内存尚未释放
//并且无法找到，所以会造成内存泄漏

//改正1
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

//改正2
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

//返回栈空间的地址的问题
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

//同类型错误
//int* test()
//{
//	//static int a = 10;//静态区static延长生命周期
//	int a = 10;//栈区 
//	return &a;
//}
//
//int main()
//{
//	int*p = test();
//	*p = 20;//
//	return 0;
//}

//同类型问题
//堆区内的空间除了free不会消失，所以下面正确
// int* test()
//{
//	int *ptr = malloc(100);//堆区
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

//改
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
//	//忘记释放动态开辟的内存，导致内存泄漏
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
//这个题输出没有问题，但是问题很大


//改正：
void Test(void)
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);//free释放str指向的空间后，并不会把str置为NULL
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

