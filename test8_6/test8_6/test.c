#define _CRT_SECURE_NO_WARNINGS 1

//6. ��д���룬�Ը���ֵxΪ��׼������ָ�������֣�����С��x�Ľ�����ڴ��ڻ����x�Ľ��֮ǰ ��
//������Ϣ����������������������
//���룺2->7->8->4->3->6->5->1->NULL  x= 5
//�����2-4->3->1->5->7->8->6->5

//����������������ָ����������һ�������д洢С��x�Ľڵ㣬һ�������д洢���ڵ���x�Ľڵ㣬Ȼ�󽫴���������ӵ�С���������
//˼·��
//��ԭ������б������õ�һ���ڵ�cur�����ýڵ��ԭ�������Ƴ�����
//���cur->val < x ,������뵽head1
//����curβ�嵽head2
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

			//��cur�ڵ�β�嵽lessxHead || greatxHead
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