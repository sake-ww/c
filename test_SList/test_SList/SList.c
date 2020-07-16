#define _CRT_SECURE_NO_WARNINGS 1
//无头+单向+非循环链表增删查改实现

#include"SList.h"
#include<malloc.h>
#include<assert.h>
#include<stdio.h>

//申请节点
SListNode* BuySListNode(SLDataType data)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == newNode)
	{
		assert(0);//调试宏，参数为0宏就会触发，非0不会触发
		//我们将其为零，意思就是如果为NULL时，会触发，提醒我们一下
		return NULL;//申请空间失败
	}
	//如果申请空间没有问题
	newNode->next = NULL;
	newNode->data = data;
	return newNode;
}

//尾插 链表中有节点
//过程：
//1.找到链表中的最后一个节点
//2.尾插新节点
//1.（1）链表中没有节点
//       head->NULL
//  （2）链表中有节点
//       head->1->2->3->4->NULL
//                      丨->5->NULL

//想要在函数中通过形参head来修改外部实参head指针的指向，一级指针函数做不到
//因为head是外部实参head的一份拷贝
//因此这里需要传递二级指针

//链表不存在：链表不存在即头指针head都没有定义
//链表为空：head--》NULL，表示链表中没有节点 
//尾插：
void SListPushBack(SListNode** head, SLDataType data)
{
	assert(head);//head必定不为NULL，这里检测的是程序的非法输入 

	//空链表
	SListNode* newNode = BuySListNode(data);//申请节点
	if (NULL == *head)
	{
		*head = newNode;
	}
	else
	{
		//1.找到链表中的最后一个节点
		//  问题?怎么才算是找到了最后一个节点？（next = NULL）
		SListNode* cur = *head;//head不为NULL
		while (cur->next)
		{
			//cur++;不能这样写，因为不是连续的空间 
			cur = cur->next;
		}
		//2.插入新节点
		cur->next = newNode;
	}
}
//1.参数检测
//2.程序逻辑
//尾删：每次要删除链表中的最后一个节点
//      1.找最后一个节点（即next为空的节点）
//      2.删除最后一个节点
void SListPopBack(SListNode** head)
{
	assert(head);//检测非法情况
	if (NULL == *head)
	{
		//空链表
		return;
	}
	else if (NULL == (*head)->next)
	{
		//链表中只有一个节点
		free(*head);
		*head = NULL;
	}
	else
	{
		//链表非空--链表中至少有一个节点
		SListNode* cur = *head;
		SListNode* prev = NULL;
		while (cur->next)
		{ 
			prev = cur;
			cur = cur->next;
		}
		prev->next = cur->next;
		//最后一个节点已经找到
		//删除该节点
		free(cur);
	}
}

//1.参数检测
//2.程序逻辑
void SListPushFront(SListNode** head, SLDataType data)//头插 
{
	assert(head);//保证链表在里面存在
	SListNode* newNode = BuySListNode(data);
	 
	newNode->next = *head;
	*head = newNode;

	//链表在插入时，不需要改变其他元素位置，效率特别高，时间复杂夫O（1）
	//1.空链表
	//if (NULL == *head)
	//{
	//	*head = newNode;
	//}
	//else
	//{
	//    //2.链表有多个节点
	//	newNode->next = *head;
	//	*head = newNode;
	//}
}

//head保存的是头指针的地址
//1.先标记  2.移动head  3.删除节点
void SListPopFornt(SListNode** head)//头删
{
	SListNode* delNode = NULL;
	assert(head);//断言链表存在

	if (NULL == *head)
		return;

	delNode = *head;
	*head = delNode->next;
	free(delNode);
}


void SListInsertAfter(SListNode* pos, SLDataType data)//任意位置插入 
//问题：任意位置的插入需要给定三个参数，此处只有两个参数？
//  答：兼容性，c++中会直接给一个这样的链表，为了和它能够兼容
//问题：给一个为什么插入的是后面呢？
//  答:我们不可能从链表中一个元素推断出这个元素的前面一个元素
//过程：1.让新元素的next指向下一个元素
//      2.让新元素插入的位置（元素）的next指向新元素
{
	SListNode* newNode = NULL;
	if (NULL == pos)
		return;
	
	newNode = BuySListNode(data);
	newNode->next = pos->next;
	pos->next = newNode;
}


//pos不能是最后一个节点
void SListEraseAfter(SListNode* pos)//任意位置删除  删除和上面插入同理
{
	SListNode* delNode = NULL;
	if (NULL == pos || NULL == pos->next)
		return;

	delNode = pos->next;
	pos->next = delNode->next;
	free(delNode);
}


//head指向的就是链表中第一个节点
//统计链表中有多少个节点
int SListSize(SListNode* head)
{
	//assert(head);不能用这个断言，因为此处的如果为空链表，空链表是合法情况

	//if (NULL == head)
	//	return 0;
	//当链表为空时，下面的while不运行，count也是0；重复可删除

	SListNode* cur = head;
	int count = 0;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;

}

//判断链表是否为空
int SListEmpty(SListNode* head)
{
	return NULL == head;
}

//在链表list中寻找一下data这个元素，找到返回节点，没有找到返回空
SListNode* SListFind(SListNode* head, SLDataType data)
{
	SListNode* cur = head;
	while (cur)
	{
		if (cur->data == data)
			return cur;
		cur = cur->next;
	}
	return NULL;
}


//将链表中的有效节点销毁
//采用头删法将列表中一个一个的删除
void SListDestroy(SListNode** head)
{
	assert(head);

	while (*head)
	{
		SListNode* delNode = *head;
		*head = delNode->next;
		free(delNode);
	}
}




//打印一下列表
void PrintSList(SListNode* head)
{
	SListNode* cur = head;
	while (cur)
	{
		printf("%d--->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
////
void TestSList1()//将单链表做一下
{
	SListNode* listhead = NULL;//head是在外部，是实参

	SListPushBack(&listhead, 1);
	SListPushBack(&listhead, 2);
	SListPushBack(&listhead, 3);
	SListPushBack(&listhead, 4);
	SListPushBack(&listhead, 5);

	//SListPushBack(NULL, 5);非法调用，应该使用assert让程序停止下来，调试

	SListPopBack(&listhead);

	PrintSList(listhead);

	SListDestroy(&listhead);//链表测试完，需要将链表中所有元素删除，否则会造成元素丢失。
}

void TestSList2()
{
	SListNode* listhead = NULL;
	SListPushFront(&listhead, 1);
	SListPushFront(&listhead, 2);
	SListPushFront(&listhead, 3);
	SListPushFront(&listhead, 4);
	SListPushFront(&listhead, 5);

	PrintSList(listhead);

	SListDestroy(&listhead);

}

void TestList3()
{
	SListNode* listhead = NULL;

	SListPushBack(&listhead, 1);
	SListPushBack(&listhead, 2);
	SListPushBack(&listhead, 3);
	SListPushBack(&listhead, 4);
	SListPushBack(&listhead, 5);

	SListInsertAfter(SListFind(listhead, 3), 0);
	PrintSList(listhead);
	SListInsertAfter(SListFind(listhead, 100), 10);//没有这个位置，看插入情况
	PrintSList(listhead);

	SListEraseAfter(SListFind(listhead, 0));
	PrintSList(listhead);
	SListEraseAfter(SListFind(listhead, 5));

	PrintSList(listhead);
}

void TestSList()
{
	//TestSList1;
	//TestSList2();
	TestList3();

}

