#define _CRT_SECURE_NO_WARNINGS 1

2. ��תһ�������� 
ʾ��:
���� : 1->2->3->4->5->NULL
��� : 5->4->3->2->1->NULL
���� :
����Ե�����ݹ�ط�ת�������ܷ������ַ����������⣿

����ָ��
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

����ͷ�巨
��head�е�Ԫ��һ��һ������ͷ�巨�����µ�������
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

��������
��¼�����е����������ڵ㣺reverse, first, second����ÿ�ֵ����У���ԭ��������ȡfirst����������������Ŀ�ͷ��һֱ����firstָ��ԭ����ʣ��ڵ���׽ڵ㣬secondָ��ԭ����ʣ��ڵ�ĵڶ����ڵ㣬reverseָ����������׽ڵ�
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


�ݹ鷽��
���躬��N���ڵ㣬�ȵݹ�ߵ����N - 1���ڵ㣬Ȼ��������׽ڵ���뵽����������ĩ��
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

