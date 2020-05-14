#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//对比函数
//scanf/fscanf/sscanf
//printf/fprintf/sprintf

//scanf/printf 是针对标准输入流/标准输出流的 格式化输入/输出语句 
//fscanf/fprintf 是针对所有输入流/所有输出流的 格式化输入/输出语句 
//因为所有所以fscanf/fprintf包含scanf/printf

//sscanf/sprintf
//sscanf/swscanf 
//scanf 从一个字符串里面读取一个格式化的数据（read formatted data from a string） 

//sprintf/swprintf
//写格式化的数据到一个字符串里面
 
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "abcdef" };
//	//将s里面的数据转换为字符串 
//	char buf[1024] = { 0 };
//
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	//输出：100 3.140000 abcdef
//	//我们以%s的形式输出，因为能输出，所以我们成功把他转换为字符串
//	//即sprintf有能力把结构体里面的数据转换为字符串 
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
//	
//	struct S s = { 100, 3.14f, "abcdef" };
//	struct S tmp = { 0 };//新建结构体
//	char buf[1024] = { 0 };
//	//我们从buf里面提取一个结构体，将上一个代码翻译回去 
//	//上一个代码，我们将结构体翻译成字符串，此时我们把字符串翻译回去
//
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	//输出结果：100 3.140000 abcdef
//	
//
//	return 0;
//}
//sscanf/sprintf
//sscanf是从字符串中读取格式化的数据
//sprintf是把格式化数据输出成（存储到）字符串

//二进制的输入与输出

//二进制的输入
//struct S
//{
//
//    char name[20];
//    int age;
//    double score;
//};
//
//int main()
//{
//     struct S s = { "张三", 20, 55.6 };
//
//     FILE* pf = fopen("test.txt", "wb");
//     if (pf == NULL)
//     {
//         return 0;
//     }
//     //二进制的形式写文件
//     fwrite(&s, sizeof(struct S), 1, pf);
//           读取地址  读取大小  读取个数 读取到  
//     fclose(pf);
//     pf = NULL;
//     return 0;
//}
//此时运行程序，在外部打开test.txt文件，会出现：张三。。。（不认识的）
//此时我们便已经把内容以二进制的形式写进文件里面了

//二进制的输出
//struct S
//{
//     char name[20];
//     int age;
//     double score;
//};
//
//int main()
//{
//     //struct S s = { "张三", 20, 55.6 };
//     struct S tmp = { 0 };
//
//     FILE* pf = fopen("test.txt", "rb");
//     if (pf == NULL)
//    {
//         return 0;
//     }
//     //二进制的形式都文件
//     fread(&tmp, sizeof(struct S), 1, pf);
//     printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//     fclose(pf);
//     pf = NULL;
//     return 0;
//}
//运行代码，输出 20 55.600000
//虽然外部文件以二进制的存储我们看不懂，但是内部运行输出没有任何问题










