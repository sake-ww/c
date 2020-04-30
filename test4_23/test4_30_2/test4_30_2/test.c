#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//联合-联合体-公用特
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	//联合变量的定义
//	union Un un;
//	//计算连个变量的大小
//	printf("%d\n", sizeof(un));//4
//
//	printf("%d\n", &un);
//	printf("%d\n", &(un.i));
//	printf("%d\n", &(un.c));
//	//输出值（地址）一样
//	return 0;
//}
//联合（共用体）
//联合类型的定义
//联合也是一种特殊的自定义类型 这种类型定义的变量也包含一系列的成员，特征是这些成员公用同一块
//空间（所以联合也叫共用体）。
//
//联合的特点
//联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小（因为
//联合至少得有能力保存最大的那个成员）。


//面试题：
//判断当前计算机的大小端存储
//int main()
//{
//	int a = 1;
//	if (1 == *(char*)&a)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	//int a = 0x11223344;
//	//
//	//低地址-------------------->高地址
//	//....[][][][][11][22][33][44][][][][][][][]...  大端字节序存储模式
//	//....[][][][][44][33][22][11][][][][][][][]...  小端字节序存储模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序问题
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return *(char*)&a;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//int check_sys()
//{
//	//匿名结构体类型，因为用一次，所以匿名，用完直接消失
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}




//求联合体大小
//union Un
//{
//	int a;//4 8     4
//	char arr[5];//1 8     1
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//8
//	return 0;
//}
//---------------------------------------------------------------------以下不属于联合体内容
//计算enum的大小
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));//4
//	return 0;
//}
//原因：enum Sex s = （这里只能是一个值，即一个整形）
//一般系统内定枚举的类型为 int
