//SList.h
#pragma once//��ֹͷ�ļ������ظ�
typedef int SLDataType;

typedef struct SListNode
{
	//�洢һ��ָ����һ��Ԫ�صĵ�ַ	SListNode
	struct SListNode* next; //ָ����һ���ڵ�ĵ�ַ
	SLDataType data;//�洢�ýڵ��е�����
}SListNode;


//ע�⣺
//�����Ҫ�ں����иı�ͷָ���ָ���βα���Ϊ����ָ��
//�������Ҫ�ں����иı�ͷָ���ָ��ֻ��Ҫ����һ��ָ�뼴��
//��������������Ҫʲô����
void SListPushBack(SListNode** head, SLDataType data);//β��
//������SListNode* list�������SLDataType data

void SListPopBack(SListNode** head);//βɾ

void SListPushFront(SListNode** head, SLDataType data);//ͷ�� 
void SListPopFornt(SListNode** head);//ͷɾ

void SListInsertAfter(SListNode* pos, SLDataType data);//����λ�ò��� 
//����λ�õĲ�����Ҫ���������������˴�ֻ����������
void SListEraseAfter(SListNode* pos);//����λ��ɾ��

//ͳ���������ж��ٸ��ڵ�
int SListSize(SListNode* head);

//�ж������Ƿ�Ϊ��
int SListEmpty(SListNode* head);

//������list��Ѱ��һ��data���Ԫ�أ��ҵ����ؽڵ㣬û���ҵ����ؿ�
SListNode* SListFind(SListNode* head, SLDataType data);

//�������е���Ч�ڵ�����
void SListDestroy(SListNode** head);


////
void TestSList();//����������һ��