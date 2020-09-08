#define _CRT_SECURE_NO_WARNINGS 1

2. 反转一个单链表。 
示例:
输入 : 1->2->3->4->5->NULL
输出 : 5->4->3->2->1->NULL
进阶 :
你可以迭代或递归地反转链表。你能否用两种方法解决这道题？

三个指针
typedef struct listNode listNode;
struct ListNode* reverseList(struct ListNode* head)
{
	ListNode* prev = NULL;
	ListNode* cur = head;
	ListNode* next = NULL;

	while (cur)
	{
		next = cur->next;
		cur->next = prev; 
		prev = cur;
		cur = next;
	}
	return prev;
} 

采用头插法
将head中的元素一个一个的用头插法插入新的链表中
typedef struct listNode listNode;
struct ListNode* reverseList(struct ListNode* head)
{
	ListNode* newhead = NULL;
	ListNode* cur = head;
	ListNode* next = NULL;

	while (cur)
	{
		next = cur;
		cur->next = newhead; 
		newhead = cur;
		cur = next;
	}
	return prev;
} 

迭代方法
记录链表中的三个连续节点：reverse, first, second。在每轮迭代中，从原链表中提取first并将它插入逆链表的开头。一直保持first指向原链表剩余节点的首节点，second指向原链表剩余节点的第二个节点，reverse指向逆链表的首节点
public Node reverse(Node x) 
{
	Node first = x;
	Node reverse = null;
	while (first != null) 
	{
		Node second = first.next;
		first.next = reverse;
		reverse = first;
		first = second;
	}
	return reverse;
}


递归方法
假设含有N个节点，先递归颠倒最后N - 1个节点，然后将链表的首节点插入到结果的链表的末端
public Node reverse(Node first)
{
	if (first == null)
		return null;
	if (first.next != null)
		return first;
	Node second = first.next;
	Node rest = reverse(second)
		second.next = first;
	first.next = null;
	return rest;
}

