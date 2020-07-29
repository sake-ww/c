#define _CRT_SECURE_NO_WARNINGS 1

//const和宏的区别
#include <iostream>
using namespace std;
#define  pi "3.14159"//万一写错多写了""
void testfunc()
{
	int r = 2;
	double s = PI*r*r;//直接替换成 double s = "3.14159"*r*r;
	cout << s << endl;
}
int main()
{
	testfunc();
	return 0;
}

//const
//#include <iostream>
//using namespace std;
////const double pi = "3.14";//double类型你给了一个字符串，代码直接就编译不过去（const会进行类型检测）	 
//void Testfunc()
//{
//	int r = 2;
//	double s = pi * r *r;
//	cout << s << endl;
//}
//int main()
//{
//	Testfunc();
//	return 0;
//}

//我们能否将const修饰的结果称为常量？--》可以
//#include <iostream>
//using namespace std;
//void Testfunc()
//{
//	const int a = 10;
//	//要验证被const修饰的a是否为常量，借助定义数组来测试
//	//因为：定义数组时必须要给出数组的大小，而数组的大小必须时常量
//	//编译成功，因为a被const修饰，a时一个常量
//	//注意：在c语言中，被const修饰的变量不能将其称为常量，仍旧时一个变量，只不过该变量不能被修改，即在c语言中，被const修饰的变量是：一个不能被修改的变量，不能将其称为常量 
//	int array[10];//编译成功
//	int array[a];//编译成功
//
//	//编译失败，因为b是一个变量，而定义数组时，需要一个常量来指定数组的大小
//	int b = 10;
//	int array2[b];//编译失败
//}
//int main()
//{
//	Testfunc();
//	return 0;
//}