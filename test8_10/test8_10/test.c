#define _CRT_SECURE_NO_WARNINGS 1


//10. 给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 NULL
//结论：给一个指针pH从链表的第一个节点开始移动，给一个指针pM从判环相遇点的位置绕环，ph和pM在入口点的位置相遇

//为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。 如果 pos 是 - 1，则在该链表中没有环。
//说明：不允许修改给定的链表。
//
//示例 1：
//输入：head = [3, 2, 0, -4], pos = 1
//输出：tail connects to node index 1
//解释：链表中有一个环，其尾部连接到第二个节点。
//
//示例 2：
//输入：head = [1, 2], pos = 0
//输出：tail connects to node index 0
//解释：链表中有一个环，其尾部连接到第一个节点。
//
//示例 3：
//输入：head = [1], pos = -1
//输出：no cycle
//解释：链表中没有环。
//进阶：
//你是否可以不用额外空间解决此题？

typedef struct ListNode ListNode
ListNode* hasCycle(ListNode* head)
{
	//检测链表是否带环
	ListNode* fast = head;
	ListNode* slow = head;

	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
			return fast;
	}
}
struct ListNode *detectCycle(struct ListNode *head)
{
	ListNode* pM = hasCycle(head);
	//两个指针不相等时则不带环
	if (fast != slow)
		return NULL;

	ListNode* pH = head;
	while ()
	{
		pH = pH->next;
		pM = pM->next;
	}
	return pM;
}

//前提条件：一个带环链表
//H<-----L-------->E<-----X----->M
//--------------------------------
//                 |             |
//                 ---------------
//                 <---------r--->
//令X+r= R
//判环时（两个指针一快一慢最终会在环内相遇）：
//慢指针走的长度：L+X
//快指针走的长度：L+X+nR  （n属于整数）
//
//可以推出等式：
//2*（L+X）=L+X+nR------》L = nR - X
//
//结论：求环的入口点：给两个指针PH和PM
//PH从链表起始节点开始，PM从相遇点的位置开始遍历链表，两个指针每次各走一步最终PH和PM肯定会在入口点的位置相遇
