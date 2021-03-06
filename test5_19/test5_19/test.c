#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//预处理内容总结

//我们经常写一个文件test.c
//他是一个叫做源文件或者源程序的东西
//这个test.c文件经过一个详细的处理会变成test.exe文件
//test.exe可执行程序
//过去我们没有关注这整个过程，我们只是关注这个过程中出现错误我们该怎么办？
//实际上test.c经过（编译）（链接）才会变成test.exe文件
//文件预处理就是解释（编译）（链接）这两个过程
//---------前言

//延申：test.c---（编译)（链接）--->test.exe--(运行）-->

//我们先写一个正确的代码（随便写）
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//例：你写的代码保存在桌面
//先不运行上述代码，从桌面打开今日写的代码文件，此时会出现一些小文件，自己截图
//退出文件
//运行代码，打开文件，此时会发现出来一个新的文件Debug
//Debug调试版本
//打开Debug文件会发现一个叫做test.exe的文件
//双击这个文件，则会运行这个文件，双击，此时会发现屏幕一闪而过
//退出上一级
//打开（和今日写的代码文件）一样的文件
//此时也会出现一个Debug文件，打开Debug这个文件
//此时需要关注一个文件夹（test.obj ）

//这个过程会出现一些中间运行的文件，即：（编译链接）产生的东西
//test.c-- - （编译)（链接）--->test.exe
//test.exe可执行程序

//程序的翻译环境和执行环境
//在ANSI C的任何一种实现中，存在两个不同的环境。
//第1种是翻译环境，在这个环境中源代码被转换为可执行的机器指令。
//解释:桌面打开文件--->打开Debug文件--->用notepad++打开（test.exe）
//此时出现一大堆我们看不懂的内容，因为里面的内容是用二进制写的，
//即：test.exe里面是二进制信息（二进制文件）
//test.c-- - （编译)（链接）--->test.exe--(运行）-->
//test.c 里面是 ：c代码。c代码是文本文件

//第2种是执行环境，它用于实际执行代码。

//通俗解释：
//test.c到test.exe之间的过程所依赖的整个环境被叫做：翻译环境
//test.exe--（执行）-->  所依赖的环境叫做运行环境 

//翻译环境
//一个工程里面会有几个文件
//此时我们创建一个add.c源文件
//int main(int x, int y)
//{
//	return  x + y;
//}

//源文件------》编译器---------》目标文件--丨
//                                         丨
//源文件------》编译器---------》目标文件--丨
//                                         丨
//源文件------》编译器---------》目标文件--丨
//                                         丨
//链接库------》连接器《---------------------
//                丨
//                v
//             可执行程序

//一个工程会有多个 （.c文件）对应上面图片的（源文件）
//任何一个源文件都会单独作为一个单元被编译器的单独处理会生成自己对应的目标文件
//翻译环境中的编译工作便是由编译器完成的
//test.obj叫做 
//object 中文翻译：对象；目标



