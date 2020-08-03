#define _CRT_SECURE_NO_WARNINGS 1

//4. ����һ����������������е�����k����㡣
//Ҫ��ֻ�ܱ���һ������
//��������1����fast�������k������2������slow��fastͬʱ�����ƶ���ֱ��fast�ߵ�����ĩβ��slow��ָ��Ľڵ㼴Ϊ����
//���ؿ��㣺��������ֻ��5��Ԫ�أ���ʱ��Ҫ��������6������û�����Ԫ��--����1����������ʱ����fast������
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
			//���k�Ƿ���������нڵ�ĸ���
			if (NULL == fast)
				return 0;

			fast = fast->next;
		}

		//��2��
		while (fast)
		{
			fast = fast->next;
			slow = slow->next;
		}
		return slow;
	}
};