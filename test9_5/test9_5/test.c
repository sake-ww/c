#define _CRT_SECURE_NO_WARNINGS 1


2.顺序表
2.1概念及结构
顺序表是用一段物理地址连续的存储单元依次存储数据元素的线性结构，一般情况下采用数组存储。在数组
上完成数据的增删查改。
顺序表一般可以分为：
1. 静态顺序表：使用定长数组存储。
2. 动态顺序表：使用动态开辟的数组存储。

 顺序表的静态存储
#define N 100                   //宏：定义N为100
typedef int SLDataType;
typedef struct SeqList         //SeqList：顺序表
{
	  SLDataType array[N]; // 定长数组
    size_t size; // 有效数据的个数
}SeqList;

解释：
	  SLDataType array[N]; // 定长数组
我们定义一个数组的大小
例如：
【1 2 3 4 5          】
我们定义了数组的空间大小，虽然里面只放了5个元素但是里面的空间还是100（给了空间没有占满）
    size_t size; // 有效数据的个数
我们定义了数组的空间大小，但是我们不知道里面有几个元素
【size】将里面的元素记录起来
缺点：我们只能放100个元素，里面的空间大小确定了

改良版：静态只能存储固定的，我们需要动态的（可以改变存储大小的顺序表）
 顺序表的动态存储
typedef struct SeqList
{
	SLDataType* array; // 指向动态开辟的数组（起始位置）
	size_t size; // 有效数据个数
	size_t capicity; // 容量空间的大小（临时开辟的空间大小，当需要增容时，这个数值会改变）
}SeqList;
