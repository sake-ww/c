#define _CRT_SECURE_NO_WARNINGS 1

//给定一个带有头结点 head 的非空单链表，返回链表的中间结点。如果有两个中间结点，则返回第二个中间结点。
//示例 1：
//输入：[1, 2, 3, 4, 5]
//输出：此列表中的结点 3 (序列化形式：[3, 4, 5])
//返回的结点值为 3 。(测评系统对该结点序列化表述是[3, 4, 5])。
//注意，我们返回了一个 ListNode 类型的对象 ans，这样：
//ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, 以及 ans.next.next.next = NULL.
//
//示例 2：
//输入：[1, 2, 3, 4, 5, 6]
//输出：此列表中的结点 4 (序列化形式：[4, 5, 6])
//由于该列表有两个中间结点，值分别为 3 和 4，我们返回第二个结点。
//
//提示：
//给定链表的结点数介于 1 和 100 之间。

//题目隐含信息：链表个数未知
//方法一：先算出链表内元素个数，除以二，然后从头找到这个节点，然后，，，，
//方法二：两个节点fast和slow，fast每次走两步，slow每次走一步，当fast走到末尾时，此时从slow截取
//面试中，一般会要求你的链表只能遍历一遍，因而方法一不合适
//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//
//	while (fast && fast->next)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	return slow;
//}

//延申：当链表个数为偶数个时，上面时取中间两个中后一个，如果要取前一个应如何？
struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	struct ListNode* preslow = head;


	while (fast && fast->next)
	{
		fast = fast->next->next;
		preslow = slow;
		slow = slow->next;
	}
	if (fast)
		return slow;
	else
		return preslow;
}