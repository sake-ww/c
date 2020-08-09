#define _CRT_SECURE_NO_WARNINGS 1


//9. 给定一个链表，判断链表中是否有环。 
//为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。 如果 pos 是 - 1，则在该链表中没有环。
//示例 1：
//输入：head = [3, 2, 0, -4], pos = 1
//输出：true
//解释：链表中有一个环，其尾部连接到第二个节点。
//
//示例 2：
//输入：head = [1, 2], pos = 0
//输出：true
//解释：链表中有一个环，其尾部连接到第一个节点。
//
//示例 3：
//输入：head = [1], pos = -1
//输出：false
//解释：链表中没有环。
//
//进阶：
//你能用 O(1)（即，常量）内存解决此问题吗？

//方法：两个指针，一个每次走两步，一个一次走一步，如果两个相遇，则为环，如果不相遇则不为环
bool hasCycle(struct ListNode *head)
{
	struct ListNode* fast = head;
	struct ListNode* slow = head;

	//链表可能带环，也可能不带环
	//如果不带环，fast指针可能先走到链表的末尾
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		if(fast == slow)
			return true;
	}
	return false;
}
//为什么？
//两个指指针每走一次，两个指针之间间隔的节点个数在减少一个--而环最小的长度（环中节点的个数）是一	
//面试官追问：如果让快指针走3或者4步，慢指针每次走一步，能否判断链表带环？
//不行
