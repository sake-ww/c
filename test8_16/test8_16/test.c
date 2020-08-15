#define _CRT_SECURE_NO_WARNINGS 1
//11. 给定一个链表，每个节点包含一个额外增加的随机指针，该指针可以指向链表中的任何节点或空节点。要求返回这个链表的深度拷贝。
//我们用一个由 n 个节点组成的链表来表示输入 / 输出中的链表。每个节点用一个 [val, random_index] 表示：
//val：一个表示 Node.val 的整数。
//random_index：随机指针指向的节点索引（范围从 0 到 n - 1）；如果不指向任何节点，则为  null 。
//示例 1：
//输入：head = [[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]
//输出：[[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]
//示例 2：
//输入：head = [[1, 1], [2, 1]]
//输出：[[1, 1], [2, 1]]
//示例 3：
//输入：head = [[3, null], [3, 0], [3, null]]
//输出：[[3, null], [3, 0], [3, null]]
//示例 4：
//输入：head = []
//输出：[]
//解释：给定的链表为空（空指针），因此返回 null。
//
//提示：
//- 10000 <= Node.val <= 10000
//Node.random 为空（null）或指向链表中的节点。
//节点数目不超过 1000 。

//新链表中每个节点的随机指针域赋值：
//1.如果原链表中节点随机指针域指向空或者自己，也让新链表当前节点随机指针域指向NULL或者自己
//2.如果原链表中节点随机指针域指向其他节点
//》》求原链表中当前节点的随机指针域到原链表起始位置的距离dist
//》》给一个指针p让其指向新链表中节点，让p从新链表起始位置往后移动dist步之后指向的节点
//即新链表中当前节点的随机指针域该指向的节点

//方法一：
//1.将原链表拷贝一份，再给每个指针的随机指针域赋值

//方式二：
//1.在原链表每个节点之后插入值相等的新节点
//2.给新插入节点的随即指针域进行赋值
//3.将新插入的节点从原链表中拆下来

typedef struct Node Node;

Node* BuyRandomListNode(int val)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (NULL == newNode)
		return NULL;

	newNode->val = cur->val;
	newNode->next = NULL;
	newNode->random = NULL;

	return newNode;
}
struct Node* copyRandomList(struct Node* head) 
{
	if (NULL == head)
		return NULL;

	//1.在原链表中每个节点后插入值相等的新节点
	Node* cur = head;
	Node* newNode = NULL;
	while (cur)
	{
		newNode = BuyRandomListNode(cur->val)
		if (NULL == newNode)
			return NULL;

		newNode->next = cur->next;
		cur->next = newNode;
		cur = newNode->next;
	}

	//2.给新插入节点的随即指针域进行赋值
	cur = head;
	while (cur)
	{
		newNode = cur->next;
		if (cur->random)
			newNode->random = cur->random->next;

		cur = newNode->next;
	}

	//3.将新节点从原链表中拆下来
	Node* newHead = head->next;
	cur = head;
	while (cur->next)
	{
		newNode = cur->next;
		cur->next = newNode->next;
		cur = newNode;
	}

	return newHead;	 
}