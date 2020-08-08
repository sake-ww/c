#define _CRT_SECURE_NO_WARNINGS 1



//8. 输入两个链表，找出它们的第一个公共结点。
//编写一个程序，找到两个单链表相交的起始节点。
//如下面的两个链表：
//在节点 c1 开始相交。
//示例 1：
//输入：intersectVal = 8, listA = [4, 1, 8, 4, 5], listB = [5, 0, 1, 8, 4, 5], skipA = 2, skipB = 3
//输出：Reference of the node with value = 8
//输入解释：相交节点的值为 8 （注意，如果两个链表相交则不能为 0）。从各自的表头开始算起，链表 A 为[4, 1, 8, 4, 5]，链表 B 为[5, 0, 1, 8, 4, 5]。在 A 中，相交节点前有 2 个节点；在 B 中，相交节点前有 3 个节点。
//示例 2：
//输入：intersectVal  = 2, listA = [0, 9, 1, 2, 4], listB = [3, 2, 4], skipA = 3, skipB = 1
//输出：Reference of the node with value = 2
//输入解释：相交节点的值为 2 （注意，如果两个链表相交则不能为 0）。从各自的表头开始算起，链表 A 为[0, 9, 1, 2, 4]，链表 B 为[3, 2, 4]。在 A 中，相交节点前有 3 个节点；在 B 中，相交节点前有 1 个节点。
//示例 3：
//输入：intersectVal = 0, listA = [2, 6, 4], listB = [1, 5], skipA = 3, skipB = 2
//输出：null
//输入解释：从各自的表头开始算起，链表 A 为[2, 6, 4]，链表 B 为[1, 5]。由于这两个链表不相交，所以 intersectVal 必须为 0，而 skipA 和 skipB 可以是任意值。
//解释：这两个链表不相交，因此返回 null。
//注意：
//如果两个链表没有交点，返回 null.
//在返回结果后，两个链表仍须保持原有的结构。
//可假定整个链表结构中没有循环。
//程序尽量满足 O(n) 时间复杂度，且仅用 O(1) 内存。

//找到链表的交点？
//1.确定两个链表是否相交------》找到两个链表中的最后一个节点，然后检测最后一个节点的地址是否相同
//2.求交点：第一个公共的节点

//如果链表相交，从交点到链表中最后一个节点都是两个链表中公共的节点

typedef struct listNode ListNode;
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) 
{
	//两个链表只要有一个为空，则不可能相交
	if (NULL == headA || NULL == headB)
		return NULL;

	//两个链表都不为空
	//1.两个链表是否相交：找到链表中的最后一个节点，检测该节点的地址是否相同即可
	ListNode* curA = headA;
	int countA = 1;
	while (curA->next)
	{
		count++;
		curA = curA->next;
	}
	
	ListNode* curB = headB;
	int countB = 1;
	while (curB->next)
	{
		countB++;
		curB = curB->next;
	}

	//检测两个链表中最后一个节点的地址是否相同，不相同则不相交
	if (curA != curB)
		return NULL;

	//求交点
	//让长的链表从起始位置往后走gap步
	curA = headA;
	curB = headB;
	int gap = countA - countB;
	if (gap > 0)
	{
		while (gap--)
			curA = curA->next;
	}
	else
	{
		while (gap++)
		{
			curB = curB->next;
		}
	}

	//不断检测curA和curB是否地址相同
	while (curA != curB)
	{
		curA = curA->next;
		curB = curB->next;
	}

	return curA;
}