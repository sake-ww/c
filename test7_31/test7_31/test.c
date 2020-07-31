#define _CRT_SECURE_NO_WARNINGS 1
//1. 删除链表中等于给定值 val 的所有节点。 
//示例:
//输入 : 1->2->6->3->4->5->6, val = 6
//输出 : 1->2->3->4->5
//题目延伸：一个链表里面不一定只有一个6
//6->6->1->2->6->3->4->5->6
//即：1.首节点如果是val---》头删思想
//2.其他节点是val
//prev：cur的前一个节点
//cur：当前正在检测的节点
struct ListNode* removeElements(struct ListNode* head, int val)
{
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;

	while (cur)
	{
		if (cur->val == val)
		{
			//该节点要被删除掉
			if (cur == head)
			{
				//cur为第一个节点，采用头删方式删除
				head = cur->next;
				free(cur);
				cur = head;
			}
			else
			{
				//cur不是第一个节点
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