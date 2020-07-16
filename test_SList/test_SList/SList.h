//SList.h
#pragma once//防止头文件引用重复
typedef int SLDataType;

typedef struct SListNode
{
	//存储一个指向下一个元素的地址	SListNode
	struct SListNode* next; //指向下一个节点的地址
	SLDataType data;//存储该节点中的数据
}SListNode;


//注意：
//如果想要在函数中改变头指针的指向，形参必须为二级指针
//如果不需要在函数中改变头指针的指向，只需要传递一级指针即可
//单链表中我们需要什么操作
void SListPushBack(SListNode** head, SLDataType data);//尾插
//我们往SListNode* list里面插入SLDataType data

void SListPopBack(SListNode** head);//尾删

void SListPushFront(SListNode** head, SLDataType data);//头插 
void SListPopFornt(SListNode** head);//头删

void SListInsertAfter(SListNode* pos, SLDataType data);//任意位置插入 
//任意位置的插入需要给定三个参数，此处只有两个参数
void SListEraseAfter(SListNode* pos);//任意位置删除

//统计链表中有多少个节点
int SListSize(SListNode* head);

//判断链表是否为空
int SListEmpty(SListNode* head);

//在链表list中寻找一下data这个元素，找到返回节点，没有找到返回空
SListNode* SListFind(SListNode* head, SLDataType data);

//将链表中的有效节点销毁
void SListDestroy(SListNode** head);


////
void TestSList();//将单链表做一下