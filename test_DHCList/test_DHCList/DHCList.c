#include "DHCList.h"
#include<malloc.h>
#include<assert.h>
#include<stdio.h>
DHCLNode* BuyDHCListNode(DLDataType data)
{
	DHCLNode* newNode = (DHCLNode*)malloc(sizeof(DHCLNode));
	if (NULL == newNode)
	{
		assert(0);
		return NULL;
	}

	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;

	return newNode;
}

//ֻ�轫ͷ�ڵ������
DHCLNode* DHCListInit()//��ʼ��
{
	DHCLNode* head = BuyDHCListNode(0);
	head->next = head;
	head->prev = head;
	return head;
}

void DHCListPushBack(DHCLNode* pHead, DLDataType data)//β��
{
	assert(pHead);
	DHCListInsrt(pHead, data);
}

void DHCListPopBack(DHCLNode* pHead)//βɾ
{
	if (DHCListEmoty(pHead))
		return;

	DHCListEmoty(pHead->prev);
}

void DHCListPushFront(DHCLNode* pHead, DLDataType data)//ͷ��
{
	assert(pHead);
	DHCListInsrt(pHead->next, data);
}

void DHCListPopFront(DHCLNode* pHead)//ͷɾ
{
	if (DHCListEmoty(pHead))
		return;

	DHCListEmoty(pHead->next);

}

void DHCListInsrt(DHCLNode* pos, DLDataType data)//����λ�ò���
{
	DHCLNode* newNode;
	if (NULL == pos)
		return;

	//1.�����½ڵ�
    newNode = BuyDHCListNode(data);

	//2.�Ƚ��½ڵ����ӵ�˫��������
	newNode->next = pos;
	newNode->prev = pos->prev;

	//3.�Ͽ��������������½ڵ�
	pos->prev = newNode;
	newNode->prev->next = newNode;
}
void DHCListErase(DHCLNode* pos)//����λ��ɾ��
{
	if (NULL == pos)
		return;

	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
}

DHCLNode* DHCListFind(DHCLNode* pHead, DLDataType data)//Ѱ��ĳ���ڵ�
{
	assert(pHead);
	DHCLNode* cur = pHead->next;
	while (cur != pHead)
	{
		if (data == cur->data)
			return cur;

		cur = cur->next;
	}
	return NULL;
}
int DHCListSize(DHCLNode* pHead)//���һ��������Ч�ڵ�
{
	assert(pHead);
	DHCLNode* cur = pHead->next;
	int count = 0;
	while (cur != pHead)
	{
		++count;
		cur=cur->next;
	}
	return count;
}

int DHCListEmoty(DHCLNode* pHead)//�п�----��������������Ϊ�ղ���ͬ
{
	assert(pHead);
	return pHead->next == pHead;
}

//ע�⣺ֻ�ǽ������е���Ч�ڵ�ɾ������ɾ��ͷ
void DHCListClear(DHCLNode* pHead)//���
{
	assert(pHead);
	DHCLNode* cur = pHead->next;

	while (cur != pHead)
	{
		pHead->next = cur->next;
		free(cur);
		cur = pHead->next;
	}

	//�����Ѿ�Ϊ��
	pHead->next = pHead;
	pHead->prev = pHead;
}

//��Ҫ��ͷ�ڵ��Լ����е���Ч�ڵ�ȫ��ɾ��
void DHCListDestroy(DHCLNode** pHead)//����
{
	assert(pHead);
	DHCListClear(*pHead);
	free(*pHead);
	*pHead = NULL;
}

void PrintDHCList(DHCLNode* head)
{
	DHCLNode* cur = head->next;
	while (cur != head)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void TestDHCList()
{
	DHCLNode* head = DHCListInit();
	DHCListPushBack(head, 1);
	DHCListPushBack(head, 2);
	DHCListPushBack(head, 3);
	DHCListPushBack(head, 4);
	DHCListPushBack(head, 5);
	PrintDHCList(head);

	DHCListPushFront(head, 0);
	PrintDHCList(head);

	DHCListPopBack(head);
	DHCListPopFront(head);
	PrintDHCList(head);

	DHCListInsrt(DHCListFind(head, 3), 100);
	PrintDHCList(head);

	DHCListErase(DHCListFind(head, 3));
	PrintDHCList(head);

	DHCListDestroy(&head);	

}