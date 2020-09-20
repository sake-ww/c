#pragma once


// 队列底层采用连续空间来实现，效果不是很好
// 队列：采用链表的方式实现的

// typedef int QDataType;
typedef struct BTNode* QDataType;

typedef struct QNode
{
	struct QNode* next;
	QDataType data;
}QNode;


typedef struct Queue
{
	QNode* front;
	QNode* rear;
	int size;
}Queue;

void QueueInit(Queue* q);
void QueuePush(Queue* q, QDataType data);
void QueuePop(Queue* q);
QDataType QueueFront(Queue* q);
QDataType QueueBack(Queue* q);
int QueueSize(Queue* q);
int QueueEmpty(Queue* q);
void QueueDestroy(Queue* q);