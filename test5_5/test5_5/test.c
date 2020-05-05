#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//使用malloc和free
//int main()
//{
//	//int *p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
//	////使用
//	//int *p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//	//常规使用malloc开辟空间，realloc扩展空间
//
//	//int *p = realloc(NULL, 40);//malloc(40)realloc也可以代替malloc
    //原理：realloc不需要malloc开辟空间返回的指针，直接用NULL就行。
//  //上下功能相同
//	return 0;
//}

//常见动态内存错误
//1. 对NULL指针解引用操作
//int main()
//{
//	int *p = malloc(40);
//	/
//	*p = 10;//malloc开辟空间失败-对NULL指针解引用
//	return 0;
//}
//原因：有时候开辟空间失败（空间过大ex：INT_MAX）此时malloc返回的就是空指针NULL，
//      返回的NULL是不能使用的
//解决：对p进行相关的判断
//if (p == NULL)
//{
//	return 0;
//}

//int main()
//{
//	//2.对动态开辟内存的越界访问
//	int *p = (int*)malloc(40);//10个int 0-9
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	//越界
	//for (i = 0; i <= 10; i++)//改为i<10
	//{
	//	*(p + i) = i;
	//}
//	free(p);
//	p = NULL;
//	return 0;
//}
//解决：认真计算好内存大小

//3. 对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	//对非动态开辟内存使用free释放
//	free(p);
//	p = NULL;
//	return 0;
//}
//认真判断是否为动态内存空间

//4. 使用free释放动态开辟内存的一部分
//int main()
//{
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)//这里改变了p
//	{
//	*p++ = i;
//	}
//	//回收空间
//    //使用free释放动态开辟内存的一部分
//	free(p);
//	p =NULL;
//	return 0;
//}
//改正：
//for (i = 0; i < 10; i++)
//{
//	*(p + i) = i;//起始位置加下标
//}

//5.对同一块动态内存的多次释放
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放
//	free(p);
//	//。。。。
//	free(p);
//	//。。。。
//	return 0;
//}
//free两次造成多次释放
//改正：1.认真检查
//      2.free后加上p=NULL将其变为空指针

//free释放p后的内存然后返回p的初始地址

//6.动态开辟内存忘记释放（内存泄漏）
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}
//不停的开辟空间而不释放空间，会使得内存一直被占领
//计算机本身有一种保护机制，不会让你一直开辟空间到达一定的时候便会自动停止开辟空间
//但不能过于依赖这种机制，有时候，你在几个不同的地方不停的开辟内存
//还是会造成内存泄露

//题外话：重启电脑可以解决大部分问题，但是软件的进行，会导致你不停的重启