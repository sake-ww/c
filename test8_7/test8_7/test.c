#define _CRT_SECURE_NO_WARNINGS 1

//7. ����Ļ��Ľṹ��
//��Ŀ������
//����һ�����������һ��ʱ�临�Ӷ�ΪO(n), ����ռ临�Ӷ�ΪO(1)���㷨���ж����Ƿ�Ϊ���Ľṹ��
//����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ����֤������С�ڵ���900��
//����������
//1->2->2->1
//���أ�true 

//���������ռ�
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
//		//�������еĽڵ���õ�array��������
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

//�����������ռ�
//1.�ҵ�ԭ������м�λ��mid
//2.��mid����������еĽڵ��������
//3.������������нڵ�ֵ���Ƿ�һ��

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

		//��������м�ڵ�
		ListNode* fast = A;
		ListNode* slow = A;
		while (fast&&fast->next)
		{
			fast = fast->next->next;
			prevSlow = slow;
			slow = slow->next;
		}

		//�м䰴�ڵ�Ϊslow
		//���м�ڵ㼰��������еĽڵ��������
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

		//��Ҫ��ԭ����ԭ
		ReverseList(rightHead)

		return true;
	}
};