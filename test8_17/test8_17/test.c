#define _CRT_SECURE_NO_WARNINGS 1
//13. ��һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣 
//��һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣 ���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5

class Solution
{
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		ListNode* start = pHead;
		ListNode* end = NULL;
		ListNode* prev = NULL;

		while (start)
		{
			end = start->next;

			//���ظ��ڵ�ķ�Χ
			while (end)
			{
				if (start->val != end->val)
					break;

				end = end->next;
			}
			//[start,end)�����еĽڵ�ɾ����
			if (start->next == end)
			{
				//������û���ظ���Ԫ��
				prev = start;
				start = end;
			}
			else
			{
				//[stert,end)���ظ��Ľڵ�
				while (start != end)
				{
					//ͷɾ
					if (start == pHead)
					{
						head = start->next;
						free(shart);
						start = head;
					}
					else
					{
						//�����ڵ��ɾ����ʽ
						prev->next = start->next;
						free(start);
						start = prev->next;
					}
				}
			}
		}

		return pHead;
	}
};
//1.�ҵ��ظ��ڵ����䷶Χ[start,end)
//2.ɾ���ظ������еĽڵ�[start,end)