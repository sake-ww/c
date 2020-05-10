#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//不能创建临时变量（第三个变量），实现两个数的交换。
//异或方法
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//解释：a = a^b
//      b = a^b^b=a
//      a = a^a^b=b


//加减法
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//
//	return 0;
//}


//编写代码实现：求一个整数存储在内存中的二进制中1的个数。
//1
//int main()
//{
//	int num = 10;
//	int count = 0;//计数
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}//2
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	for (i = 0; i<32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//3
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//sizeof可以求变量（类型）所占空间的大小。
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)40
//	printf("%d\n", sizeof(ch));//(3)10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//++和--运算符
//前置++和--
//前置++和--：
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int x = ++a;
//	//先对a进行自增，然后对使用a，也就是表达式的值是a自增之后的值。x为11。
//	int y = --a;
//	//先对a进行自减，然后对使用a，也就是表达式的值是a自减之后的值。y为10;
//	return 0;
//}

//后置++和--
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int x = a++;
//	//先对a先使用，再增加，这样x的值是10；之后a变成11；
//	int y = a--;
//	//先对a先使用，再自减，这样y的值是11；之后a变成10；
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//程序输出的结果是什么？//a=1 b=2 c=3 d=4


//if (a > 5)
//b = 3;
//else
//b = -3;
//条件操作符exp1 ?exp2 : exp3

// b=(a>5?a:-3)























