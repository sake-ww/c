#define _CRT_SECURE_NO_WARNINGS 1


//带头节点的链表来进行优化
//链表中第一个节点中是否存放有效数据，如果不存放有效数据，则为带头节点的链表：如果存放有效数据，则为不带头节点的链表。

//带头节点的链表插入和删除操作比不带头节点的链表简单
//带头节点的单链表
#include<stdio.h>
#include<malloc.h>
typedef struct SHListNode
{
	int data;
	struct SHListNode* next;
}SHListNode;

void SHListPushBack(SHListNode* head, int data)
{
	SHListNode* newNode = (SHListNode*)malloc(sizeof(SHListNode));
	newNode->next = NULL;
	newNode->data = data;	

	SHListNode* tailNode = head;
	while (tailNode->next)
	{
		tailNode = tailNode->next;
	}
	tailNode->next = newNode;
}

void TestHList()
{
	SHListNode headNode;//链表的头节点
	headNode.next = NULL;
	SHListNode(&headNode, 1);
	SHListNode(&headNode, 2);
	SHListNode(&headNode, 3);
	SHListNode(&headNode, 4);
	SHListNode(&headNode, 5);

}
int main()
{
	TestHList();
	return 0;
}
//问题：带头节点的链表，头结点的值域中没有存放有效数据， 能否将链表的长度即链表中有效节点的个数存储到头结点的值域中呢？

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
//整形：int-----------整形有自己的范围，如果里面的数据超过这个范围，我们就表示不了
//字符：char----------同整形一样有一个范围【-128，127】，如果需要往里面存储1000个数据，我们将1000这个数据放到里面就会被截断
//结构体：结构体
};
我的理解：字段这一行代码中，如果我们往这里存储一个数字，用来表示这个链表的长度，我们应该用那个类型来表示？
每一个类型都有自己的上限和下限，例如：char只能表示-128到127，int只能表示，，，我们无法找到一个能够表示的这个数字的类型，所以不行
况且这一行也要表示这个链表中数据的类型

有些书本里面这一行会表示链表中元素的个数，但是我们要清楚，这种做法不可取，一旦链表里面的元素多了，这样表示就不准确了
*/