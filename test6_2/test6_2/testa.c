#define _CRT_SECURE_NO_WARNINGS 1
//3.空间复杂度
//理解：和时间复杂度求法一样，都是数学表达式，是函数中创建变量（对象）个数的函数

//例1：
//unsigned long long Fib(int N)
//{
//	unsigned long long first = 1;
//	unsigned long long second = 1;
//	unsigned long long ret = 1;//保存结果
//	for (int i = 2; i < N; ++i)
//	{
//		ret = first + second;
//		first = second;
//		second = ret;
//	}
//	return ret;
//}
//int main()
//{
//	printf("%d ", Fib(10));
//	return 0; 
//}
//int N,unsigned long long first,unsigned long long second,unsigned long long ret,int i一共创建五个变量
//创建的变量是固定的，因此：
//空间复杂度O(1)