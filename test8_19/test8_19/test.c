#define _CRT_SECURE_NO_WARNINGS 1
//5.顺序表和链表概念选择题
//概念选择题：
//1.在一个长度为n的顺序表中删除第i个元素，要移动_______个元素。如果要在第i个元素前插入一个元素，要后
//移_________个元素。     A
//A n - i，n - i + 1
//B n - i + 1，n - i
//C n - i，n - i
//D n - i + 1，n - i + 1
//注意：第二问是第i个元素 前 插入
//
//2.取顺序表的第i个元素的时间同i的大小有关(B)
//A 对
//B 错
//应该是和i的位置
//
//3.在一个具有 n 个结点的有序单链表中插入一个新结点并仍然保持有序的时间复杂度是（B）。
//A O（1）
//B O（n）
//C O（n2）
//D O（nlog2n）
//
//4.下列关于线性链表的叙述中，正确的是（C ）。
//A 各数据结点的存储空间可以不连续，但它们的存储顺序与逻辑顺序必须一致
//B 各数据结点的存储顺序与逻辑顺序可以不一致，但它们的存储空间必须连续
//C 进行插入与删除时，不需要移动表中的元素
//D 以上说法均不正确
//
//5.设一个链表最常用的操作是在末尾插入结点和删除尾结点，则选用（D）最节省时间。
//A 单链表
//B 单循环链表
//C 带尾指针的单循环链表
//D 带头结点的双循环链表
//
//6.链表不具有的特点是（C）。
//A 插入、删除不需要移动元素
//B 不必事先估计存储空间
//C 可随机访问任一元素
//D 所需空间与线性表长度成正比
//
//7.在一个单链表中，若删除 P 所指结点的后续结点，C则执行 ?
//A p = p->next；p->next = p->next->next;
//B p->next = p->next;
//C p->next = p->next->next;
//D p = p->next->next
//
//8.一个单向链表队列中有一个指针p，现要将指针r插入到p之后，该进行的操作是__C__。
//A p->next = p->next->next
//B r->next = p; p->next = r->next
//C r->next = p->next; p->next = r
//D r = p->next; p->next = r->next
//E r->next = p; p->next = r
//F p = p->next->next