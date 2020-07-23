#define _CRT_SECURE_NO_WARNINGS 1


//6 求数列的前N想和
//计算2 / 1 + 3 / 2 + 5 / 3 + 8 / 8 + …的前N项之和，注：由第2项起，每一项的分子是前一项的分子与分母之和，分母是前一项的分子。
//输入样例：
//20
//输出样例：
//32.66
//参考代码：
#include <stdio.h>
main()
{
	int n;
	scanf("%d", &n);
	double sub, mom, sum, t, i;
	sub = 2;
	mom = 1;
	for (i = 1; i <= n; i++){
		sum += sub / mom;
		t = sub;
		sub = sub + mom;
		mom = t;
	}
	printf("%0.2f\n", sum);
	return 0;
}