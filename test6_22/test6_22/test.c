#define _CRT_SECURE_NO_WARNINGS 1

//1、/*输出9*9口诀。共9行9列，i控制行，j控制列。*/
//
//#include <stdio.h>
//
//int main()
//
//{
//	int i, j, result;
//
//	for (i = 1; i<10; i++)
//
//	{
//
//		for (j = 1; j<10; j++)
//
//		{
//
//			result = i*j;
//
//			printf("%d*%d=%-3d", i, j, result);/*-3d表示左对齐，占3位*/
//
//		}
//
//		printf(" ");/*每一行后换行*/
//
//	}
//
//	return 0；
//
//}
//
//
//
//2、/*古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？ 
//
//  兔子的规律为数列1,1,2,3,5,8,13,21....*/
//
//#include <stdio.h>
//
//  int main()
//
//{
//
//	  long f1, f2;
//
//	  int i;
//
//	  f1 = f2 = 1;
//
//	  for (i = 1; i <= 20; i++)
//
//	  {
//		  printf("%12ld %12ld", f1, f2);
//
//		  if (i % 2 == 0) printf(" ");/*控制输出，每行四个*/
//
//		  f1 = f1 + f2; /*前两个月加起来赋值给第三个月*/
//
//		  f2 = f1 + f2; /*前两个月加起来赋值给第三个月*/
//
//	  }
//
//  }
//
//
//
//3、/*判断101-200之间有多少个素数，并输出所有素数及素数的个数。 
//
//  程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，
//
//  则表明此数不是素数，反之是素数。*/
//
//#include <stdio.h>
//
//#include <math.h>
//
//  int main()
//
//{
//
//	  int m, i, k, h = 0, leap = 1;
//
//	  printf(" ");
//
//	  for (m = 101; m <= 200; m++)
//
//	  {
//		  k = sqrt(m + 1);
//
//		  for (i = 2; i <= k; i++)
//
//		  if (m%i == 0)
//
//		  {
//			  leap = 0; break;
//		  }
//
//		  if (leap) /*内循环结束后，leap依然为1，则m是素数*/
//
//		  {
//			  printf("%-4d", m); h++;
//
//			  if (h % 10 == 0)
//
//				  printf(" ");
//
//		  }
//
//		  leap = 1;
//
//	  }
//
//	  printf(" The total is %d", h);
//
//	  return 0;
//
//  }
//
//
//
//
//
//
//
//4、/*一个数如果恰好等于它的因子之和，这个数就称为“完数”。
//
//  例如6=1＋2＋3.编程找出1000以内的所有完数。*/
//
//#include <stdio.h>
//
//  int main()
//
//{
//
//	  static int k[10];
//
//	  int i, j, n, s;
//
//	  for (j = 2; j<1000; j++)
//
//	  {
//
//		  n = -1;
//
//		  s = j;
//
//		  for (i = 1; i
//
//		  { if ((j%i) == 0)
//
//		  {
//			  n++;
//
//			  s = s - i;
//
//			  k[n] = i;
//
//		  }
//
//		  }
//
//		  if (s == 0)
//
//		  {
//			  printf("%d is a wanshu: ", j);
//
//			  for (i = 0; i
//
//				  printf("%d,", k[i]);
//
//			  printf("%d ", k[n]);
//
//		  }
//
//	  }
//
//	  return 0;
//
//  }
//
//
//
//5、/*下面程序的功能是将一个4×4的数组进行逆时针旋转90度后输出，要求原始数组的数据随机输入，新数组以4行4列的方式输出。
//
//  请在空白处完善程序。*/
//
//#include <stdio.h>
//
//  int main()
//
//{
//	  int a[4][4], b[4][4], i, j; /*a存放原始数组数据，b存放旋转后数组数据*/
//
//	  printf("input 16 numbers: ");
//
//	  /*输入一组数据存放到数组a中，然后旋转存放到b数组中*/
//
//	  for (i = 0; i<4; i++)
//
//	  for (j = 0; j<4; j++)
//
//	  {
//		  scanf("%d", &a[i][j]);
//
//		  b[3 - j][i] = a[i][j];
//
//	  }
//
//	  printf("array b: ");
//
//	  for (i = 0; i<4; i++)
//
//	  {
//		  for (j = 0; j<4; j++)
//
//			  printf("%6d", b[i][j]);
//
//		  printf(" ");
//
//	  }
//
//	  return 0;
//
//  }
//
//
//
//6、/*编程打印直角杨辉三角形*/
//
//#include <stdio.h>
//
//int main()
//
//{
//	int i, j, a[6][6];
//
//	for (i = 0; i <= 5; i++)
//
//	{
//		a[i][i] = 1; a[i][0] = 1;
//	}
//
//	for (i = 2; i <= 5; i++)
//
//	for (j = 1; j <= i - 1; j++)
//
//		a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//
//	for (i = 0; i <= 5; i++)
//
//	{
//		for (j = 0; j <= i; j++)
//
//			printf("%4d", a[i][j]);
//
//		printf(" ");
//	}
//
//	return 0;
//
//}
//
//
//
//
//
//
//
//7、/*通过键盘输入3名学生4门课程的成绩，
//
//  分别求每个学生的平均成绩和每门课程的平均成绩。
//
//  要求所有成绩均放入一个4行5列的数组中，输入时同一人数据间用空格,不同人用回车
//
//  其中最后一列和最后一行分别放每个学生的平均成绩、每门课程的平均成绩及班级总平均分。*/
//
//#include <stdio.h>
//
//#include <math.h>
//
//  int main()
//
//{
//	  float a[4][5], sum1, sum2;
//
//	  int i, j;
//
//	  for (i = 0; i<3; i++)
//
//	  for (j = 0; j<4; j++)
//
//		  scanf("%f", &a[i][j]);
//
//	  for (i = 0; i<3; i++)
//
//	  {
//		  sum1 = 0;
//
//		  for (j = 0; j<4; j++)
//
//			  sum1 += a[i][j];
//
//		  a[i][4] = sum1 / 4;
//
//	  }
//
//	  for (j = 0; j<5; j++)
//
//	  {
//		  sum2 = 0;
//
//		  for (i = 0; i<3; i++)
//
//			  sum2 += a[i][j];
//
//		  a[3][j] = sum2 / 3;
//
//	  }
//
//	  for (i = 0; i<4; i++)
//
//	  {
//		  for (j = 0; j<5; j++)
//
//			  printf("%6.2f", a[i][j]);
//
//		  printf(" ");
//
//	  }
//
//	  return 0;
//
//  }
//
//
//
//8、/*完善程序，实现将输入的字符串反序输出，
//
//  如输入windows 输出swodniw。*/
//
//#include <string.h>
//
//  int main()
//
//{
//	  char c[200], c1;
//
//	  int i, j, k;
//
//	  printf("Enter a string: ");
//
//	  scanf("%s", c);
//
//	  k = strlen(c);
//
//	  for (i = 0, j = k - 1; i
//
//	  { c1 = c[i]; c[i] = c[j]; c[j] = c1; }
//
//	  printf("%s ", c);
//
//	  return 0;
//
//  }
//
//
//
//9、/*下面程序的功能是从字符数组s中删除存放在c中的字符。*/
//
//#include <stdio.h>
//
//int main()
//
//{
//	char s[80], c;
//
//	int j, k;
//
//	printf(" Enter a string: ");
//
//	gets(s);
//
//	printf(" Enter a character: ");
//
//	c = getchar();
//
//	for (j = k = 0; s[j] != ''; j++)
//
//	if (s[j] != c)
//
//		s[k++] = s[j];
//
//	s[k] = '';
//
//	printf(" %s", s);
//
//	return 0;
//
//}
//
//
//
//10、/*编写一个void sort(int *x,int n)实现将x数组中的n个数据从大到小
//
//   排序。n及数组元素在主函数中输入。将结果显示在屏幕上并输出到文件p9_1.out中*/
//
//#include <stdio.h>
//
//   void sort(int *x, int n)
//
//{
//
//	   int i, j, k, t;
//
//	   for (i = 0; i
//
//	   {
//
//		   k = i;
//
//		   for (j = i + 1; j
//
//		   if (x[j]>x[k]) k = j;
//
//		   if (k != i)
//
//		   {
//
//			   t = x[i];
//
//			   x[i] = x[k];
//
//			   x[k] = t;
//
//		   }
//
//	   }
//
//   }
//
//int main()
//
//{
//	FILE *fp;
//
//	int *p, i, a[10];
//
//	fp = fopen("p9_1.out", "w");
//
//	p = a;
//
//	printf("Input 10 numbers:");
//
//	for (i = 0; i<10; i++)
//
//		scanf("%d", p++);
//
//	p = a;
//
//	sort(p, 10);
//
//	for (; p
//
//	{ printf("%d ", *p);
//
//	fprintf(fp, "%d ", *p); }
//
//	system("pause");
//
//	fclose(fp);
//
//	return 0;
//
//}
