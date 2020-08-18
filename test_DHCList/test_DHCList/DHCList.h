#pragma once

typedef int DLDataType;
typedef struct DHCListNode
{
	DLDataType data;
	struct DHCListNode* next;//指向当前节点的下一个节点
	struct DHCListNode* prev;//指向当前节点的前一个节点
}DHCLNode;

DHCLNode* DHCListInit();//初始化
void DHCListPushBack(DHCLNode* pHead, DLDataType data);//尾插
void DHCListPopBack(DHCLNode* pHead);//尾删
void DHCListPushFront(DHCLNode* pHead, DLDataType data);//头插
void DHCListPopFront(DHCLNode* pHead);//头删
void DHCListInsrt(DHCLNode* pos, DLDataType data);//任意位置插入
void DHCListErase(DHCLNode* pos);//任意位置删除
DHCLNode* DHCListFind(DHCLNode* pHead, DLDataType data);//寻找某个节点
int DHCListSize(DHCLNode* pHead);//检测一共多少有效节点
int DHCListEmoty(DHCLNode* pHead);//判空----链表不存在与链表为空不相同
//注意：只是将链表中的有效节点删除，不删除头
void DHCListClear(DHCLNode* pHead);//清空
//需要经头节点以及所有的有效节点全部删除
void DHCListDestroy(DHCLNode** pHead);//销毁