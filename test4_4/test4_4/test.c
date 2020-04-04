#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//判断类型大小
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));          //1
//	printf("%d\n", sizeof(short));         //2
//	printf("%d\n", sizeof(int));           //4
//	printf("%d\n", sizeof(long));          //4
//	printf("%d\n", sizeof(long long));     //8
//	printf("%d\n", sizeof(float));         //4
//	printf("%d\n", sizeof(double));        //8
//	printf("%d\n", sizeof(long double));   //8
//	return 0;
//}
//注意：存在这么多的类型，其实是为了更加丰富的表达生活中的各种值。

//#include <stdio.h>
//int global = 2019;//全局变量
//int main()
//{
//	int local = 2018;//局部变量
//	//下面定义的global会不会有问题？
//	int global = 2020;//局部变量
//	printf("global = %d\n", global);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";                              //bit
//	char arr2[] = { 'b', 'i', 't' };                  //bitXXXXXX(打印错误)
//	char arr3[] = { 'b', 'i', 't', '\0' };            //bit
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}
//注意打印时需要加入   \0      {'','','','\0'};

//加入我们要在屏幕上打印一个目录： c : \code\test.c
//我们该如何写代码？

//#include <stdio.h>
//int main()
//{
//	printf("c:\code\test.c\n");
//	return 0;
//}
//这是错误代码，输出结果为       c:code  est.c

//#include <stdio.h>
//int main()
//{
//	//问题1：在屏幕上打印一个单引号'，怎么做？
//	//问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}
//转义字符 释义
//\ ? 在书写连续多个问号时使用，防止他们被解析成三字母词
//\' 用于表示字符常量'
//\“ 用于表示一个字符串内部的双引号
//\\ 用于表示一个反斜杠，防止它被解释为一个转义序列符。
//\a 警告字符，蜂鸣
//\b 退格符
//\f 进纸符
//\n 换行
//\r 回车
//\t 水平制表符
//\v 垂直制表符
//\ddd ddd表示1~3个八进制的数字。 如： \130 X
//\xdd dd表示2个十六进制数字。 如： \x30 0


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));            //6
//	// \32被解析成一个转义字符
//	printf("%d\n", strlen("c:\test\328\test.c"));        //14     c : \t e s t \32 8 \t e s t . c 
//	return 0;
//}


//注释符号
/**/     //c语言
//       //c++

//运用函数，简化代码
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &a, &b);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
////上述代码，写成函数如下：
//#include <stdio.h>
//int Add(int x, int y) {
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//数组的输出，             自己错过
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//static
//代码1
//#include <stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}
 //输出结果 1 1 1 1 1 1 1 1 1 1
//代码2
//#include <stdio.h>
//void test()
//{
//	//static修饰局部变量
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//输出结果：1 2 3 4 5 6 7 8 9 10
//static就是将一个变量固定，方便下次改变。

//全局变量：就是在主函数int main()之外定义的函数。使得今后使用时都是那个值。

//int Add(int x, int y) {
//	return x + y;
//}
////test.c
//int main()
//{
//	printf("%d\n", Add(2, 3));
//	return 0;
//}
//代码2
//static int Add(int x, int y) 
//{
//	return x + y;
//}
////test.c
//int main()
//{
//	printf("%d\n", Add(2, 3));
//	return 0;
//}

////define定义标识符常量
//#define MAX 1000
////define定义宏
//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum = %d\n", sum);
//	sum = 10 * ADD(2, 3);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//#define定义常量和宏，方便今后使用

//int main()
//{
//	int num = 10;
//	&num;//取出num的地址
//	printf("%p\n", &num);//打印地址，%p--以地址的形式打印
//	return 0;
//}
//输出结果不同，原因为，每次存放地址不同

//int main()
//{
//	int num = 10;
//	int *p = &num;
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}
//指针可以改变变量的值

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}
//结果：4 4 4 4 
//在每一个不同的系统（32）（64）内指针大小不一样（4）（8）


//结构体，用来表示复杂的函数。
//struct Stu
//{
//	char name[20];//名字
//	int age;      //年龄
//	char sex[5];  //性别
//	char id[15]; //学号
//};
////结构体的初始化：
////打印结构体信息
//int main()
//{
//	struct Stu s = { "张三", 20, "男", "20180101" };
//	//.为结构成员访问操作符
//	printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
//	//->操作符
//	struct Stu *ps = &s;
//	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps ->id);
//}

//typedef   用来改变定义函数的变量的名字

