#define _CRT_SECURE_NO_WARNINGS 1
//运行环境
//程序执行的过程：
//1. 程序必须载入内存中。在有操作系统的环境中：一般这个由操作系统完成。在独立的环境中，程序的载入必须由手工安排，也可能是通过可执行代码置入只读内存来完成。
//解释：当你要执行代码的时候，双击便会运行，其实运行的过程是由操作系统把程序加载到内存里面去
//      如果没有操作系统，则需要手动完成，把程序放到内存里面去运行
//2. 程序的执行便开始。接着便调用main函数。
//3. 开始执行程序代码。这个时候程序将使用一个运行时堆栈（stack），存储函数的局部变量和返回地址。程序同时也可以使用静态（static）内存，存储于静态内存中的变量在程序的整个执行过程一直保留他们的值。
//4. 终止程序。正常终止main函数；也有可能是意外终止。

//预处理详解（预处理=预编译）
//预定义符号（本身就有，不是自己定义的）（自己定义的符号叫做：定义符号）
//例如：
//#define MAX 100 自己定义的符号
//预定义符号：
//__FILE__      //进行编译的源文件
//__LINE__     //文件当前的行号
//__DATE__    //文件被编译的日期
//__TIME__    //文件被编译的时间
//__STDC__    //如果编译器遵循ANSI C，其值为1，否则未定义
//__STDC__    在 vc2013中不支持
//在linux中可以使用
//在linux输入
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}
//输出：1
//举例：
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	return 0;
//}
//运行：此时会出现你现在写的代码的（绝对路径）
//      printf("%d\n", __LINE__);这句代码所在的行数

//应用：写日记
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", 
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);//打印函数名称
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//输出：10个main
//      0-9
//在外部打开会发现有一个log.c文件--》打开
//会出现一些日期，即：我们运行代码时的时间地址等等

//#define  预处理指令，是在预处理阶段处理的
//预处理指令：#define #include #pragma pack（） #if #endif #ifdef #line（#开头的指令基本都是）
//1.#define 定义标识符
//2..#define 定义宏

//1.#define 定义标识符
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX);
//	return 0;
//}
//可以定义任何东西 字符 数字 重命名 一段代码  
//在define定义标识符的时候，不要在最后加上; ?
//解释：#define会把后面定义的所有内容替换过去，如果加入了，容易导致语法错误

//#define 定义宏
//#define 机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏（macro）或定义宏（definemacro）。
//下面是宏的申明方式：
//#define name( parament-list ) stuff 其中的 parament-list 是一个由逗号隔开的符号表，它们可能出现在stuff中。
//注意： 参数列表的左括号必须与name紧邻。 如果两者之间有任何空白存在，参数列表就会被解释为stuff的一部分。

//#define SQUARE(X) X*X
//int main()
//{
//	int ret = SQUARE(5);
//	printf("%d\n", ret);
//	return 0;
//}
//输出：25

//#define SQUARE(X) X*X
//int main()
//{
//	int ret = SQUARE(5 + 1);
//	printf("%d\n", ret);
//	return 0;
//}
//输出：11   5 + 1*5 +1 = 11

//#define SQUARE(X) (X)*(X)
//int main()
//{
//	int ret = SQUARE(5 + 1);
//	printf("%d\n", ret);
//	return 0;
//}
//输出：36

//#define MAX 100
//#define DOUBLE(X) X+X
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX);
//	printf("MAX = %d\n", MAX);
//	//int ret = 10* ((a)+(a));
//	printf("%d\n", ret);
//	return 0;
//}
//输出：MAX=100
//      1100

//#define MAX 100
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX);
//	printf("MAX = %d\n", MAX);
//	printf("%d\n", ret);
//
//	return 0;
//}
//输出：MAX=100
//      2000

//提示：
//所以用于对数值表达式进行求值的宏定义都应该用这种方式加上括号，避免在使用宏时由于参数中的操作符或
//邻近操作符之间不可预料的相互作用。
//#define 替换规则
//在程序中扩展#define定义符号和宏时，需要涉及几个步骤。
//1. 在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，它们首先被替换。
//2. 替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被他们的值替换。
//3. 最后，再次对结果文件进行扫描，看看它是否包含任何由#define定义的符号。如果是，就重复上述处理过程。
//注意：
//1. 宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归。
//2. 当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。
//字符串里面的符号不会被替换

//#和##

//#
//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	print(a);
//	print(b);
//	return 0;
//}
//想输出：the value of 字符 is 字符所对应的数字
//上述方法（函数）绝对不可能解决这个问题

//int main()
//{
//	printf("hello world\n");
//	printf("hello " "world\n");
//	printf("hel" "lo " "world\n");
//	return 0;
//}
//输出都一样：hello word

//#define PRINT(X) printf("the value of " #X " is %d\n", X)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}
//此时便达到我们的要求

//##的作用
//##可以把位于它两边的符号合成一个符号。 它允许宏定义从分离的文本片段创建标识符。
//#define CAT(X, Y) X##Y
//
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", class84);
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n", Class##84);
//	//printf("%d\n", Class84);
//	return 0;
//}