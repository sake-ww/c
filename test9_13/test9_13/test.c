#define _CRT_SECURE_NO_WARNINGS 1
 5. 将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
示例：
输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4

方法：将链表1和链表2中的每一个元素依次进行比较，将小的元素依次往新链表中进行尾插
typedef struct ListNode listNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
	if (NULL == l1)
		return l2;
	if (NULL == l2)
		return l1;

	//l1和l2均不为空
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

1和2 里面有些内容有点重复

修改一下
typedef struct ListNode listNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
	if (NULL == l1)
		return l2;
	if (NULL == l2)
		return l1;

	//l1和l2均不为空
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

带头节点的链表来进行优化
链表中第一个节点中是否存放有效数据，如果不存放有效数据，则为带头节点的链表：如果存放有效数据，则为不带头节点的链表。

带头节点的链表插入和删除操作比不带头节点的链表简单
带头节点的单链表
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
	SHListNode headNode;//链表的头节点
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