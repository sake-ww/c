#define _CRT_SECURE_NO_WARNINGS 1
 5. ��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
ʾ����
���룺1->2->4, 1->3->4
�����1->1->2->3->4->4

������������1������2�е�ÿһ��Ԫ�����ν��бȽϣ���С��Ԫ���������������н���β��
typedef struct ListNode listNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
	if (NULL == l1)
		return l2;
	if (NULL == l2)
		return l1;

	//l1��l2����Ϊ��
	ListNode* newhead = NULL;
	ListNode* cur1 = l1;
	ListNode* cur2 = l2;

	if (cur1->val <= cur2->val)//--------1
	{
		newhead = cur1;
		tailNode = cur1;
		cur1 = cur->next;
	}
	else
	{
		newhead = cur2;
		tailNode = cur2;
		cur2 = cur2->next;
	}
	while (cur1 && cur2)//----------2
	{
		if (cur1->val1 <= cur2->val)
		{
			tailNode->next = cur1;
			cur1 = cur1->next;
		}
		else
		{
			tailNode->next = cur2;
			cur2 = cur2->next;
		}
		tailNode = tailNode->next;
	}
	if (cur1)
		tailNode->next = cur1;
	else
		tailNode->next = cur2;

	return newhead;
}

1��2 ������Щ�����е��ظ�

�޸�һ��
typedef struct ListNode listNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
	if (NULL == l1)
		return l2;
	if (NULL == l2)
		return l1;

	//l1��l2����Ϊ��
	ListNode* cur1 = l1;
	ListNode* cur2 = l2;
	ListNode newhead;
	ListNode* tailNode = &newhead;
	
	while (cur1 && cur2)
	{
		if (cur1->val1 <= cur2->val)
		{
			tailNode->next = cur1;
			cur1 = cur1->next;
		}
		else
		{
			tailNode->next = cur2;
			cur2 = cur2->next;
		}
		tailNode = tailNode->next;
	}
	if (cur1)
		tailNode->next = cur1;
	else
		tailNode->next = cur2;

	return newhead.next;
}

��ͷ�ڵ�������������Ż�
�����е�һ���ڵ����Ƿ�����Ч���ݣ�����������Ч���ݣ���Ϊ��ͷ�ڵ��������������Ч���ݣ���Ϊ����ͷ�ڵ������

��ͷ�ڵ����������ɾ�������Ȳ���ͷ�ڵ�������
��ͷ�ڵ�ĵ�����
#include<stdio.h>
#include<malloc.h>
typedef struct SHListNode
{
	int data;
	struct SHListNode* next;
}SHListNode;

void SHListPushBack(SHListNode* head, int data)
{
	SHListNode* newNode = (SHListNode*)malloc(sizeof(SHListNode));
	newNode->next = NULL;
	newNode->data = data;	

	SHListNode* tailNode = head;
	while (tailNode->next)
	{
		tailNode = tailNode->next;
	}
	tailNode->next = newNode;
}

void TestHList()
{
	SHListNode headNode;//�����ͷ�ڵ�
	headNode.next = NULL;
	SHListNode(&headNode, 1);
	SHListNode(&headNode, 2);
	SHListNode(&headNode, 3);
	SHListNode(&headNode, 4);
	SHListNode(&headNode, 5);

}
int main()
{
	TestHList();
	return 0;
}