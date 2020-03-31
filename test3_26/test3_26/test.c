#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char x, y;
//	printf("请输入x的值");
//	scanf("%d", &x);
//	if (x<1)
//		y = x;
//	if (x >= 1 && x<10)
//		y = 2 * x - 1;
//	if (x >= 10)
//		y = 3 * x - 11;
//	printf("y=%d\n", y);
//	return 0;
//}
//报告3
int main()
{
	int x;
	int y;
	scanf("%d",&x);
	if (x < 1)
        y = x;
	if (x >= 1 && x < 10)
		y = x * 2 - 1;
		printf("y=%d", y);	
	if (x >= 10)	
		y = 3 * x - 11;
	printf("y=%d", y);
	return 0;
}
//报告3
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 90)
//    	printf("A");	
//	if (a >= 80 && a < 90)
//		printf("B");
//	if (a >= 70 && a < 80)
//		printf("C");
//	if (a >= 60 && a < 70)
//		printf("D");
//	if (a < 60)
//		printf("E");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d\nb=%d",a,b);
//	return 0;
//}
