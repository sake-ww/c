#define _CRT_SECURE_NO_WARNINGS 1
//动态内存管理
//S为一个学生的信息
//我们需要创建一个班级的学生的信息
//假如我们创建50个单位的学生信息，不同班级的学生数目不一样，
//例如：我们创建50个空间，但是实际有30个，这样的话会造成浪费。不可取


//解决方案一：我们创建一个临时变量n，scanf输入他，但是struct S arr[n];中n不能为变量，则此法方法不行，如下图：
//此方法99年的编译器就可以实现，但是许多编译器至今都无法实现。
//struct S
//{
//	char name[20];
//	int age
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[n];//50个struct S 类型的数据
//	return 0;
//}


#include <stdlib.h>
#include <string.h>//strerror
#include <errno.h>//errno
#include <stdio.h>
//malloc，free动态开辟空间和释放空间的函数
//malloc开辟空间 free释放空间
//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(40);//malloc一定需要检查防止申请失败
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);//free释放完指针后的空间会返回指针的地址，此时则需要将指针变为空指针，不然会出现错误。
            //free释放动态空间
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	//malloc(10*sizeof(int))
//	int*p = (int*)calloc(10, sizeof(int));
//  //两者区别1.参数使用不同 2.calloc会初始化函数（空间内全部赋值为零）因为会初始化座椅calloc效率一般没有malloc高
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc
//调整动态开辟内存空间的大小

//
//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个自字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	//
//	//realloc使用的注意事项：
//	//1. 如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2. 如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//   开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//   最后返回新开辟的内存空间地址
//	//3. 得用一个新的变量来接受realloc函数的返回值
//	//   当realloc需要开辟的新空间足够大时，他没有成功开辟，则会返回一个空指针，空指针会改变原来的p
//  //   所以要用一个新的ptr改变p顺便判断一下其是否为null
//	int*ptr = realloc(p, INT_MAX);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//释放内存
//	free(p);//realloc如果新开辟空间，则会直接free原来的空间，这里不需要担心
//	p = NULL;
//
//	return 0;
//}

//练习题错误

//int main()
//{
//	1. 对NULL进行解引用操作
//	int *p = (int*)malloc(40);
//	万一malloc失败了，p就被赋值为NULL
//	*p = 0;//err
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//err
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//改正：malloc开辟空间后一定需要对p进行判断（是否为null）


//int main()
//{
//
//	//2. 对动态开辟的内存的越界访问
//	int *p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3. 对非动态开辟内存的free
int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	free(p);
	p = NULL;
	return 0;
}