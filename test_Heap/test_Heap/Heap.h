
#pragma once

typedef int HDataType;


int Less(HDataType left, HDataType right);

int Greater(HDataType left, HDataType right);

//����ָ�����:����ָ���κ�������HDataType�����Լ�һ��int���ͷ���ֵ�����к���
//Cmp�Ǻ���ָ�������Cmp�ȿ���ָ��less��Ҳ����ָ��Greater 
//Cmp�����ͣ�int(*)(HDataType, HDataType);//��������HDataType�Ĳ���������һ�����η���ֵ������һ������ָ������
int (*Cmp)(HDataType left, HDataType right);

//CMP���� int(*)(HDataType, HDataType)���͵ı���
typedef int(*CMP)(HDataType, HDataType);

typedef struct Heap
{
	HDataType* array;//�洢��Ԫ��
	int capacity;//����
	int size;//�������ж��ٸ�Ԫ��
	CMP Cmp;//����ָ�����
}Heap;


void HeapInit(Heap* hp, int initCap, CMP cmp);//��ʼ��
void HeapCreate(Heap* hp, int* array, int size, CMP cmp);//����һ����
void HeapPush(Heap* hp, HDataType data);//����Ԫ��
void HeapPop(Heap* hp);//ɾ��
HDataType HeapTop(Heap* hp);//��ȡ�Ѷ�Ԫ��
int HeapEmpty(Heap* hp);//�ж϶ѿղ���
int HeapSize(Heap* hp);//�������ж���Ԫ�� 
void HeapDestroy(Heap* hp);//����

//---------------------------����
void TestHeap();