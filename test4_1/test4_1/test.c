#define _CRT_SECURE_NO_WARNINGS 1

//基本内置类型
//char        //字符数据类型
//short       //短整型
//int         //整形
//long        //长整型
//long long   //更长的整形
//float       //单精度浮点数
//double      //双精度浮点数
////C语言有没有字符串类型？

//基本类型归类
//
//1整形
//char
//unsigned char
//signed char
//short
//unsigned short[int]
//signed short[int]
//int
//unsigned int
//signed int
//long
//unsigned long[int]
//signed long[int]


//2浮点数家族
//float
//double

//3构造类型
//> 数组类型
//> 结构体类型 struct
//> 枚举类型 enum
//> 联合类型 union

//4指针类型
//int *pi;
//char *pc;
//float* pf;
//void* pv;

//5空类型
//void 表示空类型（无类型）
//通常应用于函数的返回类型、函数的参数、指针类型



//原码，反码，补码

//1对于负数而言：
//原码：直接将二进制按照正负数的形式翻译成二进制就可以。
//反码：将原码的符号位不变，其他位依次按位取反就可以得到了。
//补码：反码 + 1就得到补码。

//2对于正数
//正数的原、反、补码都相同。

//对于整形来说：数据存放内存中其实存放的是补码。————重点
//内存中存储的都是补码 且顺序是相反的

//#include<stdio.h>
//int main()
//{
//	int a = 0x12345678;
//	return 0;
//}
//例：
//a在内存中的存储为 78 56 34 12

//大端，小端
//大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中；
//小端（存储）模式，是指数据的低位保存在内存的低地址中，而数据的高位, ，保存在内存的高地址中。


//判断其在内存中存在为大小端？      小端
//#include <stdio.h>
//int check_sys()
//{
//	int i = 1;
//	return (*(char *)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//练习题
//#include <stdio.h>
//int main()
//{
//	char a = -1;                                  正常模式下的char
//	signed char b = -1;                           整形模式下的char
//	unsigned char c = -1;                         正形模式下的char     unsigned表示这个定义下的数字全部为正数
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//a = -1;        b = -1;       c = 255;

//#include <stdio.h> 
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//10000000 00000000 00000000 10000000  原码
//11111111 11111111 11111111 01111111  反码
//11111111 11111111 11111111 10000000  补码
//因为 %U  是打印无符号数 所以打印
//01111111 11111111 11111111 10000000
//即为    429 496 7168

//#include <stdio.h> 
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//char类型在内存中的大小存贮为
//0 1 2 3 4 5 6 7 ，，，，125 126 127 -128 -127 -126 ，，，，，，-3 -2 -1 然后继续0 2 3 4    周而复始
//所以128 = -128

//#include <stdio.h>
//int main()
//{ 
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d ", i + j);
//	return 0;
//}
//
//-20   1,,,00010100   原码
//      1,,,11101011   反码
//	    1,,,11101100   补码
//10    0,,,00001010   原码=反码=    补码
//      1,,,11110110   结果  补码
     //   1,,,11110101         反码
	    //1,,,00001010         原码  即为-10
//结果为10

//#include<stdio.h>
//int main()
//{ 
//	unsigned i;
//	for (i = 9; i >= 0; i++)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//
//当i从9到0时，正常，   当i=0时，i-1=（-1）  因为是unsigned 所以i-1 = 1  然后就死循环

//#include<stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//结过为   255
//char 的大小为   012345   127  -128 -127 -126   -3-2-1  012345

//#include <stdio.h> 
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//255+1=0；所以死循环打印  hello wolrd


//类比一下  其余类型也一样都有最大值与最小值，周而复始的运行  从0 到最大然后到最小




         




















