#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//文件的随机读写
//我们在外部将文件内容改为：abcdef
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);
//	//fseek:根据文件指针的位置和偏移量来定位文件指针。
//	//pf：相关的指针
//	//2：偏移量 （可以为负数）
//	//SEEK_END：文件指针的当前位置
//	
//	//SEEK_CUR文件指针的当前位置；
//	//SEEK_END文件的末尾位置；（此时指针在\0前面）
//	//SEEK_SET文件起始位置；
//	//调整pf指向的文件指针 以（文件指针的当前位置）为起点进行偏移 偏移（偏移量）
//
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//ftell：返回文件指针相对于起始位置的偏移量
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//输出：4
//原因:我们在外部的文件内容是abcdef一共六个fseek(pf, -2, SEEK_END)相当于从后往前数两个即：6-2=4

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf, -2, SEEK_END);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//此时我们不定位文件指针，默认打开文件的位置是起始位置
//所以输出：0

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf, -2, SEEK_END);
//	fgetc(pf);
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//此时我们读取一个，此时文件指针会向后面偏移一个
//所以输出为：1

//rewind：让文件指针的位置回到文件的起始位置
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);//此时我们读取一个，此时文件指针会向后面偏移一个
//	printf("%c\n", ch);
//
//	rewind(pf);//将指针的位置返回至起始位置
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//输出：a
//      a
//----------------------------------------------------------------------
//文件结束判定feof

//牢记：在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
//而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。

//1. 文本文件读取是否结束，判断返回值是否为EOF （fgetc），或者NULL（fgets）
//2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。

//int main()
//{
//	//EOF  转到定义会发现其值为-1
//	//feof();//EOF - end of file - 文件结束标志
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	int ch = fgetc(pf);
//	printf("%d\n", ch);//-1
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//此时我们将外部文件test.txt里面内容改为：（空）
//运行代码（输出外部文件里面的内容）：-1

//延申perror(不需要引用头文件）
//int main()
//{
//	//strerror - 把错误码对应的错误信息的字符串地址返回
//	//printf("%s\n", strerror(errno));
//	
//	//perror
//	FILE* pf = fopen("test2.txt", "r");//test2.txt文件不存在
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//读文件
//  //。。。。。	
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//输出：open file test2.txt：No such file or directory（容易发现具体错误）
//（完全可以替代strerror(errno)）

//外部文件test.txt内容改为：abcdef
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");
		return 0;
	}
	//读文件
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}

	fclose(pf);
	pf = NULL;

	return 0;
}




