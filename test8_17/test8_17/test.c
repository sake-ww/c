#define _CRT_SECURE_NO_WARNINGS 1
//13. 在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 
//在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5

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

			//找重复节点的范围
			while (end)
			{
				if (start->val != end->val)
					break;

				end = end->next;
			}
			//[start,end)区间中的节点删除掉
			if (start->next == end)
			{
				//区间中没有重复的元素
				prev = start;
				start = end;
			}
			else
			{
				//[stert,end)有重复的节点
				while (start != end)
				{
					//头删
					if (start == pHead)
					{
						head = start->next;
						free(shart);
						start = head;
					}
					else
					{
						//其他节点的删除方式
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
//1.找到重复节点区间范围[start,end)
//2.删除重复区间中的节点[start,end)