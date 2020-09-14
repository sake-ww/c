#define _CRT_SECURE_NO_WARNINGS 1

// 问题：带头节点的链表，头结点的值域中没有存放有效数据， 能否将链表的长度即链表中有效节点的个数存储到头结点的值域中呢？

/*
带头节点的单链表与不带头节点的单链表区分：
（1）第一个节点是否保存有效数据，如果第一个节点没有保存有效数据则为带头节点的链表，否则就是不带头节点的链表
（2）带头节点链表操作更加简单---不需要传递二级指针
问题：既然带头节点的链表中第一个节点中不保存有效数据，能否将链表的长度存储到头结点的值域中？
答：不行
struct ListNode
{
    struct LisrNode* next;
	字段：存储节点中的数据//我们以后在这个链表存储什么类型的数据，我们就把这个节点给成什么类型（这个需要根据应用场景来确定）
	整形：int-----------整形有自己的范围，如果里面的数据超过这个范围，我们就表示不了
	字符：char----------同整形一样有一个范围【-128，127】，如果需要往里面存储1000个数据，我们将1000这个数据放到里面就会被截断
	结构体：结构体
};
我的理解：字段这一行代码中，如果我们往这里存储一个数字，用来表示这个链表的长度，我们应该用那个类型来表示？
每一个类型都有自己的上限和下限，例如：char只能表示-128到127，int只能表示，，，我们无法找到一个能够表示的这个数字的类型，所以不行
况且这一行也要表示这个链表中数据的类型

有些书本里面这一行会表示链表中元素的个数，但是我们要清楚，这种做法不可取，一旦链表里面的元素多了，这样表示就不准确了
*/

6. 编写代码，以给定值x为基准将链表分割成两部分，所有小于x的结点排在大于或等于x的结点之前 。
暗藏信息：给定的这个链表是无序的
输入：2->7->8->4->3->6->5->1->NULL  x= 5
输出：2-4->3->1->5->7->8->6->5

方法：将上述链表分割成两个链表，一个链表中存储小于x的节点，一个链表中存储大于等于x的节点，然后将大的链表连接到小的链表后面
思路：
对原链表进行遍历，拿到一个节点cur，将该节点从原链表中移除出来
如果cur->val < x ,则将其插入到head1
否则将cur尾插到head2
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

			将cur节点尾插到lessxHead || greatxHead
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
