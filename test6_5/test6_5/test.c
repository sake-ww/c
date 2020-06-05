#define _CRT_SECURE_NO_WARNINGS 1
//����������
// ����Func2��ʱ�临�Ӷȣ�
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
//��������ִ����2N + 10�Σ�ͨ���Ƶ���O�׷���֪����ʱ�临�Ӷ�Ϊ O(N)

// ����Func3��ʱ�临�Ӷȣ�
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
//��������ִ����M + N�Σ�������δ֪��M��N��ʱ�临�Ӷ�Ϊ O(N + M)

// ����Func4��ʱ�临�Ӷȣ�
//void Func4(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//��������ִ����10�Σ�ͨ���Ƶ���O�׷�����ʱ�临�Ӷ�Ϊ O(1)

//4.
// ����strchr��ʱ�临�Ӷȣ�
//const char * strchr(const char * str, int character);
//��������ִ�����1�Σ��N�Σ�ʱ�临�Ӷ�һ�㿴���ʱ�临�Ӷ�Ϊ O(N)
//strchr��ʾ������һ���ַ�character��Ȼ����str���ַ������в����Ƿ�������ַ�

//5.ð������ 
// ����BubbleSort��ʱ�临�Ӷȣ�
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
//��������ִ�����N�Σ��ִ����(N*(N + 1) / 2�Σ�ͨ���Ƶ���O�׷��� + ʱ�临�Ӷ�һ�㿴���ʱ�临�Ӷ�Ϊ O(N ^ 2)
//6.
// ����BinarySearch��ʱ�临�Ӷȣ�
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
//��������ִ�����1�Σ��O(logN)�Σ�ʱ�临�Ӷ�Ϊ O(logN) ps��logN���㷨�����б�ʾ�ǵ���Ϊ2������ΪN����Щ�ط���д��lgN��������ͨ����ֽ���ҵķ�ʽ����logN����ô��������ģ�

//7.
// ����׳˵ݹ�Factorial��ʱ�临�Ӷȣ�
//long long Factorial(size_t N)
//{
//	return N < 2 ? N : Factorial(N - 1)*N;
//}
//ͨ������������ֻ��������ݹ���N�Σ�ʱ�临�Ӷ�ΪO(N)��

//8.
// ����쳲������ݹ�Fibonacci��ʱ�临�Ӷȣ�
//long long Fibonacci(size_t N)
//{
//	return N < 2 ? N : Fibonacci(N - 1) + Fibonacci(N - 2);
//}
//ͨ������������ֻ��������ݹ���2^N�Σ�ʱ�临�Ӷ�ΪO(2 ^ N)�������黭ͼ�ݹ�ջ֡�Ķ��������⣩
//�Ż���O��N��
//unsigned long long Fib(int N)
//{
//	unsigned long long first = 1;
//	unsigned long long second = 1;
//	unsigned long long ret = 1;//������
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