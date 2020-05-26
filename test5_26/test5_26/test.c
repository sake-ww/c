#define _CRT_SECURE_NO_WARNINGS 1


//带副作用的宏参数
//当宏参数在宏的定义中出现超过一次的时候，如果参数带有副作用，那么你在使用这个宏的时候就可能出现危险，导致不可预测的后果。副作用就是表达式求值的时候出现的永久性效果。 例如：

//一般情况下的副作用举例：
//方法一：
//int main()
//{
//	int a = 10;
//	int b = a + 1;
//	printf("%d ", a);
//	printf("%d ", b);
//	return 0;
//}
//输出：10 11
//方法二：
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("%d ", a);
//	printf("%d ", b);
//	return 0;
//}
//输出：11 11
//解释：我们想要的到一个b=11，我们可以用两种方法，即：方法一和方法二
//      但是方法二会改变a的值，而方法一不会。

//带有宏参数的副作用举例：
//一：
//#define MAX(X, Y)     ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a, b);
//	printf("%d\n", max);//11
//	printf("%d\n", a);//10
//	printf("%d\n", b);//11
//	return 0;
//}

//二：
//#define MAX(X, Y)     ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}
//解释：//int max = ((a++) > (b++) ? (a++) : (b++));
//                    1        2       3       4
//1和2 都会先用a和b，然后对a和b进行++，此时a=11，b==12.
//判断结果：a<b
//执行4，此时输出b，然后对b进行++，此时b=13