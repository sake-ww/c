#define _CRT_SECURE_NO_WARNINGS 1

//今天的代码上传有点问题
//这是第二次上传

#include <stdio.h>
//枚举

//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//颜色
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = RED;
//	return 0;
//}
//个人理解：enum Sex s =；后面只能跟 MALE,FEMALE,SECRET 防止自己出错。
//同理：enum Color c。
//------------------------------------------------------------------------------
//enum Color//颜色
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	printf("%d %d %d ", RED, GREEN, BLUE);//0 1 2
//	return 0;
//}
//RED, GREEN, BLUE这三个随便一个在enum Color内赋值，前面不变，后面加一。
//int main 内不能赋值（即使令RED=0，也是错误的）。
//------------------------------------------------------------------------------
//枚举和#define
//enum Color//颜色
//{
//	RED,
//	GREEN,
//	BLUE
//};
//这段代码等同于
//#define RED 0
//#define GREEN
//#define BLUE

//枚举的优点
//为什么使用枚举？
//我们可以使用 #define 定义常量，为什么非要使用枚举？ 枚举的优点：
//1. 增加代码的可读性和可维护性
//2. 和#define定义的标识符比较枚举有类型检查，更加严谨。
//3. 防止了命名污染（封装）
//4. 便于调试
//5. 使用方便，一次可以定义多个常量

//#define 使用起来不好，会有很多东西可以替代她，所以以后尽量少用。

//枚举有很多优点，需要以后不断探索，才能找到她的好处。

//今天的代码上传有点问题
//这是第二次上传