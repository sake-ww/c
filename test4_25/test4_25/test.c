#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//结构体传参
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//int main()
//{
//	struct S s;
//	s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;
//	printf("%d %c %f", s.a,s.c,s.d);
//	return 0;
//}
//---------------------------------
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S tmp)
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//	printf("%d %c %f\n", tmp.a, tmp.c, tmp.d);//可以输出
//	                                          //表明这个传参传递的是类型而不是数值
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(s);
//	printf("%d %c %f", s.a,s.c,s.d);//0   0.00000//第二个%c   //传过去不改变s
//	return 0;
//}
//输出结果为：100 w 3.140000
//            0   0.000000

//tmp和s  的地址不一样
//表明：Init(s);传递的结构体不能被改变，如果想改变，则需要传址

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//	printf("%d %c %f", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	printf("%d %c %f", s.a,s.c,s.d);
//	return 0;
//}
//输出结果为：100 w 3.140000
//            100 w 3.140000

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %f\n", tmp.a, tmp.c, tmp.d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	//打印结构体
//	Print1(s);//打印结构体时，可以直接传s（传值）
//	return 0;
//}

struct S
{
	int a;
	char c;
	double d;
};
void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}
void Print2(struct S* ps)
//void Print2(const struct S* ps)//防止ps被改变
{
	printf("%d %c %f", ps->a, ps->c, ps->d);
}
int main()
{
	struct S s = { 0 };
	Init(&s);
	//打印结构体
	Print2(&s);//打印结构体时，可以直接传s
	           //打印结构体时，传址和s都行。
	return 0;
}





