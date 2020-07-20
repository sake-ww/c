#define _CRT_SECURE_NO_WARNINGS 1


//4 统计素数的个数并求和
//统计给定整数M和N区间内素数的个数并对他们求和。
//输入样例：
//1 10
//输出样例：
//4 17

//参考代码:
#include <stdio.h>
main()
{
	int m = 1, n = 10;
	int count = 0;
	int sum = 0;
	int i;
	if (m == 1){   //1不是素数
		m = 2;
	}
	for (i = m; i <= n; i++){
		int isPrime = 1;
		int j;
		for (j = 2; j <= i / 2; j++){
			if (i%j == 0){
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1){
			sum += i;
			count++;
		}
	}
	printf("%d %d\n", count, sum);
	return 0;
}
