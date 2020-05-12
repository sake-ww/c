#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>//FILE*
//strerror(errno)
#include <errno.h>
#include <string.h>

//复习：fgetc，fputc
//写文件
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//读文件
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ch = fgetc(pf);//fgetc只能读一个
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//读文件
//此时在外部打开test.txt，在第二行输入一行字符（随便），例如：hello
//int main()
//{
//	char buf[1024] = { 0 };//创建一个临时数组
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	printf("%s\n", buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//输出：
//abc
//
//请按任意键继续.....
//buf里面自带一个换行，所以不用加\n
//解释：我们在文件里面存储时，存储的就是abc\n，当他读取时，也把\n读取了，所以换行了
//      我们自己在文件里面写的hello没有写\n，所以读取时，不读\n
//一次只能读取一行，所以我们用两次

//int main()
//{
//	char buf[1024] = { 0 };//创建一个临时数组
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//fgets（..1......,....2....,...3.....）;
//读取以3为地址的内容，将其放到1里面，读取 2内容（数字） 大小的内容

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//注意：fputs这个写的话如果要换行，自己要写\n，不然就是一行字符

//输入并读取字符串
//int main()
//{
//	//从键盘读取一行文本信息
//	//char buf[1024] = {0};
//	////fgets(buf, 1024, stdin);//从标准输入流读取
//	////fputs(buf, stdout);//输出到标准输出流
//
//	//等价于
//
//	//gets(buf);
//	//puts(buf);
//
//	return 0;
//}

//输入结构体
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "abc" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//读取结构体
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {0};
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//
//	return 0;
//}
// %.2f 可以指定读取小数点后几位



