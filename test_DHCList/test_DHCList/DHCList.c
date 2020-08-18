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

//只需将头节点申请好
DHCLNode* DHCListInit()//初始化
{
	DHCLNode* head = BuyDHCListNode(0);
	head->next = head;
	head->prev = head;
	return head;
}

void DHCListPushBack(DHCLNode* pHead, DLDataType data)//尾插
{
	assert(pHead);
	DHCListInsrt(pHead, data);
}

void DHCListPopBack(DHCLNode* pHead)//尾删
{
	if (DHCListEmoty(pHead))
		return;

	DHCListEmoty(pHead->prev);
}

void DHCListPushFront(DHCLNode* pHead, DLDataType data)//头插
{
	assert(pHead);
	DHCListInsrt(pHead->next, data);
}

void DHCListPopFront(DHCLNode* pHead)//头删
{
	if (DHCListEmoty(pHead))
		return;

	DHCListEmoty(pHead->next);

}

void DHCListInsrt(DHCLNode* pos, DLDataType data)//任意位置插入
{
	DHCLNode* newNode;
	if (NULL == pos)
		return;

	//1.申请新节点
    newNode = BuyDHCListNode(data);

	//2.先将新节点链接到双向链表中
	newNode->next = pos;
	newNode->prev = pos->prev;

	//3.断开新链表，擦汗如新节点
	pos->prev = newNode;
	newNode->prev->next = newNode;
}
void DHCListErase(DHCLNode* pos)//任意位置删除
{
	if (NULL == pos)
		return;

	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
}

DHCLNode* DHCListFind(DHCLNode* pHead, DLDataType data)//寻找某个节点
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
int DHCListSize(DHCLNode* pHead)//检测一共多少有效节点
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

int DHCListEmoty(DHCLNode* pHead)//判空----链表不存在与链表为空不相同
{
	assert(pHead);
	return pHead->next == pHead;
}

//注意：只是将链表中的有效节点删除，不删除头
void DHCListClear(DHCLNode* pHead)//清空
{
	assert(pHead);
	DHCLNode* cur = pHead->next;

	while (cur != pHead)
	{
		pHead->next = cur->next;
		free(cur);
		cur = pHead->next;
	}

	//链表已经为空
	pHead->next = pHead;
	pHead->prev = pHead;
}

//需要经头节点以及所有的有效节点全部删除
void DHCListDestroy(DHCLNode** pHead)//销毁
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