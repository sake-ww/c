#define _CRT_SECURE_NO_WARNINGS 1

//6. 编写代码，以给定值x为基准将链表分割成两部分，所有小于x的结点排在大于或等于x的结点之前 。
//暗藏信息：给定的这个链表是无序的
//输入：2->7->8->4->3->6->5->1->NULL  x= 5
//输出：2-4->3->1->5->7->8->6->5

//方法：将上述链表分割成两个链表，一个链表中存储小于x的节点，一个链表中存储大于等于x的节点，然后将大的链表连接到小的链表后面
//思路：
//对原链表进行遍历，拿到一个节点cur，将该节点从原链表中移除出来
//如果cur->val < x ,则将其插入到head1
//否则将cur尾插到head2
class Partition 
{
public:
	ListNode* partition(ListNode* pHead, int x) 
	{
		if (NULL == pHead)
			return NULL;

		ListNode lessxHead(0);
		ListNode* lessTail = &lessxHead;
		ListNode greatxHead(0);
		ListNode* greatTail = &greatxHead;
		ListNode* cur = pHead;
		while (cur)
		{
			pHead = cur->next;

			//将cur节点尾插到lessxHead || greatxHead
			if (cur->val < x)
			{
				lessxTail->next = cur;
				lessTail = cur;
			}
			else
			{
				greatTail->next = cur;
				greatTail = cur;
			}

			cur = pHead;
		}
		greatTail->next = NULL;
		lessTail->next = greatxHead->next;
		return lessxHead->next; 
	}
};