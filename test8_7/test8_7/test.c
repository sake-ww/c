#define _CRT_SECURE_NO_WARNINGS 1

//7. 链表的回文结构。
//题目描述：
//对于一个链表，请设计一个时间复杂度为O(n), 额外空间复杂度为O(1)的算法，判断其是否为回文结构。
//给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。
//测试样例：
//1->2->2->1
//返回：true 

//借助辅助空间
//class PalindromeList 
//{
//public:
//	bool chkPalindrome(ListNode* A) 
//	{
//		if (NULL == A)
//			return true;
//
//		int array[900] = { 0 };
//		int size = 0;
//
//		//将链表中的节点放置到array的数组中
//		ListNode*cur = A;
//		while ()
//		{
//			array[size++] = cur->val;
//			cur = cur->next;
//		}
//
//		int left = 0, right = size - 1;
//		while (left < right)
//		{
//			if (array[left] != srray[right])
//				return false;
//
//			left++;
//			right--;
//		}
//		return true;
//	}
//};

//不借助辅助空间
//1.找到原链表的中间位置mid
//2.将mid及其后续所有的节点进行逆置
//3.检测两个链表中节点值域是否一致

class PalindromeList 
{
public:
	ListNode* ReverseList(ListNode* head)
	{
		ListNode* cur = head;
		LIstNode* prev = NULL;
		ListNode* next = NULL;
		while (cur)
		{
			next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
		}

		return prev;
	}
	bool chkPalindrome(ListNode* A) 
	{
		if (NULL == A)
			return0;

		//找链表的中间节点
		ListNode* fast = A;
		ListNode* slow = A;
		while (fast&&fast->next)
		{
			fast = fast->next->next;
			prevSlow = slow;
			slow = slow->next;
		}

		//中间按节点为slow
		//将中间节点及其后续所有的节点进行逆置
		ListNode* rightHead = ReverseList(slow);
		ListNode* curLeft = A;
		ListNode* curRight = rightHead;
		while (curLeft&&curRight)
		{
			if (curLeft->Val != curRight->val)
				return false;

			curLeft = curLeft->next;
			curRight = curRight->next;
		}

		//需要将原链表还原
		ReverseList(rightHead)

		return true;
	}
};