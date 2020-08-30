
#include "queues.h"

#include <malloc.h>
#include <assert.h>
#include <stdio.h>
#include <string.h> 
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
}MyCircularQueue;//��������ʵ��


bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);
//ע����Ϻ�������

MyCircularQueue* myCircularQueueCreate(int k)
{
	if (k < 0){//���μ��
		return NULL;
	}
	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	if (obj == NULL){
		return NULL;
	}
	obj->data = (int*)malloc(k * sizeof(int));
	if (obj->data == NULL){
		return NULL;
	}
	//�������ֵ
	obj->front = obj->rear = 0;
	obj->size = k;
	obj->flag = 0;
	return obj;
}


bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
	if (myCircularQueueIsFull(obj)){//�ж϶����Ƿ���
		return false;
	}
	obj->data[obj->rear] = value;//��������
	obj->rear = ((obj->rear + 1) < obj->size) ? (obj->rear + 1) : 0;
	//�ж��Ƿ񵽴�����߽磬��βָ��+1
	if (obj->rear == obj->front){//�ڲ�����Ԫ�غ���ָ��ָ����ͬ��ֻ�ж�����һ�������
		obj->flag = 1;//��������
	}
	return true;
}


bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj)){//�ж϶����Ƿ��
		return false;
	}
	obj->data[obj->front] = 0;//�����ͷ������
	obj->front = ((obj->front + 1) < obj->size) ? (obj->front + 1) : 0;
	//�ж��Ƿ񵽴�����߽�,��ͷָ��+1
	obj->flag = 0;//ֻҪɾ����Ԫ�أ����оͲ�������
	return true;
}


int myCircularQueueFront(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj)){
		return -1;
	}
	return obj->data[obj->front];
}


int myCircularQueueRear(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
	{
		return -1;
	}
	int i = (obj->rear == 0) ? (obj->size - 1) : (obj->rear - 1);
	//βָ��ָ�����ĩβ���ݵ���һ��λ�ã��˴���������Խ��
	return obj->data[i];
}


bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
	if (obj->flag == 0 && obj->front == obj->rear){//����δ�� �� ��βָ��ָ����ͬ����������п�
		return true;
	}
	else{
		return false;
	}
}


bool myCircularQueueIsFull(MyCircularQueue* obj)
{
	if (obj->flag == 1){
		return true;
	}
	else{
		return false;
	}
}

void myCircularQueueFree(MyCircularQueue* obj)
{
	free(obj->data);
	obj->data = NULL;
	free(obj);
	obj = NULL;
}


