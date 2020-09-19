#pragma once//��ֹ�ظ�����
#include <stdbool.h>

typedef struct
{
	int *data;//������
	int front;//����ͷ
	int rear;//����β
	int size;//���д�С -> ���Ա�������Խ��  
	int flag;//��־�����Ƿ��� ->   1 ��   0 ����
	//������ô˱�־λ�Ļ���������Ҫ����һλ��λ���� �б� �����Ƿ���
	//������ ͷָ�� �� βָ�����һ��λ�ã���Ŀ�λ��ʱ����������
} MyCircularQueue;//��������ʵ��


bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);
//ע����Ϻ�������

MyCircularQueue* myCircularQueueCreate(int k);


bool myCircularQueueEnQueue(MyCircularQueue* obj, int value);


bool myCircularQueueDeQueue(MyCircularQueue* obj);


int myCircularQueueFront(MyCircularQueue* obj);

int myCircularQueueRear(MyCircularQueue* obj);


bool myCircularQueueIsEmpty(MyCircularQueue* obj);

bool myCircularQueueIsFull(MyCircularQueue* obj);

void myCircularQueueFree(MyCircularQueue* obj);