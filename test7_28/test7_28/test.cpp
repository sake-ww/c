#define _CRT_SECURE_NO_WARNINGS 1

//传值和传引用效率比较：
//传值和传引用没有可比性，传值每次传递的时候都是给的一份拷贝，也就是先要将这份变量拷贝出来，然后才可以在函数中用
//但这个引用直接就是一个别名，我们就不用在这个地方进行啊拷贝，所以说引用传递起来效率更高
//验证：

#include <iostream>
using namespace std;
#include <ctime>//clock
//我们先创建一个结构体，这个结构体非常大里面有10000个元素，因而这个结构体所占的空间就十分巨大
struct A
{
	int array[10000];
};
//我们比较下面两个函数的效率
void TestValue(A a)
{}
void TestRef(A& a)
{}

//我们用这个比较他们的效率
void TestFunc()
{
	A a;

	size_t begin1 = clock();	//运行前的时间
	//传值，在传参期间需要进行实参的一份拷贝
	for (int i = 0; i < 10000; i++)
		TestValue(a);//多调用几次，每次调用的时候，都会对TeatValue进行拷贝,每次调用都会对时间所消耗
	size_t end1 = clock();	//运行后的时间

	//同理
	size_t begin2 = clock();
	//引用是别名，在传参期间不需要进行拷贝
	for (int i = 0; i < 10000; i++)
		TestRef(a);
	size_t end2 = clock();

	//打印：
	cout << "传值性能： " << end1 - begin1 << endl;
	cout << "传引用性能： " << end2 - begin2 << endl;
}
int main()
{
	TestFunc();
	return 0;
}
//输出的传值性能数值 远比 传引用性能数值大
//两台电脑运行结果：（1）传值性能25左右（单位毫秒），传引用性能0或者1（2）传值性能10左右，传引用性能0
//注意：这段代码运行时，如果你的电脑安装杀毒软件，会报错
//原因：你的代码运行时，如果需要调用其他程序，则会报错
//解决方法：（1）关闭杀毒软件（2)运行后，添加这段代码所在文件夹为“信任”然后再次运行这段代码
