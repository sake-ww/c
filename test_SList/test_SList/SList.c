#define _CRT_SECURE_NO_WARNINGS 1
//��ͷ+����+��ѭ��������ɾ���ʵ��

#include"SList.h"
#include<malloc.h>
#include<assert.h>
#include<stdio.h>

//����ڵ�
SListNode* BuySListNode(SLDataType data)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == newNode)
	{
		assert(0);//���Ժ꣬����Ϊ0��ͻᴥ������0���ᴥ��
		//���ǽ���Ϊ�㣬��˼�������ΪNULLʱ���ᴥ������������һ��
		return NULL;//����ռ�ʧ��
	}
	//�������ռ�û������
	newNode->next = NULL;
	newNode->data = data;
	return newNode;
}

//β�� �������нڵ�
//���̣�
//1.�ҵ������е����һ���ڵ�
//2.β���½ڵ�
//1.��1��������û�нڵ�
//       head->NULL
//  ��2���������нڵ�
//       head->1->2->3->4->NULL
//                      ح->5->NULL

//��Ҫ�ں�����ͨ���β�head���޸��ⲿʵ��headָ���ָ��һ��ָ�뺯��������
//��Ϊhead���ⲿʵ��head��һ�ݿ���
//���������Ҫ���ݶ���ָ��

//�������ڣ��������ڼ�ͷָ��head��û�ж���
//����Ϊ�գ�head--��NULL����ʾ������û�нڵ� 
//β�壺
void SListPushBack(SListNode** head, SLDataType data)
{
	assert(head);//head�ض���ΪNULL����������ǳ���ķǷ����� 

	//������
	SListNode* newNode = BuySListNode(data);//����ڵ�
	if (NULL == *head)
	{
		*head = newNode;
	}
	else
	{
		//1.�ҵ������е����һ���ڵ�
		//  ����?��ô�������ҵ������һ���ڵ㣿��next = NULL��
		SListNode* cur = *head;//head��ΪNULL
		while (cur->next)
		{
			//cur++;��������д����Ϊ���������Ŀռ� 
			cur = cur->next;
		}
		//2.�����½ڵ�
		cur->next = newNode;
	}
}
//1.�������
//2.�����߼�
//βɾ��ÿ��Ҫɾ�������е����һ���ڵ�
//      1.�����һ���ڵ㣨��nextΪ�յĽڵ㣩
//      2.ɾ�����һ���ڵ�
void SListPopBack(SListNode** head)
{
	assert(head);//���Ƿ����
	if (NULL == *head)
	{
		//������
		return;
	}
	else if (NULL == (*head)->next)
	{
		//������ֻ��һ���ڵ�
		free(*head);
		*head = NULL;
	}
	else
	{
		//����ǿ�--������������һ���ڵ�
		SListNode* cur = *head;
		SListNode* prev = NULL;
		while (cur->next)
		{ 
			prev = cur;
			cur = cur->next;
		}
		prev->next = cur->next;
		//���һ���ڵ��Ѿ��ҵ�
		//ɾ���ýڵ�
		free(cur);
	}
}

//1.�������
//2.�����߼�
void SListPushFront(SListNode** head, SLDataType data)//ͷ�� 
{
	assert(head);//��֤�������������
	SListNode* newNode = BuySListNode(data);
	 
	newNode->next = *head;
	*head = newNode;

	//�����ڲ���ʱ������Ҫ�ı�����Ԫ��λ�ã�Ч���ر�ߣ�ʱ�临�ӷ�O��1��
	//1.������
	//if (NULL == *head)
	//{
	//	*head = newNode;
	//}
	//else
	//{
	//    //2.�����ж���ڵ�
	//	newNode->next = *head;
	//	*head = newNode;
	//}
}

//head�������ͷָ��ĵ�ַ
//1.�ȱ��  2.�ƶ�head  3.ɾ���ڵ�
void SListPopFornt(SListNode** head)//ͷɾ
{
	SListNode* delNode = NULL;
	assert(head);//�����������

	if (NULL == *head)
		return;

	delNode = *head;
	*head = delNode->next;
	free(delNode);
}


void SListInsertAfter(SListNode* pos, SLDataType data)//����λ�ò��� 
//���⣺����λ�õĲ�����Ҫ���������������˴�ֻ������������
//  �𣺼����ԣ�c++�л�ֱ�Ӹ�һ������������Ϊ�˺����ܹ�����
//���⣺��һ��Ϊʲô������Ǻ����أ�
//  ��:���ǲ����ܴ�������һ��Ԫ���ƶϳ����Ԫ�ص�ǰ��һ��Ԫ��
//���̣�1.����Ԫ�ص�nextָ����һ��Ԫ��
//      2.����Ԫ�ز����λ�ã�Ԫ�أ���nextָ����Ԫ��
{
	SListNode* newNode = NULL;
	if (NULL == pos)
		return;
	
	newNode = BuySListNode(data);
	newNode->next = pos->next;
	pos->next = newNode;
}


//pos���������һ���ڵ�
void SListEraseAfter(SListNode* pos)//����λ��ɾ��  ɾ�����������ͬ��
{
	SListNode* delNode = NULL;
	if (NULL == pos || NULL == pos->next)
		return;

	delNode = pos->next;
	pos->next = delNode->next;
	free(delNode);
}


//headָ��ľ��������е�һ���ڵ�
//ͳ���������ж��ٸ��ڵ�
int SListSize(SListNode* head)
{
	//assert(head);������������ԣ���Ϊ�˴������Ϊ�������������ǺϷ����

	//if (NULL == head)
	//	return 0;
	//������Ϊ��ʱ�������while�����У�countҲ��0���ظ���ɾ��

	SListNode* cur = head;
	int count = 0;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;

}

//�ж������Ƿ�Ϊ��
int SListEmpty(SListNode* head)
{
	return NULL == head;
}

//������list��Ѱ��һ��data���Ԫ�أ��ҵ����ؽڵ㣬û���ҵ����ؿ�
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


//�������е���Ч�ڵ�����
//����ͷɾ�����б���һ��һ����ɾ��
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




//��ӡһ���б�
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
void TestSList1()//����������һ��
{
	SListNode* listhead = NULL;//head�����ⲿ����ʵ��

	SListPushBack(&listhead, 1);
	SListPushBack(&listhead, 2);
	SListPushBack(&listhead, 3);
	SListPushBack(&listhead, 4);
	SListPushBack(&listhead, 5);

	//SListPushBack(NULL, 5);�Ƿ����ã�Ӧ��ʹ��assert�ó���ֹͣ����������

	SListPopBack(&listhead);

	PrintSList(listhead);

	SListDestroy(&listhead);//��������꣬��Ҫ������������Ԫ��ɾ������������Ԫ�ض�ʧ��
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
	SListInsertAfter(SListFind(listhead, 100), 10);//û�����λ�ã����������
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

