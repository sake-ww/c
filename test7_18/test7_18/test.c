#define _CRT_SECURE_NO_WARNINGS 1

//2 水仙花数
//水仙花数是指一个N位正整数（N >= 3），他的每个位上的数字的N次幂之和等于它本身。例如：153 = 13 + 53 + 33。请计算所有N位水仙花数。
//输入样例：
//3
//输出样例：
//153
//370
//371
//407
//
//参考代码：
#include <stdio.h>
int main()
{
	int n = 3;
	int i;
	int first = 1;
	for (i = 1; i<n; i++)
	{
		first *= 10;
	}
	i = first;
	for (i = first; i<first * 10; i++){
		int sum = 0;
		int p;
		int j;
		int t = i;
		for (j = 1; j <= n; j++)
		{
			p = t % 10;
			int k;
			int pn = p;
			if (p != 0){
				for (k = 1; k<n; k++)
				{
					pn *= p;
				}
				sum += pn;
			}
			t = t / 10;
		}
		if (i == sum)
			printf("%d\n", i);
	}
	return 0;
}
