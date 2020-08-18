#pragma once

typedef int DLDataType;
typedef struct DHCListNode
{
	DLDataType data;
	struct DHCListNode* next;//ָ��ǰ�ڵ����һ���ڵ�
	struct DHCListNode* prev;//ָ��ǰ�ڵ��ǰһ���ڵ�
}DHCLNode;

DHCLNode* DHCListInit();//��ʼ��
void DHCListPushBack(DHCLNode* pHead, DLDataType data);//β��
void DHCListPopBack(DHCLNode* pHead);//βɾ
void DHCListPushFront(DHCLNode* pHead, DLDataType data);//ͷ��
void DHCListPopFront(DHCLNode* pHead);//ͷɾ
void DHCListInsrt(DHCLNode* pos, DLDataType data);//����λ�ò���
void DHCListErase(DHCLNode* pos);//����λ��ɾ��
DHCLNode* DHCListFind(DHCLNode* pHead, DLDataType data);//Ѱ��ĳ���ڵ�
int DHCListSize(DHCLNode* pHead);//���һ��������Ч�ڵ�
int DHCListEmoty(DHCLNode* pHead);//�п�----��������������Ϊ�ղ���ͬ
//ע�⣺ֻ�ǽ������е���Ч�ڵ�ɾ������ɾ��ͷ
void DHCListClear(DHCLNode* pHead);//���
//��Ҫ��ͷ�ڵ��Լ����е���Ч�ڵ�ȫ��ɾ��
void DHCListDestroy(DHCLNode** pHead);//����