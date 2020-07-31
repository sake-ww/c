#define _CRT_SECURE_NO_WARNINGS 1
//1. ɾ�������е��ڸ���ֵ val �����нڵ㡣 
//ʾ��:
//���� : 1->2->6->3->4->5->6, val = 6
//��� : 1->2->3->4->5
//��Ŀ���죺һ���������治һ��ֻ��һ��6
//6->6->1->2->6->3->4->5->6
//����1.�׽ڵ������val---��ͷɾ˼��
//2.�����ڵ���val
//prev��cur��ǰһ���ڵ�
//cur����ǰ���ڼ��Ľڵ�
struct ListNode* removeElements(struct ListNode* head, int val)
{
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;

	while (cur)
	{
		if (cur->val == val)
		{
			//�ýڵ�Ҫ��ɾ����
			if (cur == head)
			{
				//curΪ��һ���ڵ㣬����ͷɾ��ʽɾ��
				head = cur->next;
				free(cur);
				cur = head;
			}
			else
			{
				//cur���ǵ�һ���ڵ�
				prev->next = cur->next;
				free(cur);
				cur = prev->next;
			}
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}