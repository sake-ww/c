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
//输出：11


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
//	//printf("%d ", *p3);//这行代码如果运行一定会出错
//	                     //原因*p3为NULL
//	//问题
//	//为什么上面的 int b = p1[-2] + *p2 + sizeof(&array) + sizeof(*p3);可以运行
//	// sizeof(*p3)  对于*p3进行解引用了，为什么没有报错	？
//	return 0;
//}


//解决过程：
//1.解析数组名
//#include<stdio.h>
////我们向对于数组进行打印
////                  数组首地址    数组中有效元素个数
//void PrintArray(int array[], int size)
////void PrintArray(int* array, int size)
////两种方式都可以
//{
//	//printf("%d\n", sizeof(array) / sizeof(array[0]));
//	//这行代码在此处不可以运行
//	//原因：array在此处已经退化为首元素地址
//	//printf("%d\n", sizeof(array) / sizeof(array[0]));
//	// sizeof(array)因为在32位平台下，所以这句代码等于4
//	// sizeof(array[0]))因为在32位平台下，所以这句代码等于4
//	//因此这行代码输出结果为1 
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
//	//在传参期间数组名已经退化为首元素的地址 
//	PrintArray(array, sizeof(array) / sizeof(array[0]));
//	return 0;
//}

//数组名字在两种情况下才代表数组本身--即该段连续的空间
//1.对数组进行取地址 
//2.数组名出现在sizeof之后

//其余数组名表示首元素的地址
//比如：函数传参--》int*

//int* p1 = array;
//int* p2 = array + 1;
//int* p3 = &array[0];
//这三种情况下是等价的

//2.分析其中情况
#include<stdio.h>
int main()
{
	int array[] = { 1, 2, 3, 4, 5 };

	int *p1 = (int*)(&array + 1);
	//&array对于数组名直接取地址---》数组本身
	//&array + 1：相当于跳过这个数组
	//位置在：
	//                丨
	//{ 1, 2, 3, 4, 5 }

	int *p2 = (int*)(array + 1);
	//array相当于数组首元素地址
	//array+1相当于数组第二个
	//位置在：
	//    丨
	//{ 1, 2, 3, 4, 5 }

	char *p3 = NULL;
	//p3指向的是NULL
	//这个指针是一定不可以解引用的
	//解引用必须要看这个空间放的是什么值

	int a = p1[-2] + *p2 + sizeof(&array) + sizeof(*p3);
	//p1[-2]
	//延申：
	//int* p = array;
	//array[2] = *(array + 2) = *(p+2);//这三个是相等的

	//p1[-2]=*（p1-2)//两个等价
	//p1[-2]相当于向后移动了两个位置--》4

	//*p2
	//对这个指针p2进行解引用就是--》2

	//sizeof(&array)
	//sizeof(array)代表：这个数组占的总的字节数
	//sizeof(array)=5*sizeof（int）= 20
	//sizeof(&array)这个就是一个指针
	//指针在32位平台下占了4个字节
	//因此sizeof(&array)=4

	//sizeof(*p3)
	//疑问：p3是空指针，在sizeof后解引用程序为什么没有崩溃？
	//答：sizeof在计算表达式时，不会对这个指针进行解引用的 
	//    sizeof后面跟的是类型
	//sizeof(*p3)相当于sizeof（char）
	//char只占了一个字节
	//因此：sizeof(*p3)=1
	
	printf("%d ", a);//4+2+4+1=11
	return 0;
}

