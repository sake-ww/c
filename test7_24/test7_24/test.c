#define _CRT_SECURE_NO_WARNINGS 1

//7 约分最简分式
//关键：求分子分母的最大公约数
//输入样例：
//4 / 8
//输出样例：
//1 / 2
//参考代码：

#include <stdio.h>
int main()
{
	int sub, mom, a, b, t;
	scanf("%d/%d", &sub, &mom);
	a = sub;
	b = mom;
	//辗转相除法求最大公约数
	while (b > 0){
		t = a%b;
		a = b;
		b = t;
	}
	printf("%d/%d\n", sub / a, mom / a);
	return 0;
}

