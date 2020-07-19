#define _CRT_SECURE_NO_WARNINGS 1

//3 打印九九口诀表
//本题要求对任意给定的正整数N，输出由1 * 1到N * N的部分口诀表。
//参考代码：
//
#include <stdio.h>

main()
{
	int n = 5, j = 1, i;
	while (j <= n){
		i = 1;
		while (i <= j){
			printf("%d*%d=%d\t", i, j, i*j);
			i++;
		}
		printf("\n");
		j++;
	}

	return 0;
}
