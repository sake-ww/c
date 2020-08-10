#define _CRT_SECURE_NO_WARNINGS 1

//12. 对链表进行插入排序。
//插入排序算法：
//插入排序是迭代的，每次只移动一个元素，直到所有元素可以形成一个有序的输出列表。
//每次迭代中，插入排序只从输入数据中移除一个待排序的元素，找到它在序列中适当的位置，并将其插入。
//重复直到所有输入数据插入完为止。
//示例 1：
//输入 : 4->2->1->3
//输出 : 1->2->3->4
//示例 2：
//输入 : -1->5->3->4->0
//输出 : -1->0->3->4->5

struct ListNode* insertionSortList(struct ListNode* head)
{
	//链表为空或者链表中只有一个节点
	if (NULL == head || NULL == head->next)
		return  head;

	//链表中至少有两个节点
	//从原链表中获取一个节点将其插入到新链表当中
	struct ListNode* newHead = NULL;
	struct ListNode* cur = head;
	while (cur)
	{
		//cur即为需要向新链表中插入的节点
		head = cur->next;

		//新链表中有节点，找新插入节点的位置
		struct ListNode* insertPos = newHead;
		struct ListNode* insertPosPrev NULL;


		while (insertPos)
		{
			if (cur->val > insertPos->val)
			{
				insertPosPrev = insertPos;
				insertPos = insertPos->next;
			}
			else
			{
				break;
			}
		}
		//cur比新链表中所有的节点都小--头插
		if (NULL == insertPosPrev)
		{
			//头插
			cur->next = newHead;
			newHead = cur;
		}
		else
		{
			//cur节点中的数据比insertPos节点中的数据小
			cur->next = insertPos;
			insertPosPrev->next = cur;
		}
		cur = head;
	}
	return newHead;
}
//原理：依次从原链表中取节点，将其插入到新链表中
//1.从原链表中取一个节点
//2.将该节点从原链表张删除
//3.在新链表中找cur的插入位置
//4.将cur节点插入到新链表中pos位置之前