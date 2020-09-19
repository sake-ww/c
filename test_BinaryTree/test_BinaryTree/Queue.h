#pragma once//防止重复包含
#include <stdbool.h>

typedef struct
{
	int *data;//数据域
	int front;//队列头
	int rear;//队列尾
	int size;//队列大小 -> 用以避免数组越界  
	int flag;//标志队列是否满 ->   1 满   0 不满
	//如果不用此标志位的话，数组需要留多一位空位用来 判别 队列是否满
	//即：当 头指针 在 尾指针的下一个位置（多的空位）时，队列满。
} MyCircularQueue;//采用数组实现


bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);
//注意加上函数声明

MyCircularQueue* myCircularQueueCreate(int k);


bool myCircularQueueEnQueue(MyCircularQueue* obj, int value);


bool myCircularQueueDeQueue(MyCircularQueue* obj);


int myCircularQueueFront(MyCircularQueue* obj);

int myCircularQueueRear(MyCircularQueue* obj);


bool myCircularQueueIsEmpty(MyCircularQueue* obj);

bool myCircularQueueIsFull(MyCircularQueue* obj);

void myCircularQueueFree(MyCircularQueue* obj);