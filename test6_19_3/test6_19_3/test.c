#define _CRT_SECURE_NO_WARNINGS 1

【程序6】
题目：用*号输出字母C的图案。
1.程序分析：可先用'*'号在纸上写出字母C，再分行输出。
2.程序源代码：

代码如下 :

#include"stdio.h"
#include "conio.h"
main()
{
	printf("Hello C-world!\n");
	printf(" ****\n");
	printf(" *\n");
	printf(" * \n");
	printf(" ****\n");
	getch();
}

【程序7】
题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
1.程序分析：字符共有256个。不同字符，图形不一样。　　　　　　
2.程序源代码：

代码如下 :

#include"stdio.h"
#include "conio.h"
main()
{
	char a = 176, b = 219;
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	getch();
}
