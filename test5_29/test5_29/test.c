#define _CRT_SECURE_NO_WARNINGS 1
//#undef
//这条指令用于移除一个宏定义。
//#undef NAME
//如果现存的一个名字需要被重新定义，那么它的旧名字首先要被移除。
//#define MAX 100
//int main()
//{
//	printf("MAX = %d\n", MAX);
//#undef MAX
//	printf("MAX = %d\n", MAX);
//	return 0;
//}
//输入这段代码，我们可以明显看见第二个printf("MAX = %d\n", MAX);中的MAX下面有波浪线（有问题），则证明移除成功

//命令行定义
//许多C 的编译器提供了一种能力，允许在命令行中定义符号。用于启动编译过程。 例如：当我们根据同一个源文件要编译出不同的一个程序的不同版本的时候，这个特性有点用处。（假定某个程序中声明了一个某个长度的数组，如果机器内存有限，我们需要一个很小的数组，但是另外一个机器内存大写，我们需要一个数组能够大写。）
//用linux
//int main()
//{
//	int arr[sz] = { 0 };
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//运行：出错
//此时我们输入：gcc test.c -D sz=10
//运行：正常  
//输出：0 1 2 3 4 5 6 7 8 9 
//此时我们输入：gcc test.c -D sz=13
//运行：正常
//输出：0-12的数字

//条件编译：
//在编译一个程序的时候我们如果要将一条语句（一组语句）编译或者放弃是很方便的。因为我们有条件编译指令
//#define DEBUG
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG//如果DEBUG这个被定义过，则执行下面的代码
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG//如果DEBUG这个被定义过，则执行下面的代码
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}
//对比上下代码，我们可以看见第二个代码下面的printf("%d ", arr[i]);明显便灰