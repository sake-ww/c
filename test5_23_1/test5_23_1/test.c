#define _CRT_SECURE_NO_WARNINGS 1

//【1. 预处理 选项 gcc - E test.c - o test.i 预处理完成之后就停下来，预处理之后产生的结果都放在test.i文件中。】
//此时输入：gcc - E test.c--》回车(进行预编译/预处理)
//此时屏幕会出现一大堆不认识的（预处理之后产生的结果）
//此时生成的这些不好观察，我们可以把它放到文件里面去
//输入：gcc -E test.c > test.i
//（>叫做重定项）（重定项到一个文件里面）
//test.i是新建的文件
//预编译的过程中就会产生test.i维护的文件，此时默认产生这个文件（方便）
//回车--》输入ls--》
//此时便会产生一个test.i文件
//输入：vim test.i     （打开test.i文件）
//此时面前会有855行代码，我们到最后几行去看
//841到855行代码是自己写的代码，上面的都不是
//此时输入：  shift + ; 便会关闭
//观察自己写的代码和test.i文件里面的代码
//自己写的test.c中最前面几行中的#include<stdio.h>被替换成test.i文件中上面的（1-840）
//则可以证明头文件在预处理中，便被已经被翻译
//预处理的过程
//1.#include 头文件的包含（将include里面的内容搬运到文件里面去）
//2.将#include里面的注释删除（我们在看test.i和include<stdio.h>里面会发现）
//  还有test.c里面所有注释都删除
//  注释删除的方法：用空格替换
//3.#difine 预处理会将里面所以的值直接改成目标
//以上皆为文本操作

//【2. 编译 选项 gcc - S test.c 编译完成之后就停下来，结果保存在test.s中。】
//总体：test.i--》test.s文件
//      把c语言代码翻译成汇编代码 
//具体步骤：1.语法分析 2.词法分析 3.语义分析 4.符号汇总
//符号汇总：一般汇总的符号都是函数名，全局变量之类的
//《程序员的自我修养》对具体不走里面的内容进行了详细分析
//输入：gcc - S test.i--》LS
//此时会生成test.s文件 
//test.c--(预编译）gcc - E test.c--》test.i--（编译）gcc - S test.c --》test.s--。。。。。。
//输入：vim test.s（打开test.s文件）
//test.s文件里面放的是汇编指令，写的是汇编代码

//【3. 汇编 gcc - c test.c 汇编完成之后就停下来，结果保存在test.o中。】
//总体：把汇编代码转换成二进制指令；形成符号表	
//输入：ls  看一下现在有什么文件 
//test.c test.i test.s
//输入：gcc - c test.c --》回车--》ls--》
//此时会出现：test.c test.i test.o test.s 
//虚拟机上面的test.o文件就是 我们电脑上面的test.obj文件
//test.o / test.obj  目标文件
//输入：vim test.o（打开）
//会出现一大堆我们看不懂的
//形成符号表：
//add.c文件
//int Add(int x, int y)
//{
//	return  x + y;
//}
//这个里面的符号Add
//test.c文件
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//	return 0;
//}
//这个里面的符号：Add main
//符号表格式：符号  地址

//test.o/test.obj文件经过链接形成test.exe文件（可执行程序）
//链接：1.合并段表 2.符号表的合并和符号的重定位
//1. 合并段表
//以.o为例
//test.o add.o文件是目标文件
//目标文件都有自己的格式：.o文件会把自己分成几个段（elf格式）
//合并段表会把对应的段链接在一起
// 2.符号表的合并和符号的重定位
//直接合并，有时候会遇见相同的符号，但是他们的地址不一样，此时我们要用（有效的）
//以上面代码为例：add.o和test.o文件里面的Add我们选择add.o
//因为test.o文件里面的Add，只是声明，没有实际应用
//add.c文件里面的符号表是： Add 有效地址
//test.c文件里面的符号表是：
//Add 无效地址
//main 有效地址
//当代码运行的时候，运行到符号的时候，他会自动去寻找这个符号的地址，如果没有（无效地址）则会运行错误
