#define _CRT_SECURE_NO_WARNINGS 1

//4. 输入一个链表，输出该链表中倒数第k个结点。
//要求：只能遍历一次链表
//方法：（1）让fast先向后走k步，（2）再让slow与fast同时往后移动，直到fast走到链表末尾，slow所指向的节点即为所求
//隐藏考点：假如链表只有5个元素，此时需要你求倒数第6个，则没有这个元素--》（1）过程运行时，对fast进行判
class Solution
{
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
	{
		if (NULL == pListHead || k == 0)
			return NULL;
		
		ListNode* fast = pListHead;
		ListNode* slow = pListHead;

        //(1)
		while (k--)
		{
			//检测k是否大于链表中节点的个数
			if (NULL == fast)
				return 0;

			fast = fast->next;
		}

		//（2）
		while (fast)
		{
			fast = fast->next;
			slow = slow->next;
		}
		return slow;
	}
};