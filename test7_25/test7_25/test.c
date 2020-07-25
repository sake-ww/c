#define _CRT_SECURE_NO_WARNINGS 1
//8 念数字（switch练习）
//数字和拼音对应关系
//- ：fu
//0：ling
//1：yi
//2：er
//3：san
//4：si
//5：wu
//6：liu
//7：qi
//8：ba
//9：jiu
//输入样例：
//- 5201314
//输出样例：
//参考代码：
#include <stdio.h>
main()
{
	int n;
	printf("请输入数字：");
	scanf("%d", &n);
	printf("输入的数字：%d", n);
	if (n < 0){
		printf("fu ");
		n = -n;
	}
	//此方式不支持0开头的数字
	int m = 1;
	int t = n;
	while (t > 9){
		t /= 10;
		m *= 10;
	}
	do{
		int p = n / m;
		switch (p){
		case 0: printf("ling"); break;
		case 1: printf("yi"); break;
		case 2: printf("er"); break;
		case 3: printf("san"); break;
		case 4: printf("si"); break;
		case 5: printf("wu"); break;
		case 6: printf("liu"); break;
		case 7: printf("qi"); break;
		case 8: printf("ba"); break;
		case 9: printf("jiu"); break;
		}
		if (m >9)
			printf(" ");
		n %= m;
		m /= 10;
	} while (m > 0);
	printf("\n");
	return 0;
}
