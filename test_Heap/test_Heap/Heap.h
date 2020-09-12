
#pragma once

typedef int HDataType;


int Less(HDataType left, HDataType right);

int Greater(HDataType left, HDataType right);

//函数指针变量:可以指向任何有两个HDataType参数以及一个int类型返回值的所有函数
//Cmp是函数指针变量：Cmp既可以指向less，也可以指向Greater 
//Cmp的类型：int(*)(HDataType, HDataType);//带有两个HDataType的参数，具有一个整形返回值这样的一个函数指针类型
int (*Cmp)(HDataType left, HDataType right);

//CMP就是 int(*)(HDataType, HDataType)类型的别名
typedef int(*CMP)(HDataType, HDataType);

typedef struct Heap
{
	HDataType* array;//存储的元素
	int capacity;//容量
	int size;//堆里面有多少个元素
	CMP Cmp;//函数指针变量
}Heap;


void HeapInit(Heap* hp, int initCap, CMP cmp);//初始化
void HeapCreate(Heap* hp, int* array, int size, CMP cmp);//创建一个堆
void HeapPush(Heap* hp, HDataType data);//插入元素
void HeapPop(Heap* hp);//删除
HDataType HeapTop(Heap* hp);//获取堆顶元素
int HeapEmpty(Heap* hp);//判断堆空不空
int HeapSize(Heap* hp);//堆里面有多少元素 
void HeapDestroy(Heap* hp);//销毁

//---------------------------测试
void TestHeap();