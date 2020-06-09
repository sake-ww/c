#define _CRT_SECURE_NO_WARNINGS 1
//1.µÝ¹é
//
//int Fibon1(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibon1(n - 1) + Fibon1(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fibon1(n);
//	printf("ret=%d", ret);
//	return 0;
//}
//2.·ÇµÝ¹é
//
//int Fibno2(int n)
//{
//	int num1 = 1;
//	int num2 = 1;
//	int tmp = 0;
//	int i = 0;
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 0; i>n - 3; i++)
//		{
//			tmp = num1 + num2;
//			num1 = num2;
//			num2 = tmp;
//		}
//		return tmp;
//	}
//}
//3.Êý×é
//
//public  int Fibno3(int n)
//{
//	List<int> list = new List<int>();
//	list.fib(1);
//	list.fib(1);
//	int count = list.Count;
//	while (count < n)
//	{
//		list.fib(list[count - 2] + list[count - 1]);
//		count = list.Count;
//	}
//	return list[count - 1];
//}



