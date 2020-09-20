#pragma once


// ���еײ���������ռ���ʵ�֣�Ч�����Ǻܺ�
// ���У���������ķ�ʽʵ�ֵ�

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