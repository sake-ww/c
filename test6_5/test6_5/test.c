#define _CRT_SECURE_NO_WARNINGS 1
//常见举例：
// 计算Func2的时间复杂度？
//void Func2(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//基本操作执行了2N + 10次，通过推导大O阶方法知道，时间复杂度为 O(N)

// 计算Func3的时间复杂度？
//void Func3(int N, int M)
//{
//	int count = 0;
//	for (int k = 0; k < M; ++k)
//	{
//		++count;
//	}
//	for (int k = 0; k < N; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//基本操作执行了M + N次，有两个未知数M和N，时间复杂度为 O(N + M)

// 计算Func4的时间复杂度？
//void Func4(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//基本操作执行了10次，通过推导大O阶方法，时间复杂度为 O(1)

//4.
// 计算strchr的时间复杂度？
//const char * strchr(const char * str, int character);
//基本操作执行最好1次，最坏N次，时间复杂度一般看最坏，时间复杂度为 O(N)
//strchr表示：给定一个字符character，然后在str（字符串）中查找是否含有这个字符

//5.冒泡排序 
// 计算BubbleSort的时间复杂度？
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}
//基本操作执行最好N次，最坏执行了(N*(N + 1) / 2次，通过推导大O阶方法 + 时间复杂度一般看最坏，时间复杂度为 O(N ^ 2)
//6.
// 计算BinarySearch的时间复杂度？
//int BinarySearch(int* a, int n, int x)
//{
//	assert(a);
//	int begin = 0;
//	int end = n - 1;
//
//	while (begin < end)
//	{
//		int mid = begin + ((end - begin) >> 1);
//		if (a[mid] < x)
//			begin = mid + 1;
//		else if (a[mid] > x)
//			end = mid;
//		else
//			return mid;
//	}
//	return -1;
//}
//基本操作执行最好1次，最坏O(logN)次，时间复杂度为 O(logN) ps：logN在算法分析中表示是底数为2，对数为N。有些地方会写成lgN。（建议通过折纸查找的方式讲解logN是怎么计算出来的）

//7.
// 计算阶乘递归Factorial的时间复杂度？
//long long Factorial(size_t N)
//{
//	return N < 2 ? N : Factorial(N - 1)*N;
//}
//通过计算分析发现基本操作递归了N次，时间复杂度为O(N)。

//8.
// 计算斐波那契递归Fibonacci的时间复杂度？
//long long Fibonacci(size_t N)
//{
//	return N < 2 ? N : Fibonacci(N - 1) + Fibonacci(N - 2);
//}
//通过计算分析发现基本操作递归了2^N次，时间复杂度为O(2 ^ N)。（建议画图递归栈帧的二叉树讲解）
//优化至O（N）
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