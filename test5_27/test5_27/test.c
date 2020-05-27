#define _CRT_SECURE_NO_WARNINGS 1
//函数和宏进行比较（性能）：
//函数
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
////宏
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//此时没有任何问题，都能进行比较
//------------------
//函数
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//float Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
////宏
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	float c = 3.0f;
//	float d = 4.0f;
//
//	float max = Max2(c, d);
//	printf("max = %lf\n", max);
//
//	max = MAX(c, d);
//	max = ((c) > (d) ? (c) : (d));
//	printf("max = %lf\n", max);
//	return 0;
//}
//如果我们改变比较数字的类型，我们则需要重新写函数，而宏不需要
//如果我们把数字的类型搞错，我们用函数，则可以进行检查
//各有千秋
//---------------------------
////函数
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//float Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
//
////宏
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	//函数在调用的时候
//	//会有函数调用和返回的开销
//	float max = Max2(c, d);
//	printf("max = %lf\n", max);
//
//	//预处理阶段就完成了替换
//	//没有函数的调用和返回的开销
//	max = MAX(c, d);
//	//直接就翻译成：max = ((c) > (d) ? (c) : (d));
//	printf("max = %lf\n", max);
//	return 0;
//}
//先按 f11 --》出现很多文件--》关闭所有选项
//鼠标右键--》转到反汇编--》按f11一直走
//	当出现float max = Max2(c, d);我们观察这句代码下面的反汇编代码
//他执行的代码我们按f11会看到（注意行数）
//同理：运行到max = MAX(c, d);时，我们看反汇编里面运行了多少代码
//明显宏用的比函数的少，则宏效率更高