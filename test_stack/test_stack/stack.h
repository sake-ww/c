#pragma once//防止重复包含

typedef int SDataType;

/*
静态栈
#define MAXSIZE 100
typedef struct Stack
{
    SDataType array[MAXSIZE];
	int top;//标记栈顶
}stack;
如果在笔试时需要用到栈，自己可以快速定义一个静态栈，不用考虑扩容
*/
typedef struct Stack
{
	SDataType* array;
	int capacity;//容量
	int size;//栈中元素的个数   栈顶
}Stack;

//注意：
//1.栈中没有任意位置的插入和删除操作  
//2.栈不需要查找--遍历

//初始化
void StackInit(Stack* ps);

//入栈：尾插
void StackPush(Stack* ps, SDataType data);

//出栈：尾删
void StackPop(Stack* ps);

//获取栈顶的元素
SDataType StackTop(Stack* ps);

//获取栈中有效元素的个数
int StackSize(Stack* ps);

//检测栈是否为空
int StackEmpty(Stack* ps);

//销毁
void StackDestroy(Stack* ps);


//测试
void TestStack();









